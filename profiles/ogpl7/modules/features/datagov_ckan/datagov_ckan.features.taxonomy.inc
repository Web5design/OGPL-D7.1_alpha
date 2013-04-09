<?php
/**
 * @file
 * datagov_ckan.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datagov_ckan_taxonomy_default_vocabularies() {
  return array(
    'legacy_datacomm_data_tools_vocabulary' => array(
      'name' => 'Migrate legacy Data/tools Vocabulary',
      'machine_name' => 'legacy_datacomm_data_tools_vocabulary',
      'description' => 'Legacy: Data/tools Vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'supply_chain_section' => array(
      'name' => 'Supply Chain Section',
      'machine_name' => 'supply_chain_section',
      'description' => 'Sustainable Supply Chain Section',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
