<?php
/**
 * @file
 * enterprise_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_news_ctools_plugin_api() {
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
function enterprise_news_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enterprise_news_node_info() {
  $items = array(
    'enterprise_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use <i>News</i> to publish news information about the company.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
