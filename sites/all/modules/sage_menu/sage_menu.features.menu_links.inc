<?php
/**
 * @file
 * sage_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sage_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:http://base-domain/company
  $menu_links['main-menu:http://base-domain/company'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company',
    'router_path' => 'node/%',
    'link_title' => 'Company',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
  );
  // Exported menu link: main-menu:http://base-domain/company/careers
  $menu_links['main-menu:http://base-domain/company/careers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/careers',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/contact-us
  $menu_links['main-menu:http://base-domain/company/contact-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/contact-us',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/goodwill
  $menu_links['main-menu:http://base-domain/company/goodwill'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/goodwill',
    'router_path' => 'node/%',
    'link_title' => 'Goodwill',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/history
  $menu_links['main-menu:http://base-domain/company/history'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/history',
    'router_path' => 'node/%',
    'link_title' => 'History',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/leadership
  $menu_links['main-menu:http://base-domain/company/leadership'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/leadership',
    'router_path' => 'node/%',
    'link_title' => 'Leadership',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/news
  $menu_links['main-menu:http://base-domain/company/news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/news',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/partners
  $menu_links['main-menu:http://base-domain/company/partners'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/partners',
    'router_path' => 'node/%',
    'link_title' => 'Partners',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/company/press-releases
  $menu_links['main-menu:http://base-domain/company/press-releases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/company/press-releases',
    'router_path' => 'node/%',
    'link_title' => 'Press Releases',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'http://base-domain/company',
  );
  // Exported menu link: main-menu:http://base-domain/industries
  $menu_links['main-menu:http://base-domain/industries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries',
    'router_path' => 'node/%',
    'link_title' => 'Industries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
  );
  // Exported menu link: main-menu:http://base-domain/industries/animal-welfare
  $menu_links['main-menu:http://base-domain/industries/animal-welfare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/animal-welfare',
    'router_path' => 'node/%',
    'link_title' => 'Animal Welfare',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/arts-culture-and-humanities
  $menu_links['main-menu:http://base-domain/industries/arts-culture-and-humanities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/arts-culture-and-humanities',
    'router_path' => 'node/%',
    'link_title' => 'Arts, Culture and Humanities',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/environmental-conservation
  $menu_links['main-menu:http://base-domain/industries/environmental-conservation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/environmental-conservation',
    'router_path' => 'node/%',
    'link_title' => 'Environmental Conservation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/faith-based-organizations
  $menu_links['main-menu:http://base-domain/industries/faith-based-organizations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/faith-based-organizations',
    'router_path' => 'node/%',
    'link_title' => 'Faith-based Organizations',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/government
  $menu_links['main-menu:http://base-domain/industries/government'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/government',
    'router_path' => 'node/%',
    'link_title' => 'Government',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/health-hospitals
  $menu_links['main-menu:http://base-domain/industries/health-hospitals'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/health-hospitals',
    'router_path' => 'node/%',
    'link_title' => 'Health & Hospitals',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/health-social-services
  $menu_links['main-menu:http://base-domain/industries/health-social-services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/health-social-services',
    'router_path' => 'node/%',
    'link_title' => 'Health & Social Services',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/higher-education
  $menu_links['main-menu:http://base-domain/industries/higher-education'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/higher-education',
    'router_path' => 'node/%',
    'link_title' => 'Higher Education',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/independent-private-charter-schools
  $menu_links['main-menu:http://base-domain/industries/independent-private-charter-schools'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/independent-private-charter-schools',
    'router_path' => 'node/%',
    'link_title' => 'Independent Private & Charter Schools',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/national-organizations
  $menu_links['main-menu:http://base-domain/industries/national-organizations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/national-organizations',
    'router_path' => 'node/%',
    'link_title' => 'National Organizations',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/industries/philanthropic-foundations
  $menu_links['main-menu:http://base-domain/industries/philanthropic-foundations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/industries/philanthropic-foundations',
    'router_path' => 'node/%',
    'link_title' => 'Philanthropic Foundations',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'http://base-domain/industries',
  );
  // Exported menu link: main-menu:http://base-domain/partners
  $menu_links['main-menu:http://base-domain/partners'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/partners',
    'router_path' => 'node/%',
    'link_title' => 'Partners',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
  );
  // Exported menu link: main-menu:http://base-domain/partners/become-a-partner
  $menu_links['main-menu:http://base-domain/partners/become-a-partner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/partners/become-a-partner',
    'router_path' => 'node/%',
    'link_title' => 'Become a Partner',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/partners',
  );
  // Exported menu link: main-menu:http://base-domain/partners/find-a-partner
  $menu_links['main-menu:http://base-domain/partners/find-a-partner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/partners/find-a-partner',
    'router_path' => 'node/%',
    'link_title' => 'Find a Partner',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/partners',
  );
  // Exported menu link: main-menu:http://base-domain/partners/partner-resources
  $menu_links['main-menu:http://base-domain/partners/partner-resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/partners/partner-resources',
    'router_path' => 'node/%',
    'link_title' => 'Partner Resources',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/partners',
  );
  // Exported menu link: main-menu:http://base-domain/product/professional-services
  $menu_links['main-menu:http://base-domain/product/professional-services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/product/professional-services',
    'router_path' => 'node/%',
    'link_title' => 'Professional Services',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products
  $menu_links['main-menu:http://base-domain/products'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products',
    'router_path' => 'node/%',
    'link_title' => 'Products',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
  );
  // Exported menu link: main-menu:http://base-domain/products/awards-reviews
  $menu_links['main-menu:http://base-domain/products/awards-reviews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/awards-reviews',
    'router_path' => 'node/%',
    'link_title' => 'Awards & Reviews',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/customer-testimonials
  $menu_links['main-menu:http://base-domain/products/customer-testimonials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/customer-testimonials',
    'router_path' => 'node/%',
    'link_title' => 'Customer Testimonials',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/fund-accounting
  $menu_links['main-menu:http://base-domain/products/fund-accounting'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/fund-accounting',
    'router_path' => 'node/%',
    'link_title' => 'Fund Accounting',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/fundraising-50
  $menu_links['main-menu:http://base-domain/products/fundraising-50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/fundraising-50',
    'router_path' => 'node/%',
    'link_title' => 'Fundraising 50',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/fundraising-online
  $menu_links['main-menu:http://base-domain/products/fundraising-online'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/fundraising-online',
    'router_path' => 'node/%',
    'link_title' => 'Fundraising Online',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/grant-management
  $menu_links['main-menu:http://base-domain/products/grant-management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/grant-management',
    'router_path' => 'node/%',
    'link_title' => 'Grant Management',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/millennium
  $menu_links['main-menu:http://base-domain/products/millennium'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/millennium',
    'router_path' => 'node/%',
    'link_title' => 'Millennium',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/products/nonprofit-online
  $menu_links['main-menu:http://base-domain/products/nonprofit-online'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/products/nonprofit-online',
    'router_path' => 'node/%',
    'link_title' => 'Nonprofit Online',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/products',
  );
  // Exported menu link: main-menu:http://base-domain/resources
  $menu_links['main-menu:http://base-domain/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
  );
  // Exported menu link: main-menu:http://base-domain/resources/blog
  $menu_links['main-menu:http://base-domain/resources/blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/blog',
    'router_path' => 'resources/blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/customer-stories
  $menu_links['main-menu:http://base-domain/resources/customer-stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/customer-stories',
    'router_path' => 'resources/customer-stories',
    'link_title' => 'Customer Stories',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/event
  $menu_links['main-menu:http://base-domain/resources/event'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/event',
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/industry-news
  $menu_links['main-menu:http://base-domain/resources/industry-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/industry-news',
    'router_path' => 'node/%',
    'link_title' => 'Industry News',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/infographics
  $menu_links['main-menu:http://base-domain/resources/infographics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/infographics',
    'router_path' => 'node/%',
    'link_title' => 'Infographics',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/newsletters
  $menu_links['main-menu:http://base-domain/resources/newsletters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/newsletters',
    'router_path' => 'resources/newsletters',
    'link_title' => 'Newsletters',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/np-insights
  $menu_links['main-menu:http://base-domain/resources/np-insights'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/np-insights',
    'router_path' => 'resources/np-insights',
    'link_title' => 'NP Insights (Research)',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/videos
  $menu_links['main-menu:http://base-domain/resources/videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/videos',
    'router_path' => 'node/%',
    'link_title' => 'Videos',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/webcasts
  $menu_links['main-menu:http://base-domain/resources/webcasts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/webcasts',
    'router_path' => 'resources/webcasts',
    'link_title' => 'Webcasts',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/webinars
  $menu_links['main-menu:http://base-domain/resources/webinars'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/webinars',
    'router_path' => 'resources/webinars',
    'link_title' => 'Webinars',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/resources/whitepapers
  $menu_links['main-menu:http://base-domain/resources/whitepapers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/resources/whitepapers',
    'router_path' => 'resources/whitepapers',
    'link_title' => 'White Papers',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'http://base-domain/resources',
  );
  // Exported menu link: main-menu:http://base-domain/support
  $menu_links['main-menu:http://base-domain/support'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/support',
    'router_path' => 'node/%',
    'link_title' => 'Support',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
  );
  // Exported menu link: main-menu:http://base-domain/support/emergency-assistance
  $menu_links['main-menu:http://base-domain/support/emergency-assistance'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/support/emergency-assistance',
    'router_path' => 'node/%',
    'link_title' => 'Emergency Assistance',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/support',
  );
  // Exported menu link: main-menu:http://base-domain/support/support-central
  $menu_links['main-menu:http://base-domain/support/support-central'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/support/support-central',
    'router_path' => 'node/%',
    'link_title' => 'Support Central',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/support',
  );
  // Exported menu link: main-menu:http://base-domain/support/support-programs
  $menu_links['main-menu:http://base-domain/support/support-programs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/support/support-programs',
    'router_path' => 'node/%',
    'link_title' => 'Support Programs',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/support',
  );
  // Exported menu link: main-menu:http://base-domain/training
  $menu_links['main-menu:http://base-domain/training'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/training',
    'router_path' => 'node/%',
    'link_title' => 'Training',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
  );
  // Exported menu link: main-menu:http://base-domain/training/get-certified
  $menu_links['main-menu:http://base-domain/training/get-certified'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/training/get-certified',
    'router_path' => 'node/%',
    'link_title' => 'Get Certified',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://base-domain/training',
  );
  // Exported menu link: main-menu:http://base-domain/training/training-central
  $menu_links['main-menu:http://base-domain/training/training-central'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/training/training-central',
    'router_path' => 'node/%',
    'link_title' => 'Training Central',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'http://base-domain/training',
  );
  // Exported menu link: main-menu:http://base-domain/training/training-opportunities
  $menu_links['main-menu:http://base-domain/training/training-opportunities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://base-domain/training/training-opportunities',
    'router_path' => 'node/%',
    'link_title' => 'Training Opportunities',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://base-domain/training',
  );
  // Exported menu link: menu-help:http://base-domain/
  $menu_links['menu-help:http://base-domain/'] = array(
    'menu_name' => 'menu-help',
    'link_path' => 'http://base-domain/',
    'router_path' => '',
    'link_title' => 'Knowledgebase',
    'options' => array(
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Animal Welfare');
  t('Arts, Culture and Humanities');
  t('Awards & Reviews');
  t('Become a Partner');
  t('Blog');
  t('Careers');
  t('Company');
  t('Contact Us');
  t('Customer Stories');
  t('Customer Testimonials');
  t('Emergency Assistance');
  t('Environmental Conservation');
  t('Events');
  t('Faith-based Organizations');
  t('Find a Partner');
  t('Fund Accounting');
  t('Fundraising 50');
  t('Fundraising Online');
  t('Get Certified');
  t('Goodwill');
  t('Government');
  t('Grant Management');
  t('Health & Hospitals');
  t('Health & Social Services');
  t('Higher Education');
  t('History');
  t('Independent Private & Charter Schools');
  t('Industries');
  t('Industry News');
  t('Infographics');
  t('Knowledgebase');
  t('Leadership');
  t('Millennium');
  t('NP Insights (Research)');
  t('National Organizations');
  t('News');
  t('Newsletters');
  t('Nonprofit Online');
  t('Partner Resources');
  t('Partners');
  t('Philanthropic Foundations');
  t('Press Releases');
  t('Products');
  t('Professional Services');
  t('Resources');
  t('Support');
  t('Support Central');
  t('Support Programs');
  t('Training');
  t('Training Central');
  t('Training Opportunities');
  t('Videos');
  t('Webcasts');
  t('Webinars');
  t('White Papers');


  return $menu_links;
}
