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
  'title' => 'UUID node',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e64dbd4a-e1a5-45f4-89a4-c2636e478468',
  'type' => 'page',
  'language' => 'und',
  'created' => 1366055546,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '056ab76e-4f0c-48e1-9251-8c6560bba278',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'UUid node',
        'summary' => '',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_attachments' => array(),
  'group_audience' => array(),
  'panelizer' => array(
    'entity_type' => 'node',
    'entity_id' => 18,
    'revision_id' => 19,
    'name' => NULL,
    'no_blocks' => 0,
    'css_id' => '',
    'css' => NULL,
    'pipeline' => 'standard',
    'contexts' => NULL,
    'relationships' => NULL,
    'did' => 0,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'machine_name' => FALSE,
  'notifications_status' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'date' => '2013-04-15 21:52:26 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Demo-Community-Data',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '253906d1-7c82-44b7-a02d-19cb6ffd64c6',
  'type' => 'page',
  'language' => 'und',
  'created' => 1366036011,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e06ed4de-5992-48c0-a720-1b563b938109',
  'revision_uid' => 1,
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
        'created' => 1366055423,
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
