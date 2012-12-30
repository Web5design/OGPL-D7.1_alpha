<?php
/**
 * @file
 * metric_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function metric_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'datasets_published_per_month';
  $context->description = '';
  $context->tag = 'metric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'metric/federalagency/datasetpublishedpermonth' => 'metric/federalagency/datasetpublishedpermonth',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-f97191c2300f7beb05d07a5cecd1309a' => array(
          'module' => 'views',
          'delta' => 'f97191c2300f7beb05d07a5cecd1309a',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('metric');
  $export['datasets_published_per_month'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'federal_agency_participation';
  $context->description = 'Federal Agency Participation';
  $context->tag = 'metric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'metric' => 'metric',
        'metric/federalagency' => 'metric/federalagency',
        'metric/federalagency/federalagencyparticipation' => 'metric/federalagency/federalagencyparticipation',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-8b987adda9005d7b3e6b14df525d3713' => array(
          'module' => 'views',
          'delta' => '8b987adda9005d7b3e6b14df525d3713',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-d1dc4cbfd36814f75b676276b649a639' => array(
          'module' => 'views',
          'delta' => 'd1dc4cbfd36814f75b676276b649a639',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-f6a08fc65eb3512274734bf68e91c3c8' => array(
          'module' => 'views',
          'delta' => 'f6a08fc65eb3512274734bf68e91c3c8',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Federal Agency Participation');
  t('metric');
  $export['federal_agency_participation'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'metric_menu';
  $context->description = 'Metric Menu';
  $context->tag = 'metric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'metric/*' => 'metric/*',
        'metric' => 'metric',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => 2,
          'region' => 'preface_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metric Menu');
  t('metric');
  $export['metric_menu'] = $context;

  return $export;
}
