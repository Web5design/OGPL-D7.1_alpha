<?php
/**
 * @file
 * data_gov_communities_configuration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function data_gov_communities_configuration_taxonomy_default_vocabularies() {
  return array(
    'release_labels' => array(
      'name' => 'Release Labels',
      'machine_name' => 'release_labels',
      'description' => 'Optional label to describe group\'s release mode',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
