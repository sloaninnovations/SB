<?php

/**
 * @file template.php
 */

/**
 * Preprocess variables for node.tpl.php
 *
 * @see node.tpl.php
 */
function expressive_preprocess_node(&$variables) {
  if ($variables['view_mode'] === 'teaser') {
    $key = array_search('row-fluid', $variables['classes_array']);
    if ($key !== FALSE) {
      unset($variables['classes_array'][$key]);
    }
  }
}

function expressive_preprocess_link(&$variables) {
  if (strpos($variables['path'], 'blocker') !== FALSE) {
    $attributes = &$variables['options']['attributes'];
    $variables['options']['html'] = TRUE;
    if (!isset($attributes['class'])) {
      $attributes['class'] = array();
    }
    $classes = &$attributes['class'];
    if (!in_array('btn', $classes)) {
      $classes[] = 'btn';
    }
    if (strpos($variables['path'], 'add') !== FALSE || strpos($variables['path'], 'edit') !== FALSE || strpos($variables['path'], 'delete') !== FALSE) {
      if (!in_array('btn-small', $classes)) {
        $classes[] = 'btn-mini';
      }
    }
    if (strpos($variables['path'], 'add') !== FALSE) {
      $variables['text'] = '<i class="icon-plus"></i>' . $variables['text'];
    }
    if (strpos($variables['path'], 'edit') !== FALSE) {
      $variables['text'] = '<i class="icon-edit"></i>' . $variables['text'];
    }
    if (strpos($variables['path'], 'delete') !== FALSE) {
      $variables['text'] = '<i class="icon-trash"></i>' . $variables['text'];
    }
  }
}

/**
 * Override Bootstrap base theme's implementation.
 */
function expressive_menu_local_action($variables) {
  return theme_menu_local_action($variables);
}

function expressive_menu_link(array $variables) {
  return theme_menu_link($variables);
}

/**
 * Implements hook_field_group_build_pre_render_alter().
 * Adds link markup to bean slides.
 */
function expressive_field_group_build_pre_render_alter(&$element) {
  if (isset($element['group_beanslide_caption']['field_slide_teaser'][0])) {
    $element['group_beanslide_caption']['field_slide_teaser'][0]['#prefix'] = '<div class="line"></div>';
  }
}

/**
 * Implements hook_preprocess_beanslide_collection().
 * Replace prev and next text with arrow icons.
 */
function expressive_preprocess_beanslide_collection(&$variables) {
  $bean = &$variables['bean'];
  if ($bean->data['slideshow_plugin'] === 'beanslide:flexslider') {
    $bean->data['plugin_settings']['prevText'] = theme('icon', array('bundle' => 'enterprise_base', 'icon' => 'oeicon-left-open-big'));
    $bean->data['plugin_settings']['nextText'] = theme('icon', array('bundle' => 'enterprise_base', 'icon' => 'oeicon-right-open-big'));
  }
}

/**
 * Implements hook_preprocess_field_collection_view().
 * Adds the container class to the slides.
 */
function expressive_preprocess_field_collection_view(&$variables) {
  $element = &$variables['element'];
  if ($element['#display']['type'] === 'beanslide_collection') {
    $element['#attributes']['class'][] = 'container';
  }
}

function expressive_field__field_blog_tags($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}
