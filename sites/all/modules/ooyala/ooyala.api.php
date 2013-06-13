<?php

/**
 * Return the embed codes for a given node limited by Ooyala object type.
 *
 * Implement this hook to allow your module to inform the Ooyala module of
 * associated embed codes for a node when performing actions such as saving
 * a node.
 *
 * @param $node
 *   The node to fetch embed codes for.
 * @param $type
 *   The types of Ooyala objects to fetch associated embed codes for. 'all'
 *   indicates that all object embed codes for the node should be returned.
 *
 * @return
 *   An array of embed_codes associated with the node.
 */
function hook_ooyala_node_embed_codes($node, $type) {
  // From the ooyala_channels module.
  $embed_codes = array();
  if ($type == 'all' || $type == 'channel') {
    $embed_code = ooyala_channels_node_embed_code($node->nid);
    if ($embed_code) {
      $embed_codes[] = $embed_code;
    }
  }
  return $embed_codes;
}

/**
 * Return an array of additional columns to include with Ooyala fields.
 *
 * Implement this hook to add a column for additional information or metadata
 * to be associated with the field. For example, this could be used to store
 * data saved with the custom metadata API from the Ooyala backlot.
 *
 * @return
 *   An array of columns matching the Schema API column specification. As well,
 *   an additional 'index' key can be set to TRUE to indicate that the column
 *   should have an index associated with it if the field storage backend
 *   supports it.
 */
function hook_ooyala_columns() {
  return array(
    'episode_id' => array(
      'type' => 'varchar',
      'length' => 6,
      'index' => TRUE,
    ),
  );
}

