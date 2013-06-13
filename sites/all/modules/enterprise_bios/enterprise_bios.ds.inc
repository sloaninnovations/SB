<?php
/**
 * @file
 * enterprise_bios.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function enterprise_bios_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_bio|biography_mini';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_bio';
  $ds_fieldsetting->view_mode = 'biography_mini';
  $ds_fieldsetting->settings = array(
    'title' => array(
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
  $export['node|enterprise_bio|biography_mini'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_bio|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_bio';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|enterprise_bio|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_bio|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_bio';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'field_delimiter' => '',
        'field_formatter_class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|enterprise_bio|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function enterprise_bios_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_bio|biography_mini';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_bio';
  $ds_layout->view_mode = 'biography_mini';
  $ds_layout->layout = 'bootstrap_2col_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_bio_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_bio_job_title',
      ),
    ),
    'fields' => array(
      'field_bio_image' => 'left',
      'title' => 'right',
      'field_bio_job_title' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-bio-mini' => 'style-bio-mini',
      ),
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
  $export['node|enterprise_bio|biography_mini'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_bio|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_bio';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_2col_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_bio_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_bio_job_title',
      ),
      'footer' => array(
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_bio_image' => 'left',
      'title' => 'right',
      'field_bio_job_title' => 'right',
      'body' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-bio-full' => 'style-bio-full',
      ),
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
  $export['node|enterprise_bio|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_bio|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_bio';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_2col_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_bio_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_bio_job_title',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_bio_image' => 'left',
      'title' => 'right',
      'field_bio_job_title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-bio-teaser' => 'style-bio-teaser',
      ),
      'left' => array(
        'span2' => 'span2',
      ),
      'right' => array(
        'span10' => 'span10',
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
  $export['node|enterprise_bio|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_bios_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'biography_mini';
  $ds_view_mode->label = 'Biography Mini';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['biography_mini'] = $ds_view_mode;

  return $export;
}
