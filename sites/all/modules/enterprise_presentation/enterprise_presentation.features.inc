<?php
/**
 * @file
 * enterprise_presentation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_presentation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enterprise_presentation_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function enterprise_presentation_image_default_styles() {
  $styles = array();

  // Exported image style: enterprise_presentation_profile_image.
  $styles['enterprise_presentation_profile_image'] = array(
    'name' => 'enterprise_presentation_profile_image',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function enterprise_presentation_node_info() {
  $items = array(
    'enterprise_presentation' => array(
      'name' => t('Enterprise Presentation'),
      'base' => 'node_content',
      'description' => t('Show off your expertise and team knowledge through presentations your team has given.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
