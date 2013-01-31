<?php
/**
 * @file
 * datagov_announcements.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datagov_announcements_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'whatsnew_new_features';
  $context->description = '';
  $context->tag = 'Datagov Panels';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'datagov_new_features' => 'datagov_new_features',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-datagov_new_features-block' => array(
          'module' => 'views',
          'delta' => 'datagov_new_features-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Datagov Panels');
  $export['whatsnew_new_features'] = $context;

  return $export;
}
