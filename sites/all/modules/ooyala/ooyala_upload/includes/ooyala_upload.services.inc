<?php

/**
 * Implements hook_default_services_endpoint().
 */
function ooyala_upload_default_services_endpoint() {
  $endpoints = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'ooyala_asset';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/ooyala';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'rest_server' => array(
      'formatters' => array(
        'json' => TRUE,
        'bencode' => FALSE,
        'jsonp' => FALSE,
        'php' => FALSE,
        'rss' => FALSE,
        'xml' => FALSE,
        'yaml' => FALSE,
      ),
      'parsers' => array(
        'application/json' => TRUE,
        'application/vnd.php.serialized' => FALSE,
        'application/x-www-form-urlencoded' => FALSE,
        'application/x-yaml' => FALSE,
        'multipart/form-data' => FALSE,
      ),
    ),
  );
  $endpoint->resources = array(
    'assets' => array(
      'operations' => array(
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $endpoints[] = $endpoint;

  return $endpoints;
}

