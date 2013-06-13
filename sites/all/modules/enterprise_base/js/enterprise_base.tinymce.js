(function ($) {
  /**
   * Fix icons being removed in the TinyMCE WYSIWYG editor.
   */
  Drupal.behaviors.enterprise_base_tinymce = {
    attach: function (context, settings) {
      $('body').once('icon-wysiwyg-fix', function(){
        if (Drupal.settings.wysiwyg && Drupal.settings.wysiwyg.configs && Drupal.settings.wysiwyg.configs.tinymce) {
          $.each(Drupal.settings.wysiwyg.configs.tinymce, function(format){
            var protect = Drupal.settings.wysiwyg.configs.tinymce[format].protect || [];
            protect.push(/\<(i|span)[^\>]*icon[^\>]*\>[^>]*\<\/(i|span)\>/g);
            Drupal.settings.wysiwyg.configs.tinymce[format].protect = protect;
          });
        }
      });
    }
  };
}(jQuery));