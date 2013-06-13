<?php
/**
 * @file
 * Written by Henri MEDOT <henri.medot[AT]absyx[DOT]fr>
 * http://www.absyx.fr
 */

/**
 * Node Option Premium module settings form.
 *
 * @see nopremium_settings_form_submit()
 * @ingroup forms
 */
function nopremium_settings_form() {
  $form['message'] = array(
    '#type' => 'fieldset',
    '#title' => t('Premium messages'),
    '#description' => t('You may customize the messages displayed to unprivileged users trying to view full premium contents.'),
  );
  $form['message']['nopremium_message'] = array(
    '#type' => 'text_format',
    '#title' => t('Default message'),
    '#description' => t('This message will apply to all content types with blank messages below.'),
    '#default_value' => nopremium_get_message(),
    '#rows' => 3,
    '#required' => TRUE,
    '#format' => nopremium_get_text_format(),
  );
  foreach (node_type_get_names() as $type => $name) {
    $form['message']['nopremium_message_'. $type] = array(
      '#type' => 'text_format',
      '#title' => t('Message for %type content type', array('%type' => $name)),
      '#default_value' => variable_get('nopremium_message_'. $type, ''),
      '#format' => variable_get('nopremium_text_format_' . $type, filter_fallback_format()),
      '#rows' => 3,
    );
  }

  $form['buttons']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  return $form;
}

/**
 * Submit handler for Node Option module settings form.
 *
 * @see nopremium_settings_form()
 */
function nopremium_settings_form_submit($form, $form_state) {
  $values = $form_state['values'];
  variable_set('nopremium_message', $values['nopremium_message']['value']);
  variable_set('nopremium_text_format', $values['nopremium_message']['format']);
  foreach (node_type_get_names() as $type => $name) {
    variable_set('nopremium_message_' . $type, $values['nopremium_message_' . $type]['value']);
    variable_set('nopremium_text_format_' . $type, $values['nopremium_message_' . $type]['format']);
  }

  drupal_set_message(t('The configuration options have been saved.'));
}
