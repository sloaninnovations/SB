<?php
/**
 * @file
 * enterprise_product.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function enterprise_product_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-enterprise_product-body'
  $field_instances['node-enterprise_product-body'] = array(
    'bundle' => 'enterprise_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'product_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'ellipsis' => FALSE,
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'trim_length' => 600,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-enterprise_product-field_product_category'
  $field_instances['node-enterprise_product-field_product_category'] = array(
    'bundle' => 'enterprise_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'product_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_product_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-enterprise_product-field_product_image'
  $field_instances['node-enterprise_product-field_product_image'] = array(
    'bundle' => 'enterprise_product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 1,
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'optionset' => 'default',
        ),
        'type' => 'flexslider',
        'weight' => 5,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'product_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => 'product_teaser',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_product_image',
    'label' => 'Product Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 1,
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_1170x300' => 0,
          'image_150x0' => 0,
          'image_150x75' => 0,
          'image_300x150' => 0,
          'image_300x77' => 0,
          'image_400x200' => 0,
          'image_600x300' => 0,
          'image_700x350' => 0,
          'image_724x186' => 0,
          'image_75x75' => 0,
          'image_900x450' => 0,
          'image_940x241' => 0,
          'image_apps_featured_screenshot' => 0,
          'image_apps_logo' => 0,
          'image_apps_logo_small' => 0,
          'image_apps_screenshot' => 0,
          'image_beanslide-960' => 0,
          'image_galleryformatter_slide' => 0,
          'image_galleryformatter_thumb' => 0,
          'image_inline_image' => 0,
          'image_large' => 0,
          'image_left_image' => 0,
          'image_max_height_300' => 0,
          'image_medium' => 0,
          'image_responsive_1200' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Category');
  t('Product Images');

  return $field_instances;
}
