<?php
/**
 * @file
 * enterprise_social.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function enterprise_social_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social-menu.
  $menus['menu-social-menu'] = array(
    'menu_name' => 'menu-social-menu',
    'title' => 'Social Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Social Menu');


  return $menus;
}
