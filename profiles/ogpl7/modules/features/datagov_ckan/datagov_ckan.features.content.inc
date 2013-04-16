<?php
/**
 * @file
 * datagov_ckan.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datagov_ckan_content_defaults() {
  $content = array();

  $content['demo-community-data'] = (object) array(
    'exported_path' => 'demo-community-data',
    'title' => 'Demo Community Data',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1366081014,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'demo-community-data',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<?php print views_embed_view(\'datasets\', \'ogpl_dataset_pane\') ?>',
          'summary' => '',
          'format' => 'php_code',
        ),
      ),
    ),
    'og_audience' => array(
      0 => 'demo-community-page',
    ),
  );

return $content;
}
