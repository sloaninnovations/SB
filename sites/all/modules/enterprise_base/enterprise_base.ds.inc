<?php
/**
 * @file
 * enterprise_base.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_base_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'List';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['list'] = $ds_view_mode;

  return $export;
}
