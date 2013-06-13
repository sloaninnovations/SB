<?php
/**
 * @file
 * enterprise_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function enterprise_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-enterprise_news-body'
  $field_instances['node-enterprise_news-body'] = array(
    'bundle' => 'enterprise_news',
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
        'weight' => 3,
      ),
      'ical' => array(
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
          'ellipsis' => FALSE,
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'trim_length' => 600,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-enterprise_news-field_inline_image'
  $field_instances['node-enterprise_news-field_inline_image'] = array(
    'bundle' => 'enterprise_news',
    'deleted' => 0,
    'description' => 'Insert an image into the main text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_inline_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'inline-images',
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
            'attach' => 'attach',
            'clipboard' => 'clipboard',
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
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
          'image' => 'image',
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
          'image_galleryformatter_slide' => 0,
          'image_galleryformatter_thumb' => 0,
          'image_inline_image' => 0,
          'image_large' => 'image_large',
          'image_left_image' => 0,
          'image_medium' => 'image_medium',
          'image_product_teaser' => 0,
          'image_responsive_1200' => 0,
          'image_thumbnail' => 'image_thumbnail',
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-enterprise_news-field_news_image'
  $field_instances['node-enterprise_news-field_news_image'] = array(
    'bundle' => 'enterprise_news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => '',
            ),
          ),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '600x300',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_news_image',
    'label' => 'Featured Image',
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
          'image_galleryformatter_slide' => 0,
          'image_galleryformatter_thumb' => 0,
          'image_inline_image' => 0,
          'image_large' => 0,
          'image_left_image' => 0,
          'image_medium' => 0,
          'image_product_teaser' => 0,
          'image_responsive_1200' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-enterprise_news-field_news_link'
  $field_instances['node-enterprise_news-field_news_link'] = array(
    'bundle' => 'enterprise_news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_news_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Featured Image');
  t('Image');
  t('Insert an image into the main text');
  t('Link');

  return $field_instances;
}
