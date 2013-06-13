<?php
/**
 * @file
 * enterprise_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function enterprise_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_sticky|node|enterprise_product|full';
  $field_group->group_name = 'group_product_sticky';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'enterprise_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sticky Header',
    'weight' => '2',
    'children' => array(
      0 => 'social_media_share_buttons',
      1 => 'prev_next_node',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sticky Header',
      'instance_settings' => array(
        'classes' => 'span6 ds-sticky',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_sticky|node|enterprise_product|full'] = $field_group;

  return $export;
}
