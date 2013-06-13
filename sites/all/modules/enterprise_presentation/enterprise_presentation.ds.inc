<?php
/**
 * @file
 * enterprise_presentation.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function enterprise_presentation_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_presentation|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_presentation';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'enterprise_presenter_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
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
  $export['node|enterprise_presentation|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function enterprise_presentation_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'enterprise_presenter_name';
  $ds_field->label = 'Presenters Name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:field-enterprise-presenter:url]" title="[node:field-enterprise-presenter:field-firstname] [node:field-enterprise-presenter:field-lastname]">[node:field-enterprise-presenter:field-firstname] [node:field-enterprise-presenter:field-lastname]</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['enterprise_presenter_name'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function enterprise_presentation_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_presentation|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_presentation';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_enterprise_presenter',
      ),
      'right' => array(
        1 => 'enterprise_presenter_name',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_enterprise_presenter' => 'left',
      'enterprise_presenter_name' => 'right',
      'title' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|enterprise_presentation|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|presenter_image';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'presenter_image';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
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
  $export['user|user|presenter_image'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_presentation_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'presenter_image';
  $ds_view_mode->label = 'Presenter Image';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['presenter_image'] = $ds_view_mode;

  return $export;
}
