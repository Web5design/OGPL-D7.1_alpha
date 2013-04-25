<?php
/**
 * @file
 * datagov_forums.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function datagov_forums_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-forums-group_audience'
  $field_instances['taxonomy_term-forums-group_audience'] = array(
    'bundle' => 'forums',
    'default_value' => NULL,
    'default_value_function' => 'og_field_audience_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'group_audience',
    'label' => 'Groups audience',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(
        'opt_group' => 'auto',
      ),
      'type' => 'group_audience',
      'weight' => 31,
    ),
    'widget_type' => 'group_audience',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups audience');

  return $field_instances;
}
