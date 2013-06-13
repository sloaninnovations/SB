<?php
/**
 * @file
 * enterprise_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function enterprise_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__image';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'collection_landing' => array(
        'custom_settings' => TRUE,
      ),
      'current_exhibition' => array(
        'custom_settings' => FALSE,
      ),
      'collection_landing_blocks' => array(
        'custom_settings' => TRUE,
      ),
      'inline_image' => array(
        'custom_settings' => TRUE,
      ),
      'left_image' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'inline_image' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'left_image' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__image'] = $strongarm;

  return $export;
}
