<?php
/**
 * @file
 * enterprise_bios.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function enterprise_bios_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-enterprise_bio-body'
  $field_instances['node-enterprise_bio-body'] = array(
    'bundle' => 'enterprise_bio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'biography_mini' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'default' => array(
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
      'nopremium_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-enterprise_bio-field_bio_image'
  $field_instances['node-enterprise_bio-field_bio_image'] = array(
    'bundle' => 'enterprise_bio',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'biography_mini' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => 'bio_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => 'bio_full',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'nopremium_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => '',
          'image_style' => 'bio_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_bio_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 0,
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
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_inline_image' => 0,
          'image_large' => 0,
          'image_left_image' => 0,
          'image_max_height_300' => 0,
          'image_medium' => 0,
          'image_product_teaser' => 0,
          'image_responsive_1200' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-enterprise_bio-field_bio_job_title'
  $field_instances['node-enterprise_bio-field_bio_job_title'] = array(
    'bundle' => 'enterprise_bio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'biography_mini' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'nopremium_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_bio_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Job Title');

  return $field_instances;
}
