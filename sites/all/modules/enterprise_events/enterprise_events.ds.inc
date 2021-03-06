<?php
/**
 * @file
 * enterprise_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function enterprise_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'social_media_share_buttons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ical_feed' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|enterprise_event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'date_time' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"date_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:5:{s:11:"format_type";s:4:"long";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:6:"fromto";s:4:"both";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_event_datetime";}',
        'load_terms' => 0,
        'field_delimiter' => '',
        'field_formatter_class' => '',
        'conditions' => array(),
      ),
    ),
    'social_media_share_buttons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ical_feed' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|enterprise_event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'field_delimiter' => '',
        'field_formatter_class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|enterprise_event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enterprise_event|upcoming_events';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enterprise_event';
  $ds_fieldsetting->view_mode = 'upcoming_events';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'strong',
        'class' => '',
        'field_delimiter' => '',
        'field_formatter_class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|enterprise_event|upcoming_events'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function enterprise_events_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'date_time';
  $ds_field->label = 'Date/Time';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['date_time'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function enterprise_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'sticky' => array(
        0 => 'social_media_share_buttons',
        1 => 'ical_feed',
        2 => 'field_event_datetime',
      ),
      'middle' => array(
        3 => 'body',
      ),
      'footer' => array(
        4 => 'field_event_address',
        5 => 'field_event_geocode',
      ),
    ),
    'fields' => array(
      'social_media_share_buttons' => 'sticky',
      'ical_feed' => 'sticky',
      'field_event_datetime' => 'sticky',
      'body' => 'middle',
      'field_event_address' => 'footer',
      'field_event_geocode' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-event-full' => 'style-event-full',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'sticky' => 'div',
      'middle' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|enterprise_event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'sticky' => array(
        0 => 'social_media_share_buttons',
      ),
      'middle' => array(
        1 => 'date_time',
        2 => 'body',
        3 => 'field_event_register_link',
      ),
      'event_details' => array(
        4 => 'field_event_geocode',
        5 => 'field_event_address',
        6 => 'field_event_datetime',
        7 => 'ical_feed',
      ),
    ),
    'fields' => array(
      'social_media_share_buttons' => 'sticky',
      'date_time' => 'middle',
      'body' => 'middle',
      'field_event_register_link' => 'middle',
      'field_event_geocode' => 'event_details',
      'field_event_address' => 'event_details',
      'field_event_datetime' => 'event_details',
      'ical_feed' => 'event_details',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-event-full' => 'style-event-full',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'sticky' => 'div',
      'middle' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|enterprise_event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_2col_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_event_datetime',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_datetime' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-event-teaser' => 'style-event-teaser',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|enterprise_event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enterprise_event|upcoming_events';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enterprise_event';
  $ds_layout->view_mode = 'upcoming_events';
  $ds_layout->layout = 'bootstrap_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_event_datetime',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_event_datetime' => 'middle',
      'title' => 'middle',
    ),
    'classes' => array(
      'layout_class' => array(
        'style-event-upcoming' => 'style-event-upcoming',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'sticky' => 'div',
      'middle' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|enterprise_event|upcoming_events'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function enterprise_events_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'upcoming_events';
  $ds_view_mode->label = 'Events: Upcoming';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['upcoming_events'] = $ds_view_mode;

  return $export;
}
