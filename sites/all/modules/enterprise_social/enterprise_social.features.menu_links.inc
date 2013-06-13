<?php
/**
 * @file
 * enterprise_social.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function enterprise_social_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-social-menu:http://pinterest.com
  $menu_links['menu-social-menu:http://pinterest.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://pinterest.com',
    'router_path' => '',
    'link_title' => 'Pinterest',
    'options' => array(
      'icon' => array(
        'bundle' => 'enterprise_social',
        'icon' => 'social-pinterest',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'element-invisible',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-social-menu:http://plus.google.com
  $menu_links['menu-social-menu:http://plus.google.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://plus.google.com',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'icon' => array(
        'bundle' => 'enterprise_social',
        'icon' => 'social-gplus',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'element-invisible',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-social-menu:http://www.facebook.com
  $menu_links['menu-social-menu:http://www.facebook.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://www.facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'enterprise_social',
        'icon' => 'social-facebook',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'element-invisible',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-social-menu:http://www.linkedin.com
  $menu_links['menu-social-menu:http://www.linkedin.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://www.linkedin.com',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'icon' => array(
        'bundle' => 'enterprise_social',
        'icon' => 'social-linkedin',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'element-invisible',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-social-menu:http://www.youtube.com
  $menu_links['menu-social-menu:http://www.youtube.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://www.youtube.com',
    'router_path' => '',
    'link_title' => 'YouTube',
    'options' => array(
      'icon' => array(
        'bundle' => 'enterprise_social',
        'icon' => 'social-youtube',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'element-invisible',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Google+');
  t('LinkedIn');
  t('Pinterest');
  t('YouTube');


  return $menu_links;
}
