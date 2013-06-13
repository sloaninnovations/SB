<?php
/**
 * @file
 * enterprise_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function enterprise_blog_node_info() {
  $items = array(
    'enterprise_blog' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('A blog post is a post for your weblog. It countains a title and body and can be categorized using tags.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
