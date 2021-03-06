<?php
/**
 * @file
 * enterprise_blog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function enterprise_blog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-enterprise_blog-body'
  $field_instances['node-enterprise_blog-body'] = array(
    'bundle' => 'enterprise_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'article_featured' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'ellipsis' => FALSE,
          'field_delimiter' => '',
          'field_formatter_class' => 'teaser',
          'trim_length' => 200,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 5,
      ),
      'article_mini' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'article_quote' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'teaser',
          'more_link' => 1,
          'more_text' => 'Read More >>',
          'summary_handler' => 'trim',
          'trim_length' => 150,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'article_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'article_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'ellipsis' => FALSE,
          'field_delimiter' => '',
          'field_formatter_class' => 'teaser',
          'trim_length' => 200,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 4,
      ),
      'blog_featured' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'body',
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 600,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'blog_full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'body',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'blog_mini' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'blog_related' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'body',
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'blog_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'body',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'body',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'body',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'teaser',
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 600,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-enterprise_blog-field_blog_categories'
  $field_instances['node-enterprise_blog-field_blog_categories'] = array(
    'bundle' => 'enterprise_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blog_featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'blog_mini' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'blog_related' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'enterprise_edit_form_display' => 'sidebar',
    'entity_type' => 'node',
    'field_name' => 'field_blog_categories',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-enterprise_blog-field_blog_tags'
  $field_instances['node-enterprise_blog-field_blog_tags'] = array(
    'bundle' => 'enterprise_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blog_featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'blog_mini' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'blog_related' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => ',',
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'enterprise_edit_form_display' => 'sidebar',
    'entity_type' => 'node',
    'field_name' => 'field_blog_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-enterprise_blog-field_energy_level'
  $field_instances['node-enterprise_blog-field_energy_level'] = array(
    'bundle' => 'enterprise_blog',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 2000,
        'radioactivity_timestamp' => 1356623186,
      ),
    ),
    'deleted' => 0,
    'description' => 'Current energy level of the blog post.',
    'display' => array(
      'article_featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'article_mini' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'article_quote' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'article_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'article_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'blog_featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'blog_full' => array(
        'label' => 'hidden',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'conditions' => array(),
          'energy' => 10,
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 9,
      ),
      'blog_mini' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'blog_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'blog_teaser' => array(
        'label' => 'hidden',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'conditions' => array(),
          'energy' => 10,
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'conditions' => array(),
          'energy' => 10,
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 10,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'conditions' => array(),
          'energy' => 10,
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'enterprise_edit_form_display' => 'sidebar',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'fences_wrapper_class' => '',
    'field_name' => 'field_energy_level',
    'label' => 'Energy Level',
    'required' => 1,
    'settings' => array(
      'profile' => 'blog_post_decay',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-enterprise_blog-field_image'
  $field_instances['node-enterprise_blog-field_image'] = array(
    'bundle' => 'enterprise_blog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'article_featured' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image style-gray-box',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 600,
            'breakpoint_4' => '',
            'fallback_style' => '700x350',
            'max_style' => '700x350',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '600x300',
            'style_4' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 6,
      ),
      'article_mini' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'fallback_style' => '300x150',
            'max_style' => '300x150',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '',
            'style_4' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 1,
      ),
      'article_quote' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'article_related' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 600,
            'breakpoint_4' => '',
            'fallback_style' => '600x300',
            'max_style' => '600x300',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '600x300',
            'style_4' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 1,
      ),
      'article_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => 'content',
          'image_style' => '400x200',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'blog_featured' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 400,
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '600x300',
            'max_style' => '600x300',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '400x200',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 3,
      ),
      'blog_full' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => '',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 600,
            'breakpoint_4' => '',
            'fallback_style' => '900x450',
            'max_style' => '900x450',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '600x300',
            'style_4' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 6,
      ),
      'blog_mini' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 400,
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '400x200',
            'max_style' => '400x200',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '400x200',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 0,
      ),
      'blog_related' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => '',
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '300x150',
            'max_style' => '300x150',
            'style_1' => '150x75',
            'style_2' => '',
            'style_3' => '',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 1,
      ),
      'blog_teaser' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => '',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 600,
            'breakpoint_4' => '',
            'fallback_style' => '900x450',
            'max_style' => '900x450',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '600x300',
            'style_4' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => '',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => 600,
            'breakpoint_4' => 900,
            'breakpoint_5' => '',
            'fallback_style' => '900x450',
            'max_style' => '900x450',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '600x300',
            'style_4' => '900x450',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => 'image',
          'image_link' => '',
          'image_style' => '600x300',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'conditions' => array(),
          'field_delimiter' => '',
          'field_formatter_class' => '',
          'image_link' => 'content',
          'styles' => array(
            'breakpoint_1' => 150,
            'breakpoint_2' => 300,
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '400x200',
            'max_style' => '400x200',
            'style_1' => '150x75',
            'style_2' => '300x150',
            'style_3' => '',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => 'sidebar',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Featured image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'content/blog/images',
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
          'image_apps_featured_screenshot' => 0,
          'image_apps_logo' => 0,
          'image_apps_logo_small' => 0,
          'image_apps_screenshot' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-enterprise_blog-field_inline_image'
  $field_instances['node-enterprise_blog-field_inline_image'] = array(
    'bundle' => 'enterprise_blog',
    'deleted' => 0,
    'description' => 'Upload an image to insert in this node. After selecting the image, press "Insert" to add to the page.',
    'display' => array(
      'article_featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'article_mini' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'article_quote' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'article_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'article_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'blog_featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'blog_full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'blog_mini' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'blog_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'blog_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'fences_wrapper_class' => '',
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
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => 'inline',
        'insert_default' => 'colorbox__thumbnail',
        'insert_styles' => array(
          'auto' => 0,
          'colorbox__1170x300' => 0,
          'colorbox__150x0' => 0,
          'colorbox__150x75' => 0,
          'colorbox__150x75_user' => 0,
          'colorbox__300x150' => 0,
          'colorbox__300x77' => 0,
          'colorbox__400x200' => 0,
          'colorbox__600x300' => 0,
          'colorbox__700x350' => 0,
          'colorbox__724x186' => 0,
          'colorbox__75x75' => 0,
          'colorbox__900x450' => 0,
          'colorbox__940x241' => 0,
          'colorbox__apps_portfolio_client_logo' => 0,
          'colorbox__apps_portfolio_client_logo_landscape' => 0,
          'colorbox__apps_portfolio_client_logo_portrait' => 0,
          'colorbox__apps_portfolio_thumbnail' => 0,
          'colorbox__beanslide-960' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 'colorbox__large',
          'colorbox__medium' => 'colorbox__medium',
          'colorbox__square_thumbnail' => 'colorbox__square_thumbnail',
          'colorbox__thumbnail' => 'colorbox__thumbnail',
          'icon_link' => 0,
          'image' => 'image',
          'image_1170x300' => 0,
          'image_150x0' => 0,
          'image_150x75' => 0,
          'image_150x75_user' => 0,
          'image_300x150' => 0,
          'image_300x77' => 0,
          'image_400x200' => 0,
          'image_600x300' => 0,
          'image_700x350' => 0,
          'image_724x186' => 0,
          'image_75x75' => 0,
          'image_900x450' => 0,
          'image_940x241' => 0,
          'image_apps_portfolio_client_logo' => 0,
          'image_apps_portfolio_client_logo_landscape' => 0,
          'image_apps_portfolio_client_logo_portrait' => 0,
          'image_apps_portfolio_thumbnail' => 0,
          'image_beanslide-960' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 'image_large',
          'image_medium' => 'image_medium',
          'image_square_thumbnail' => 'image_square_thumbnail',
          'image_thumbnail' => 'image_thumbnail',
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Categories');
  t('Current energy level of the blog post.');
  t('Energy Level');
  t('Featured image');
  t('Image');
  t('Tags');
  t('Upload an image to insert in this node. After selecting the image, press "Insert" to add to the page.');

  return $field_instances;
}
