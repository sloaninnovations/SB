<?php

/**
 * @file ooyala.api.inc
 *
 * The various api wrapper function in use by the module.
 */

// In Drupal 7 all classes should be declared in the modules
// dot info file, but sadly D7 registry auto-loaded doesn't
// work with name spaces classes. So we'll be hard-coding
// the required on this file.
require_once dirname(__FILE__) . '/OoyalaApiV2.php';
use Ooyala\OoyalaApiV2;
use Ooyala\OoyalaException;

class OoyalaDrupalWrapper {
  var $secret;
  var $pcode;
  var $api;

  /**
   * Construct a new OoyalaDrupalWrapper object.
   *
   * @param
   *   Optional parameter for the Ooyala API secret key.
   * @param
   *   Optional parameter for the Ooyala API partner code.
   */
  function OoyalaDrupalWrapper($secret_key = NULL, $api_key = NULL, $connection_time = 5000) {
    if (!$secret_key) {
      $secret_key = variable_get('ooyala_global_secret', '');
    }
    if (!$api_key) {
      $api_key = variable_get('ooyala_global_pcode', '');
    }
    $this->secret = $secret_key;
    $this->pcode = $api_key;
    if (!empty($secret_key) & !empty($api_key)) {
      $this->api = new OoyalaApiV2($secret_key, $api_key, $connection_time);
    }
  }

  /**
   * Wrapper function for OoyalaApiV2 request function.
   *
   * Makes a request to the given path
   * eg: to request an asset=> request(GET, "/v2/assets/$embed_code")
   * We're wrapping all our calls around this one function
   * to catch all the exceptions. In order to log proper
   * exceptions error to watchdog and not break someones
   * site just because they mis-types their api key.
   *
   *
   * @param string $HTTPMethod one of GET, POST, PATCH, PUT, DELETE
   * @param string $requestPath the path of the backlot resource
   * @param string $requestBody the body of the request
   * @param array $parameters aditional parameters
   *
   * @see OoyalaApiV2::request().
   */
  function request($HTTPMethod, $requestPath, $requestBody = "", $parameters = array(), $content_type = "application/json") {
    try {
      if (isset($this->api)) {
        $response = $this->api->request($HTTPMethod, $requestPath, $requestBody, $parameters, $content_type);
        return json_decode($response);
      }
    }
    catch (Exception $e) {
      $error = 'The @method request to @path failed: %message';
      $message = $e->getMessage();
      // Attempt to clean up the message.
      if (preg_match('/Response:[ ]*({.*})/', $message, $matches)) {
        if (($possible_message = json_decode(trim($matches[1]))) && isset($possible_message->message)) {
          $message = $possible_message->message;
        }
      }
      drupal_set_message(t($error, array('@path' => $requestPath, '@method' => $HTTPMethod, '%message' => $message)), 'error');
      watchdog('ooyala', $error, array('@path' => $requestPath, '@method' => $HTTPMethod, '%message' => $message), WATCHDOG_ERROR);
    }
  }
}

/**
 * Check if Ooyala APIs are available.
 *
 * @return boolean
 *   Boolean indicator as to whether or not the api is available.
 */
function ooyala_api_available() {
  static $online;
  if (!isset($online)) {
    $response = drupal_http_request("http://api.ooyala.com/v2/assets");
    // Ooyala will return response code 400 if a pcode is not provded, but all
    // we're interested in is the fact that we got a response at all.
    $online = $response->code == 400 || $response->code == 200;
  }
  return $online;
}

/**
 * Retrieve a non-cached list of assets from Ooyala.
 *
 * @param $params
 *   A list of Ooyala parameters on which to base the search.
 * @param $details
 *   Optional. An array to populate with extra information about the results.
 * @return array
 *   An array of assets properties keyed by the unique embed code.
 * @see http://api.ooyala.com/docs/v2/query_api
 */
function ooyala_api_video_query($params = array(), &$details = NULL) {
  $assets = array();
  // Query for any new assets that need to be retrieved.
  try {
    $ooyala_api = new OoyalaDrupalWrapper();
    $response = $ooyala_api->request(GET, '/v2/assets', '', $params);
  }
  catch (Exception $e) {
    $response = NULL;
  }

  // Populate all the video entries with the results.
  if (!empty($response->items)) {
    if (isset($details)) {
      $details = array(
        'total' => count($response->items),
      );
    }

    foreach ($response->items as $result) {
      $video = (array) $result;
      $assets[$video['embed_code']] = $video;
    }
  }

  // Even though this query is uncached, since we pulled in this information we
  // might as well put each video into the static cache so we don't need to
  // retrieve it again when using any other API calls that are cached.
  $cache =& ooyala_api_video_cache();
  foreach ($assets as $embed_code => $video) {
    $cache[$embed_code] = $video;
  }
  return $assets;
}

/**
 * Implement the Attribute Update API. This allows for attributes of videos and
 * channels to be updated.
 *
 * @param $embed_code
 *   The embed code of the video or channel to update.
 * @param $params
 *   A list of Ooyala parameters to update values for.
 *
 * @see http://www.ooyala.com/support/docs/backlot_api#attribute
 *
 * @return
 *   TRUE if the update was successful, or FALSE otherwise.
 */
function ooyala_api_edit($params) {
  $success = FALSE;
  $ooyala_api = new OoyalaDrupalWrapper();
  $embed_code = $params['embed_code'];
  unset($params['embed_code']);
  $request_body = json_encode($params);
  $response = $ooyala_api->request(PATCH, "/v2/assets/$embed_code", $request_body);
  if (isset($response->name)) {
    $success = TRUE;
  }

  return $success;
}

/**
 * Function to hold static cache of all queried videos for this request.
 *
 * @param $reset
 *   Boolean indicator as so reset the static cache or not.
 */
function &ooyala_api_video_cache($reset = FALSE) {
  static $videos;
  if (!isset($videos) || $reset) {
    $videos = array();
  }
  return $videos;
}

/**
 * Load an individual video from Ooyala.
 *
 * @param $embed_code
 *   The unique embed_code of the video as defined in Backlot.
 * @return
 *   An array of video properties keyed by embed code.
 */
function ooyala_api_video_load($embed_code) {
  $videos = ooyala_api_video_load_multiple(array($embed_code), TRUE);
  return isset($videos[$embed_code]) ? $videos[$embed_code] : FALSE;
}

/**
 * Load multiple videos from Ooyala in a single query.
 *
 * @param $embed_codes
 *   An array of videos keyed by embed code.
 * @param $load_custom_metadata
 *   Optional parameter to indicate that custom metadata should be loaded for
 *   all videos. Defaults to FALSE for performance as this doubles the number of
 *   requests needed to load a given asset.
 * @return
 *   An array of videos and their properties keyed by embed code.
 */
function &ooyala_api_video_load_multiple($embed_codes, $load_custom_metadata = FALSE) {
  $videos =& ooyala_api_video_cache();

  // Build a list of videos to query that we do not yet have retrieved.
  $query_embed_codes = array();
  foreach ($embed_codes as $key => $embed_code) {
    if (!isset($videos[$embed_code])) {
      $query_embed_codes[] = $embed_code;
    }
  }

  // Query for any new videos that need to be retrieved.
  if (!empty($query_embed_codes)) {
    // Default each embed_code to FALSE in case it is not retrieved.
    foreach ($query_embed_codes as $embed_code) {
      $videos[$embed_code] = FALSE;
    }

    // Populate all the video entries with the results.
    $params = array(
      'where' => "embed_code IN ('" . implode("','", $query_embed_codes) . "')",    
    );
    $results = ooyala_api_video_query($params);
    if ($results) {
      foreach ($results as $embed_code => $video) {
        $videos[$embed_code] = $video;
      }
    }
  }

  $return = array();
  foreach ($embed_codes as $embed_code) {
    // If we are loading custom metadata, do that now.
    if ($load_custom_metadata && !empty($videos[$embed_code]) && !isset($videos[$embed_code]['custom_metadata'])) {
      $videos[$embed_code]['custom_metadata'] = ooyala_api_custom_metadata_load($embed_code);
    }
    $return[$embed_code] = $videos[$embed_code];
  }
  return $return;
}

/**
 * Load an individual property of a video from Ooyala.
 *
 * @param $embed_code
 *   A string containing the unique embed code of a video.
 * @param $property
 *   The name of the property to retrieve.
 * @return
 *   The individual property specified.
 */
function ooyala_api_video_property($embed_code, $property) {
  $video = ooyala_api_video_load($embed_code);
  return isset($video[$property]) ? $video[$property] : FALSE;
}

/**
 * Load custom metadata for an asset from Ooyala.
 *
 * @param $embed_code
 *   A string containing the unique embed code of a video.
 * @return
 *   An array of custom metadata properties.
 */
function ooyala_api_custom_metadata_load($embed_code) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $response = $ooyala_api->api->request(GET, "/v2/assets/$embed_code/metadata");
  return (array)json_decode($response);
}

/**
 * Save custom metadata for an asset from Ooyala.
 *
 * @param $embed_code
 *   A string containing the unique embed code of a video.
 * @param $properties
 *   An array containing the custom metadata properites to save.
 * @return
 *   An array of custom metadata properties.
 */
function ooyala_api_custom_metadata_save($embed_code, $properties) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $request_body = json_encode($properties);
  return $ooyala_api->api->request(PATCH, "/v2/assets/$embed_code/metadata", $request_body);
}

/**
 * Remove labels from a video.
 */
function ooyala_api_video_label_remove($embed_code, $labels, $recursive = TRUE) {
  $success = FALSE;
  $ooyala_api = new OoyalaDrupalWrapper();
  foreach ($embed_code as $embed) {
    // These two foreach aren't great, but I don't see another way around it.
    foreach ($labels as $label) {
      $response[] = $ooyala_api->api->request(DELETE, "/v2/assets/$embed/labels/$label");
    }
  }
}

/**
 * Set labels on a video.
 *
 * @param $embed_code
 *   An Ooyala embed code.
 * @param $labels
 *   An array of labels to set on a video.
 */
function ooyala_api_video_label_add($embed_code, $labels) {
  $ooyala_api = new OoyalaDrupalWrapper();
  foreach ($embed_code as $embed) {
    $ooyala_api->api->request(POST, "/v2/assets/$embed/labels", json_encode(array_values($labels)));
  }
}

/**
 * Load the labels associated with an asset.
 *
 * @param $embed_code
 *   The embed_code associated with the asset.
 *
 * @return
 *   An array of labels associated with the asset.
 */
function ooyala_api_video_label_load($embed_code) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $response = $ooyala_api->request(GET, "/v2/assets/$embed_code/labels");
  if (isset($response->items)) {
    return $response->items;
  }
  return array();
}

/**
 * Retrieve a label ID from Ooyala based on label name.
 */
function ooyala_api_label_id($label_name) {
  // TODO: Swap out for a more efficient API call when Ooyala adds ability to
  // retrieve label name based on ID.
  $label_name = rtrim($label_name, '/');
  $parent_name = substr($label_name, 0, strrpos($label_name, '/'));
  if ($parent_name == '') {
    $parent_name = '<root>';
  }
  $labels = ooyala_api_label_list($parent_name);
  return array_search($label_name, $labels);
}

/**
 * Retrieve a label name from Ooyala based on label ID.
 *
 * @param
 *   The Ooyala label ID of the wanted label name.
 *
 * @return
 *   The Ooyala Full name of the label.
 */
function ooyala_api_label_name($label_id) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $response = $ooyala_api->request(GET, "/v2/labels/$label_id");
  return isset($response->full_name) ? $response->full_name : FALSE;
}

/**
 * Retrieve a list of labels from Ooyala.
 *
 * @param $parent
 *   The parent label under which to retrieve all labels. Use "/" to
 *   retrieve all labels. Use '<root>' to return only the root labels.
 *
 *   Note that Ooyala will accept both a label path (such as /Tags) or an
 *   Ooyala label ID, which is a 32 character hash.
 * @param $reset
 *   Reset the internal cache of labels to retrieve.
 */
function ooyala_api_label_list($parent = '/', $reset = FALSE) {
  static $labels;

  if ($reset || !isset($labels)) {
    $labels = array();
  }

  if (isset($parent) && !isset($labels[$parent])) {
    $labels[$parent] = array();

    // Query for any new videos that need to be retrieved.
    $ooyala_api = new OoyalaDrupalWrapper();
    // Set up the normal request path for the labels.
    $request = '/v2/labels';
    if (isset($parent) && ($parent != '/' && $parent != '<root>')) {
      // Change the request path to "/v2/labels/:label_id/children"
      // to query the child labels.
      $request = '/v2/labels/' . $parent . '/children';
    }

    // We pass a limit of 500, because Ooyala limits it at 100 by default.
    $response = $ooyala_api->request(GET, $request, '', array('limit' => 500));

    if (!empty($response->items)) {
      foreach ($response->items as $result) {
        $row = (array) $result;
        $label = rtrim($row['full_name'], '/');

        // If building a list of root labels, skip all non-root labels.
        $last_slash = strrpos($label, '/');
        if ($parent == '<root>' && $last_slash !== 0) {
          continue;
        }

        // If building a list for a specific label, do not include the root.
        elseif ($parent != '/' && $parent != '<root>' && $last_slash === 0) {
          continue;
        }
        $labels[$parent][$row['id']] = $label;
      }
    }

    // Sort all the labels so that all root items are first, then all second
    // level, etc. This sets us up for width-first operations.
    uasort($labels[$parent], '_ooyala_label_sort');
  }

  return isset($parent) ? $labels[$parent] : TRUE;
}

/**
 * Add a label to the Ooyala label hierarchy.
 *
 * @param $label_name
 *   The name of the label, including the label path.
 *
 * @return
 *   The Ooyala Label ID of the new label.
 */
function ooyala_api_label_add($label_name) {
  $ooyala_api = new OoyalaDrupalWrapper();
  // Encode the request.
  // @see http://api.ooyala.com/docs/v2/labels
  $request = urlencode($label_name);
  $response = $ooyala_api->request(POST, "/v2/labels/by_full_path/$request");
  $label_id = FALSE;
  if (!empty($response[0]) && isset($response[0]->id)) {
      $label_id = $response[0]->id;
  }
  return $label_id;
}

/**
 * Rename a label in Ooyala.
 *
 * This function currently only accepts label paths, not label IDs.
 */
function ooyala_api_label_rename($label_id, $name) {
  $success = FALSE;
  $ooyala_api = new OoyalaDrupalWrapper();
  $request_body = json_encode(array('name' => $name));
  $response = $ooyala_api->request(PATCH, "/v2/labels/$label_id", $request_body);

  if (isset($response->id)) {
    $success = TRUE;
  }

  return $success;
}

/**
 * Delete a label in Ooyala.
 */
function ooyala_api_label_delete($label_id) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $response = $ooyala_api->request(DELETE, "/v2/labels/$label_id");
}

/**
 * Load a full channel, listing in all the embed_codes within a channel.
 */
function ooyala_api_channel_load($embed_code) {
  static $channels;

  if (!isset($channels[$embed_code])) {
    $channel = FALSE;

    $ooyala_api = new OoyalaDrupalWrapper();
    $response = json_decode($ooyala_api->api->request(GET, "/v2/assets/$embed_code/lineup"));
    if (!empty($response)) {
      $channel['videos'] = $response;
      $channels[$embed_code] = $channel;
    }
  }
  return $channels[$embed_code];
}

/**
 * Fetch and save a video thumbnail from the Ooyala server.
 *
 * @param $embed_code
 *   A string containing the unique embed code of a video.
 * @return
 *   The path to the thumbnail if we have one, else FALSE.
 */
function ooyala_api_fetch_image($embed_code) {
  if (empty($embed_code)) {
    return;
  }
  $thumb_path = FALSE;
  $ooyala_api = new OoyalaDrupalWrapper();
  $response = $ooyala_api->request(GET, "/v2/assets/$embed_code/generated_preview_images");
  // Successful query case.
  if (!empty($response)) {
    $thumb_url = (string) $response[0]->url;
    $thumb_file = drupal_http_request($thumb_url);
    $thumb_path = ooyala_get_thumbnail_url($embed_code, NULL, TRUE);
    if ($fp = @fopen(file_build_uri($thumb_path), 'w+')) {
      fwrite($fp, $thumb_file->data);
      fclose($fp);
    }
    else {
      ooyala_message('The file @path could not be written, check the permissions on the directory and make sure it is writable.', array('@path' => $thumb_path), WATCHDOG_ERROR);
      $thumb_path = FALSE;
    }
  }
  // Check if this isn't actually a video at all, but a channel. In which case
  // start over and try to retreive the thumbnail of the first video.
  elseif ($channel = ooyala_api_channel_load($embed_code)) {
    if (count($channel['videos'])) {
      $first_embed_code = reset($channel['videos']);
      $thumb_uri = ooyala_api_fetch_image($first_embed_code);
      // If the first video has a thumbnail path, copy it to serve as the
      // channel thumbnail.
      if ($thumb_uri) {
        $channel_thumb_uri = str_replace($first_embed_code, $embed_code, $thumb_uri);
        file_unmanaged_copy($thumb_uri, $channel_thumb_uri);
        $thumb_uri = $channel_thumb_uri;
      }
    }
    else {
      ooyala_message('The thumbnail for the channel "@embed_code" could not be retrieved from Ooyala. It looks like this embed code is for a channel, but this channel does not contain any videos that have a usable thumbnail.', array('@embed_code' => $embed_code), 'error');
      $thumb_uri = FALSE;
    }
  }
  // The most common situation for a 200 but no XML string is an error such
  // as "unknown content" from Ooyala. Errors are returned as plain strings.
  elseif (!empty($embed_code)) {
    $nodes = ooyala_load_nodes($embed_code);
    $node_link = t('none');
    $node_links = array();
    foreach ($nodes as $node) {
      $node_links[] = l(check_plain($node->title), 'node/' . $node->nid);
    }
    if (count($node_links) > 1) {
      $node_link = theme('item_list', array($node_links));
    }
    elseif (count($node_links) == 1) {
      $node_link = $node_links[0];
    }
    ooyala_message('The thumbnail for the video "@embed_code" could not be retrieved from Ooyala. This video is in use by the following nodes: !node_links', array('@embed_code' => $embed_code, '!node_links' => $node_link), 'error');
  }
  else {
    ooyala_message('The thumbnail for the video "@embed_code" could not be retrieved from Ooyala because the service returned an HTTP error.', array('@embed_code' => $embed_code), 'error');
  }
  return $thumb_uri;
}

/**
 * Fetch automatically generated thumbnails from Ooyala.
 *
 * @param $embed_code
 *   The embed code of the object to fetch thumbnails for.
 *
 * @return
 *   An array of thumbnail image URLs, keyed by timestamp, or FALSE if an error
 *   occured.
 */
function ooyala_api_fetch_thumbnails($embed_code) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $response = $ooyala_api->request(GET, "/v2/assets/$embed_code/generated_preview_images");

  // Successful query case.
  $thumbnails = array();
  if (!empty($response)) {
    foreach ($response as $thumbnail) {
      $thumbnails[$thumbnail->time] = $thumbnail;
    }
    return $thumbnails;
  }

  return FALSE;
}

/**
 * Upload a promotional image for a given embed_code. This function requires
 * cURL to be enabled.
 *
 * @param $embed_code
 *   The embed code of the object to set the promotional image for.
 * @param $file_uri
 *   The URI to the image to upload.
 *
 * @return
 *   The URL to the uploaded image, or FALSE if the image was not uploaded.
 */
function ooyala_api_upload_promo_image($embed_code, $file_uri) {
  $ooyala_api = new OoyalaDrupalWrapper();
  $handle = fopen($file_uri, "r");
  $content = fread($handle, filesize($file_uri));
  fclose($handle);
  $response = $ooyala_api->api->request(POST, "/v2/assets/$embed_code/preview_image_files", $content);
  return $response;
}

/**
 * Add an asset entry. This is usually used to reserve an embed code before
 * uploading a new asset.
 *
 * @param $asset
 *   An object with the properties of the new asset to upload. Must contain
 *   the following properties:
 *   - name
 *   - description
 *   - file_name
 *   - chunk_size
 *   - asset_type
 *
 * @return
 *   An asset object as returned by the Ooyala API.
 */
function ooyala_api_asset_add($asset) {
  $ooyala = new OoyalaDrupalWrapper();
  $asset = $ooyala->request(POST, "/v2/assets", json_encode($asset));
  $asset->uploading_urls = ooyala_api_asset_uploading_urls($asset);
  return $asset;
}

/**
 * Mark an asset as uploaded.
 *
 * @param $asset
 *   An object containing the "status" key of the asset set to "uploaded".
 *
 * @return
 *   An asset object with the status key as returned by the Ooyala API.
 */
function ooyala_api_asset_uploaded($asset) {
  $ooyala = new OoyalaDrupalWrapper();
  $response = $ooyala->request(PUT, "/v2/assets/" . $asset->embed_code . "/upload_status", json_encode($asset));
  $response->embed_code = $asset->embed_code;
  return $response;
}

/**
 * Fetch the URLs to be used to upload an asset from the backlot.
 *
 * @param $asset
 *   The asset to fetch the uploading URLs for.
 *
 * @return
 *   An array of uploading URLs.
 */
function ooyala_api_asset_uploading_urls($asset) {
  $ooyala = new OoyalaDrupalWrapper();
  return $ooyala->request(GET, "/v2/assets/" . $asset->embed_code . "/uploading_urls");
}

/**
 * Custom sort function to sort labels, putting root items first.
 */
function _ooyala_label_sort($a, $b) {
  $cmp = substr_count($a, '/') - substr_count($b, '/');
  if ($cmp == 0) {
    $cmp = strcasecmp($a, $b);
  }
  return $cmp;
}
