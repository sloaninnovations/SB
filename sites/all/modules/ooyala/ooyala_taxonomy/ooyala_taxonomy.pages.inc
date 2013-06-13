<?php

/**
 * @file
 * Menu callbacks and forms provided by the Ooyala taxonomy module.
 */

/**
 * Menu callback; Batch process new vocabulary syncing.
 */
function ooyala_taxonomy_sync_confirm($form, $form_state, $vids = array()) {
  $form = array();

  if (empty($vids) && isset($_GET['vids']) && is_array($_GET['vids'])) {
    $vids = $_GET['vids'];
  }

  $vocabularies = taxonomy_get_vocabularies();
  $vocabulary_list = array();
  foreach ($vocabularies as $vocabulary) {
    if (isset($vids[$vocabulary->vid])) {
      $vocabulary_list[] = check_plain($vocabulary->name);
    }
  }

  $form['vocabularies'] = array(
    '#type' => 'value',
    '#value' => $vids,
  );

  $question = t('Sync existing terms with Ooyala?');
  $description = '<p>' . t("The vocabularies you've chosen to sync need to be populated into Ooyala Backlot. The Drupal \"term\" data will be stored as Ooyala \"labels\". If you cancel this action, syncing will not be enabled. The following vocabularies need to be synced:") . '</p>';
  $description .= theme('item_list', array('items' => $vocabulary_list));
  $path = 'admin/config/ooyala';
  return confirm_form($form, $question, $path, $description);
}

function ooyala_taxonomy_sync_confirm_submit($form, &$form_state) {
  $batch = array(
    'operations' => array(),
    'finished' => 'ooyala_taxonomy_term_sync_push_finished',
    'title' => t('Processing'),
    'error_message' => t('The sync has encountered an error.'),
    'file' => drupal_get_path('module', 'ooyala_taxonomy') .'/ooyala_taxonomy.inc',
  );

  // Push taxonomy terms to Ooyala one vocabulary at a time.
  foreach ($form_state['values']['vocabularies'] as $vid => $olid) {
    $batch['operations'][] = array('ooyala_taxonomy_term_sync_push_terms', array($vid, $olid));
  }

  // Then populate video-label relationships for the new labels.
  $batch['operations'][] = array('ooyala_taxonomy_term_sync_push_nodes', array(array_keys($form_state['values']['vocabularies'])));

  batch_set($batch);
  $form_state['redirect'] = 'admin/config/ooyala';
}


/**
 * Form alter code moved from ooyala_taxonomy.module for efficiency.
 */
function _ooyala_taxonomy_settings_form(&$form, &$form_state) {
  $form['ooyala_taxonomy'] = array(
    '#type' => 'fieldset',
    '#title' => t('Taxonomy vocabulary syncing'),
    '#description' => t('These options allow you to synchronize <a href="!taxonomy_url">Taxonomy vocabularies</a> with <a href="!ooyala_url">Ooyala labels</a>. This can be useful to maintain useful information within both Ooyala Backlot and Drupal.', array('!taxonomy_url' => url('admin/structure/taxonomy'), '!ooyala_url' => 'http://www.ooyala.com/www3/support_content_management#labels')),
    '#tree' => TRUE,
  );

  $vocabularies = (array) module_invoke('taxonomy', 'get_vocabularies');
  $api_active = ooyala_api_available();
  $problems = array();

  if (empty($vocabularies)) {
    $problems[] = t('There are currently no Taxonomy vocabularies available to synchronize.');
  }
  if (!$api_active) {
    $problems[] = t('The Ooyala API is currently not available. Check that your server can make HTTP requests.');
  }
  else {
    $labels = ooyala_api_label_list('<root>');
    if ($labels === FALSE) {
      $problems[] = t('The Ooyala Parter and Secret code could not be validated (you may need to save this page).');
    }
    elseif (count($labels) == 0) {
      $problems[] = t('Currently there are no labels defined within <a href="!ooyala_backlot">Ooyala Backlot</a>. At least one label needs to be created in order to synchronize it with a Taxonomy vocabulary.', array('!ooyala_backlot' => 'https://backlot.ooyala.com/backlot/web'));
    }
  }

  if (empty($problems)) {
    $form['ooyala_taxonomy']['#description'] .= ' ' . t('Each select list below represents a Drupal taxonomy. The items within each list are top-level Ooyala labels that have been pulled from Backlot.');
    $options = array();
    foreach ($labels as $olid => $label) {
      $label = ltrim($label, '/');
      $options[$olid] = $label;
    }

    $default_values = variable_get('ooyala_taxonomy', array());
    foreach ($vocabularies as $vocabulary) {
      $form['ooyala_taxonomy'][$vocabulary->vid] = array(
        '#title' => $vocabulary->name,
        '#type' => 'select',
        '#options' => array_merge(array('' => t('-- No syncing -- ')), $options),
        '#default_value' => isset($default_values[$vocabulary->vid]) ? $default_values[$vocabulary->vid] : '',
      );
    }
    $form['ooyala_taxonomy_current'] = array(
      '#type' => 'value',
      '#value' => $default_values,
    );
  }
  else {
    $form['ooyala_taxonomy']['#description'] .= ' <strong>' . t('Taxonomy syncing cannot be enabled for the following reasons:') . '</strong>' . theme('item_list', $problems);
  }

  // Add the additional submit handler needed for Taxonomy syncing.
  if (empty($problems)) {
    $form['#submit'][] = '_ooyala_taxonomy_settings_form_submit';
  }
}


/**
 * Submit handler for ooyala_settings_form().
 *
 * Taxonomies need special form handling. All other settings are saved by the
 * standard system_settings_form_submit() function.
 */
function _ooyala_taxonomy_settings_form_submit($form, &$form_state) {
  $existing_vocabularies = $form_state['values']['ooyala_taxonomy_current'];
  $pending_vocabularies = array();
  $new_vocabularies = array();
  foreach ($form_state['values']['ooyala_taxonomy'] as $vid => $olid) {
    if ($olid) {
      // If syncing is already enabled, keep it enabled.
      if (!empty($existing_vocabularies[$vid])) {
        $new_vocabularies[$vid] = $olid;
      }
      // Syncing is being enabled for the first time.
      else {
        // If this vocabulary has terms, add it to the list for batch operation.
        if (count(taxonomy_get_tree($vid, 0, NULL, FALSE))) {
          $pending_vocabularies[$vid] = $olid;
        }
        // If the vocabulary is empty, just enable syncing immediately.
        else {
          $new_vocabularies[$vid] = $olid;
        }
      }
    }
  }

  // Set the taxonomy variable immediately for existing or empty vocabularies.
  variable_set('ooyala_taxonomy', $new_vocabularies);

  // Set the redirect to enable vocabularies that have existing terms.
  if (!empty($pending_vocabularies)) {
    $form_state['redirect'] = array('admin/config/media/ooyala/sync-taxonomy', array('query' => array('vids' => $pending_vocabularies)));
  }
}
