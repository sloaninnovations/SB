<?php
/**
 * @file
 * enterprise_user.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function enterprise_user_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_mini';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_mini';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'field_delimiter' => '',
        'field_formatter_class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['user|user|user_mini'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function enterprise_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|contributor';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'contributor';
  $ds_layout->layout = 'bootstrap_2col_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_picture',
      ),
      'right' => array(
        1 => 'blog_author',
      ),
    ),
    'fields' => array(
      'field_picture' => 'left',
      'blog_author' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(),
      'left' => array(
        'span4' => 'span4',
      ),
      'right' => array(
        'span8' => 'span8',
      ),
    ),
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
  $export['user|user|contributor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_about';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_about';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
        1 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
      'field_description' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-about-author' => 'style-about-author',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['user|user|user_about'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_user_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contributor';
  $ds_view_mode->label = 'Contributor';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['contributor'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_about';
  $ds_view_mode->label = 'User About';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_about'] = $ds_view_mode;

  return $export;
}
