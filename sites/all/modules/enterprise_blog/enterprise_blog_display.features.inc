<?php
/**
 * @file
 * enterprise_blog_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_blog_display_ctools_plugin_api() {
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
function enterprise_blog_display_views_api() {
  return array("api" => "3.0");
}
