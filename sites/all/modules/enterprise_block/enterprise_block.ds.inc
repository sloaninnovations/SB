<?php
/**
 * @file
 * enterprise_block.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function enterprise_block_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|image|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['bean|image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|image|inline_image';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'inline_image';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_image',
        2 => 'field_body',
        3 => 'field_resource_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_image' => 'ds_content',
      'field_body' => 'ds_content',
      'field_resource_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['bean|image|inline_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|image|left_image';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'left_image';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_body',
        3 => 'field_resource_link',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title' => 'right',
      'field_body' => 'right',
      'field_resource_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['bean|image|left_image'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_block_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'inline_image';
  $ds_view_mode->label = 'Inline Image';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
  );
  $export['inline_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_image';
  $ds_view_mode->label = 'Left Image';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
  );
  $export['left_image'] = $ds_view_mode;

  return $export;
}
