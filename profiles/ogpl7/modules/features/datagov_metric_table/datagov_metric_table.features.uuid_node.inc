<?php
/**
 * @file
 * datagov_metric_table.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function datagov_metric_table_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Metrics',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1b61b6c1-7456-4b80-80c7-997ce8015fe8',
  'type' => 'page',
  'language' => 'und',
  'created' => 1365879755,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '525a9bc0-22e2-407c-96f3-457a04e94755',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'metrics',
        'summary' => '',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_attachments' => array(),
  'group_audience' => array(
    'und' => array(
      0 => array(
        'gid' => 1,
        'state' => 1,
        'created' => 1365879756,
      ),
    ),
  ),
  'panelizer' => array(
    'entity_type' => 'node',
    'entity_id' => 124,
    'revision_id' => 128,
    'name' => NULL,
    'no_blocks' => 0,
    'css_id' => '',
    'css' => NULL,
    'pipeline' => 'standard',
    'contexts' => NULL,
    'relationships' => NULL,
    'did' => 2,
    'display' => array(
      'args' => array(),
      'content' => array(
        1 => array(
          'pid' => 1,
          'did' => 2,
          'panel' => 'middle',
          'type' => 'views_panes',
          'subtype' => 'new_metric_table-metric_table_federal_pane',
          'shown' => 1,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ),
        2 => array(
          'pid' => 2,
          'did' => 2,
          'panel' => 'middle',
          'type' => 'views_panes',
          'subtype' => 'new_metric_table-metric_table_other_pane',
          'shown' => 1,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ),
        3 => array(
          'pid' => 3,
          'did' => 2,
          'panel' => 'middle',
          'type' => 'views_panes',
          'subtype' => 'new_metric_table-metric_table_summary_pane',
          'shown' => 1,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ),
      ),
      'panels' => array(
        'middle' => array(
          0 => 1,
          1 => 2,
          2 => 3,
        ),
      ),
      'incoming_content' => NULL,
      'css_id' => NULL,
      'context' => array(),
      'did' => 2,
      'renderer' => 'standard',
      'layout' => 'datagov_onecol',
      'layout_settings' => '',
      'panel_settings' => array(
        'style_settings' => array(
          'default' => NULL,
          'middle' => NULL,
        ),
      ),
      'cache' => '',
      'title' => '',
      'hide_title' => 0,
      'title_pane' => 0,
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
  'date' => '2013-04-13 21:02:35 +0200',
);
  return $nodes;
}
