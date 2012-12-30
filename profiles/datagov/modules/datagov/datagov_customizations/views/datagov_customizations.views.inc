<?php


/**
 * @file
 * Provides support for the Views module.
 */

/**
* Implementation of hook_views_data().
*/
function datagov_customizations_views_data() {
  $data = array();
 
  // The flexible date filter.
  $data['og_membership']['gid'] = array(
    'group' => t('OG Membership'),
    'real field'  => 'gid',
    'title' => t('Custom Group ID filter'),
    'help' => t('Filter any Views based on group ID'),
    'filter' => array(
      'handler' => 'og_handler_filter_datagov_group_audience_gid'
    ),
  );
 
  return $data;
}

/**
* Implementation of hook_views_handlers() to register all of the basic handlers
* views uses.
*/
function datagov_customizations_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'datagov_customizations') . '/views/handlers', // path to view files
    ),
    'handlers' => array(
      // register our custom filter, with the class/file name and parent class
      'og_handler_filter_datagov_group_audience_gid' => array(
        'parent' => 'views_handler_filter_many_to_one',
      )
    ),
  );
}