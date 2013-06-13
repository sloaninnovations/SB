<?php
/**
 * @file
 * enterprise_product.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function enterprise_product_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_product|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_product';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'products_back_to_all' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'social_media_share_buttons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'prev_next_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|enterprise_product|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_product|product_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_product';
  $ds_fieldsetting->view_mode = 'product_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'field_delimiter' => '',
        'field_formatter_class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|enterprise_product|product_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function enterprise_product_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'products_back_to_all';
  $ds_field->label = 'Products - Back to all';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/products" title="Back to all products">Back to All Products</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['products_back_to_all'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function enterprise_product_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_product|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_product';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_2col_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'social_media_share_buttons',
        1 => 'prev_next_node',
        2 => 'group_product_sticky',
        3 => 'body',
        4 => 'products_back_to_all',
      ),
      'right' => array(
        5 => 'field_product_image',
      ),
    ),
    'fields' => array(
      'social_media_share_buttons' => 'left',
      'prev_next_node' => 'left',
      'group_product_sticky' => 'left',
      'body' => 'left',
      'products_back_to_all' => 'left',
      'field_product_image' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(),
      'header' => array(
        'span12' => 'span12',
      ),
      'left' => array(
        'span6' => 'span6',
      ),
      'right' => array(
        'span6' => 'span6',
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
  $export['node|enterprise_product|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_product|product_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_product';
  $ds_layout->view_mode = 'product_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_product_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_product_image' => 'ds_content',
      'title' => 'ds_content',
    ),
    'limit' => array(
      'field_product_image' => '1',
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
  $export['node|enterprise_product|product_teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_product_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'product_teaser';
  $ds_view_mode->label = 'Product Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['product_teaser'] = $ds_view_mode;

  return $export;
}
