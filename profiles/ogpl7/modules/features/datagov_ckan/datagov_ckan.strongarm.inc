<?php
/**
 * @file
 * datagov_ckan.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_ckan_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_data_access_point';
  $strongarm->value = 'http://ckan-fe-data.uat.reisys.com:8080/';
  $export['ckan_data_access_point'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_metric_next_execution';
  $strongarm->value = 1365728400;
  $export['ckan_metric_next_execution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_metric_organization_server_address';
  $strongarm->value = 'http://uat-idm-datagov.reisys.com/fed_agency.json';
  $export['ckan_metric_organization_server_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_metric_time_frame_end';
  $strongarm->value = '03:59:59';
  $export['ckan_metric_time_frame_end'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_metric_time_frame_start';
  $strongarm->value = '03:00:00';
  $export['ckan_metric_time_frame_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_metric_time_length';
  $strongarm->value = '5';
  $export['ckan_metric_time_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_sync_enabled';
  $strongarm->value = '1';
  $export['ckan_sync_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_sync_gid_1';
  $strongarm->value = 'manufacturing7382';
  $export['ckan_sync_gid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_sync_next_execution';
  $strongarm->value = 1365717600;
  $export['ckan_sync_next_execution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_sync_time_frame_end';
  $strongarm->value = '23:59:59';
  $export['ckan_sync_time_frame_end'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_sync_time_frame_start';
  $strongarm->value = '00:00:00';
  $export['ckan_sync_time_frame_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_sync_time_length';
  $strongarm->value = '20';
  $export['ckan_sync_time_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geo_data_access_point';
  $strongarm->value = 'http://geo.data.gov/geoportal/csw';
  $export['geo_data_access_point'] = $strongarm;

  return $export;
}
