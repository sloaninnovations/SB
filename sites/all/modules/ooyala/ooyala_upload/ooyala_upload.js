/**
 * @file
 * Ooyala upload widget JavaScript code.
 */
Drupal.ooyala = Drupal.ooyala || {'listeners': {}};

(function ($) {
  /**
   * The behavior for an Ooyala Uploader button.
   */
  Drupal.behaviors.ooyalaUploader = {
    attach: function (context, settings) {
      if (Drupal.ooyala.uploader) {
        return;
      }

      Drupal.ooyala.uploader = new Ooyala.Client.AssetCreator(Drupal.settings.ooyala.endpoint, 'selectAsset');

      // Set up all of our event listeners.
      Drupal.ooyala.uploader.on("progress", Drupal.ooyala.onProgress);
      Drupal.ooyala.uploader.on("error", Drupal.ooyala.onUploadError);
      Drupal.ooyala.uploader.on("fileSelected", Drupal.ooyala.onFileSelected);
      Drupal.ooyala.uploader.on("assetCreationComplete", Drupal.ooyala.onEmbedCodeReady);
      Drupal.ooyala.uploader.on("complete", Drupal.ooyala.onUploadComplete);

      // Hide unused elements until they are needed.
      $('#upload').hide();
      $('#ooyala-message').hide();
      $("#progress-bar").hide();

      // Grab the title and create a new embed code for the asset in the Ooyala
      // backlot.
      $('button#upload').click(function() {
        var title = $('#edit-title').val();
        if (title == '') {
          $('#ooyala-message').empty().append(Drupal.t('A title is required in order to upload this asset.'));
          $('#edit-title').addClass('error');
          return false;
        }

        Drupal.ooyala.uploader.prepareUpload(title, '');
        return false;
      });
    }
  };

  /**
   * Event handler for when a file has been selected to upload.
   */
  Drupal.ooyala.onFileSelected = function() {
    var file = this.uploader.file;
    // The user cancelled the file selection.
    if (typeof file == "undefined") {
      return;
    }
    $('#upload').fadeIn(600);
    $('#ooyala-message').fadeIn(600);
    $('.ooyala-button-container').removeClass('ooyala-finished');
    $('#ooyala-message').empty().append(Drupal.t('Selected !filename to upload.', { '!filename': '<span class="ooyala-filename">' + Drupal.checkPlain(file.name) + '</span>' }));
  }

  /**
   * Event handler for monitoring upload progress.
   */
  Drupal.ooyala.onProgress = function() {
    var oldProgress = $("#progress-bar").progressbar('value');
    var progress = parseInt(this.progress() * 100);

    // Determine if the progressbar needs to be instantiated.
    if (typeof oldProgress != "number") {
      $('#selectAsset').fadeOut(600);
      $('#upload').fadeOut(600);
      $("#progress-bar").progressbar();
      $("#progress-bar").delay(600).fadeIn(600);
    }

    // Still uploading, so update our progress bar.
    if (progress < 100) {
      for (var i = oldProgress + 1; i <= progress; i++) {
        setTimeout(Drupal.ooyala.onProgressUpdate(i), (2000 / (progress - oldProgress)) * i);
      }
    }
    else {
      // No point in showing a 100% bar, so hide it and restore our buttons.
      $("#progress-bar").fadeOut(600);
      $("#progress-bar").progressbar('destroy');
      $('#selectAsset').fadeIn(600);
      $('#upload').fadeIn(600);
    }
  }

  /**
   * setTimeout() callback to more smoothly update the progress bar.
   */
  Drupal.ooyala.onProgressUpdate = function(value) {
    return function() {
      if ($('#progress-bar').progressbar('value') < value) {
        $('#progress-bar').progressbar('value', value);
      }
    }
  };

  /**
   * Event handler for when an asset upload is complete.
   */
  Drupal.ooyala.onUploadComplete = function() {
    $('#ooyala-message').empty().append(Drupal.t('Upload of <span class="ooyala-filename">!file</span> complete.', {'!file': this.uploader.file.name}));
    $('.ooyala-button-container').addClass('ooyala-finished');
    $('#node-form input.form-submit, #node-form input.form-button').attr('disabled', '');
  }

  Drupal.ooyala.onUploadError = function(error) {
    $('#ooyala-message').empty().append(Drupal.t('Upload Error: @error', { '@error': error.responseText }));
  }

  /**
   * Event callback for when an asset has an embed code ready to be uploaded
   * to.
   */
  Drupal.ooyala.onEmbedCodeReady = function() {
    $('.ooyala-embed-code-input').val(this.embedCode);

    // This kicks off actually uploading the asset after we have reserved
    // an embed code in the backlot.
    Drupal.ooyala.uploader.upload();
    $('#node-form input.form-submit, #node-form input.form-button').attr('disabled', 'disabled');
    $('#ooyala-message').html(Drupal.t('Uploading <span class="ooyala-filename">!file</span>...', {'!file': this.uploader.file.name}));
  }

})(jQuery);

