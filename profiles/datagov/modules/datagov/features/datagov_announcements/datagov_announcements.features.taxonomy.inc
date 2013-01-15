<?php
/**
 * @file
 * datagov_announcements.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datagov_announcements_taxonomy_default_vocabularies() {
  return array(
    'announcements_and_news' => array(
      'name' => 'Announcements and News',
      'machine_name' => 'announcements_and_news',
      'description' => 'Taxonomy related to the different sections that the "Announcements and News" content type can be filtered by.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
