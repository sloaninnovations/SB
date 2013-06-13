<?php
/**
 * @file
 * enterprise_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function enterprise_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'enterprise_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Enterprise Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_lastname',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column span6';
  $handler->display->display_options['style_options']['row_classes'] = 'views-row row-fluid';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'user_mini';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'realname|realname';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'user_mini';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_3'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_4'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_5'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_6'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_7'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_8'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_9'] = 'full';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_lastname']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_lastname']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_lastname']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lastname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_lastname']['settings'] = array(
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: User: Last Name (field_lastname) */
  $handler->display->display_options['sorts']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['sorts']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['sorts']['field_lastname_value']['field'] = 'field_lastname_value';
  /* Sort criterion: User: First Name (field_firstname) */
  $handler->display->display_options['sorts']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['sorts']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['sorts']['field_firstname_value']['field'] = 'field_firstname_value';
  /* Contextual filter: User: Last Name (field_lastname) */
  $handler->display->display_options['arguments']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['arguments']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['arguments']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['arguments']['field_lastname_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_lastname_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lastname_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_lastname_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_lastname_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_lastname_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_lastname_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_lastname_value']['path_case'] = 'lower';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'team';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Last Name (field_lastname) */
  $handler->display->display_options['arguments']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['arguments']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['arguments']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['arguments']['field_lastname_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_lastname_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_lastname_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lastname_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_lastname_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_lastname_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_lastname_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_lastname_value']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['field_lastname_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_lastname_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_lastname_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_lastname_value']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['enterprise_users'] = $view;

  return $export;
}
