<?php

/**
 * @file template.php
 */

function venture_preprocess_link(&$variables) {
  if (strpos($variables['path'], 'blocker') !== FALSE) {
    $attributes = &$variables['options']['attributes'];
    if (!isset($attributes['class'])) {
      $attributes['class'] = array();
    }
    $classes = &$attributes['class'];
    if (!in_array('btn', $classes)) {
      $classes[] = 'btn';
    }
    if (strpos($variables['path'], 'add') !== FALSE) {
      if (!in_array('btn-small', $classes)) {
        $classes[] = 'btn-small';
      }
    }
    if (strpos($variables['path'], 'edit') !== FALSE || strpos($variables['path'], 'delete') !== FALSE) {
      if (!in_array('btn-small', $classes)) {
        $classes[] = 'btn-mini';
      }
    }
  }
}

/**
 * Override Bootstrap base theme's implementation.
 */
function venture_menu_local_action($variables) {
  return theme_menu_local_action($variables);
}

function venture_menu_link(array $variables) {
  return theme_menu_link($variables);
}

/**
 * Implements hook_field_group_build_pre_render_alter().
 * Adds link markup to bean slides.
 */
function venture_field_group_build_pre_render_alter(&$element) {
  if (isset($element['group_beanslide_caption']['field_slide_teaser'][0])) {
    $element['group_beanslide_caption']['field_slide_teaser'][0]['#prefix'] = '<div class="line"></div>';
  }
}

/**
 * Implements hook_preprocess_field_collection_view().
 * Adds the container class to the slides.
 */
function venture_preprocess_field_collection_view(&$variables) {
  $element = &$variables['element'];
  if ($element['#display']['type'] === 'beanslide_collection') {
    $element['#attributes']['class'][] = 'container';
  }
}

function venture_field__field_blog_tags($variables) {
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
