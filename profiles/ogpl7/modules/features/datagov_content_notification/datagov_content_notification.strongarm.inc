<?php
/**
 * @file
 * datagov_content_notification.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_content_notification_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_per_type';
  $strongarm->value = '1';
  $export['notifications_content_per_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type';
  $strongarm->value = array(
    'announcements' => 0,
    'applications' => 0,
    'page' => 0,
    'blog' => 0,
    'challenge' => 0,
    'community' => 0,
    'event' => 0,
    'faq' => 0,
    'panel' => 0,
    'slide' => 0,
    'tool' => 0,
    'webform' => 0,
  );
  $export['notifications_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_blog';
  $strongarm->value = array(
    0 => 'content_thread',
    1 => 'content_type',
  );
  $export['notifications_content_type_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_content_thread';
  $strongarm->value = array(
    'subscriptions_block' => 1,
    'node_links' => 1,
    'teaser_links' => 1,
  );
  $export['notifications_option_subscription_types_content_thread'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_content_type';
  $strongarm->value = array(
    'subscriptions_block' => 1,
    'node_links' => 1,
    'teaser_links' => 1,
  );
  $export['notifications_option_subscription_types_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_user_content';
  $strongarm->value = array(
    'subscriptions_block' => 0,
    'user_links' => 0,
  );
  $export['notifications_option_subscription_types_user_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_user_content_type';
  $strongarm->value = array(
    'subscriptions_block' => 0,
  );
  $export['notifications_option_subscription_types_user_content_type'] = $strongarm;

  return $export;
}
