<?php
/**
 * @file
 * datagov_ckan.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function datagov_ckan_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Demo-Community-Data',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f106709d-5641-421a-88b5-d5164be31b8e',
  'type' => 'page',
  'language' => 'und',
  'created' => 1366036011,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e06ed4de-5992-48c0-a720-1b563b938109',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<?php print views_embed_view("datasets"); ?>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'field_attachments' => array(),
  'group_audience' => array(
    'und' => array(
      0 => array(
        'gid' => 1,
        'state' => 1,
        'created' => 1366036012,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'machine_name' => FALSE,
  'notifications_status' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'date' => '2013-04-15 16:26:51 +0200',
);
  return $nodes;
}
