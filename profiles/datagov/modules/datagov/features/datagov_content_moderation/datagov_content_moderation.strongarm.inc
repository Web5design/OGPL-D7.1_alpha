<?php
/**
 * @file
 * datagov_content_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_content_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_format';
  $strongarm->value = '!base_url|!timestamp|!type|!ip|!request_uri|!referer|!uid|!link|!message';
  $export['syslog_format'] = $strongarm;

  return $export;
}
