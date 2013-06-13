<?php
/**
 * @file
 * enterprise_presentation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function enterprise_presentation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'enterprise_presentations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enterprise Presentations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Team Presentations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column span3';
  $handler->display->display_options['style_options']['row_classes'] = 'views-row row-fluid';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Co-Presenter */
  $handler->display->display_options['fields']['field_enterprise_copresenter']['id'] = 'field_enterprise_copresenter';
  $handler->display->display_options['fields']['field_enterprise_copresenter']['table'] = 'field_data_field_enterprise_copresenter';
  $handler->display->display_options['fields']['field_enterprise_copresenter']['field'] = 'field_enterprise_copresenter';
  $handler->display->display_options['fields']['field_enterprise_copresenter']['type'] = 'user_reference_user';
  $handler->display->display_options['fields']['field_enterprise_copresenter']['settings'] = array(
    'user_reference_view_mode' => 'user_mini',
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_enterprise_location_presen']['id'] = 'field_enterprise_location_presen';
  $handler->display->display_options['fields']['field_enterprise_location_presen']['table'] = 'field_data_field_enterprise_location_presen';
  $handler->display->display_options['fields']['field_enterprise_location_presen']['field'] = 'field_enterprise_location_presen';
  $handler->display->display_options['fields']['field_enterprise_location_presen']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enterprise_location_presen']['settings'] = array(
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Guest Presenter */
  $handler->display->display_options['fields']['field_enterprise_guest_presenter']['id'] = 'field_enterprise_guest_presenter';
  $handler->display->display_options['fields']['field_enterprise_guest_presenter']['table'] = 'field_data_field_enterprise_guest_presenter';
  $handler->display->display_options['fields']['field_enterprise_guest_presenter']['field'] = 'field_enterprise_guest_presenter';
  $handler->display->display_options['fields']['field_enterprise_guest_presenter']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_enterprise_guest_presenter']['settings'] = array(
    'view_mode' => 'full',
    'field_delimiter' => '',
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_enterprise_guest_presenter']['delta_offset'] = '0';
  /* Field: Content: Presenter */
  $handler->display->display_options['fields']['field_enterprise_presenter']['id'] = 'field_enterprise_presenter';
  $handler->display->display_options['fields']['field_enterprise_presenter']['table'] = 'field_data_field_enterprise_presenter';
  $handler->display->display_options['fields']['field_enterprise_presenter']['field'] = 'field_enterprise_presenter';
  $handler->display->display_options['fields']['field_enterprise_presenter']['type'] = 'user_reference_user';
  $handler->display->display_options['fields']['field_enterprise_presenter']['settings'] = array(
    'user_reference_view_mode' => 'user_mini',
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enterprise_presentation' => 'enterprise_presentation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'presentations';
  $export['enterprise_presentations'] = $view;

  return $export;
}
