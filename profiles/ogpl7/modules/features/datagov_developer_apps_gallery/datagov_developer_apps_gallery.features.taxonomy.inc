<?php
/**
 * @file
 * datagov_developer_apps_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datagov_developer_apps_gallery_taxonomy_default_vocabularies() {
  return array(
    'application_categories' => array(
      'name' => 'Application Categories',
      'machine_name' => 'application_categories',
      'description' => 'The different category areas applications can be classified by.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'application_types' => array(
      'name' => 'Application Types',
      'machine_name' => 'application_types',
      'description' => 'The different types of applications that can be included in the Apps pages.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'legacy_datacomm_userpoints_second' => array(
      'name' => 'Migrate legacy Second Userpoints category',
      'machine_name' => 'legacy_datacomm_userpoints_second',
      'description' => 'Legacy: Second Userpoints category',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
