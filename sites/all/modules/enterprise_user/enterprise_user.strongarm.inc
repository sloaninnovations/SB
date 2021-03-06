<?php
/**
 * @file
 * enterprise_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function enterprise_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'user_about' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'user_mini' => array(
        'custom_settings' => TRUE,
      ),
      'contributor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '9',
        ),
        'account' => array(
          'weight' => '4',
        ),
        'timezone' => array(
          'weight' => '8',
        ),
        'picture' => array(
          'weight' => '6',
        ),
        'overlay_control' => array(
          'weight' => '5',
        ),
        'wysiwyg' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'user_about' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'user_mini' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'contributor' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  return $export;
}
