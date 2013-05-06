<?php

/**
* Implementation of hook_views_data
*/
function views_external_database_views_data() {

   $data['results']['table']['group'] = t('Legacy: Results');
   $data['results']['table']['base'] = array(
      //'field' => 'id',
      'title' => t('Legacy: Results table'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data ['results'] ['table'] ['join'] = array(
     //...to the organizations table
     'organizations' => array(
       'field' => 'id',
       'left_field' => 'agency_id'
     ),
   );  

   $data['results']['id'] = array(
      'title' => t('Legacy: Results ID field'),
      'help' => t('Legacy: Results ID field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['results']['agency_id'] = array(
      'title' => t('Legacy: Results agency ID field'),
      'help' => t('Legacy: Results agency ID field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'relationship' => array(
          'base' => 'organizations', 
          'field' => 'agency_id', 
          'handler' => 'views_handler_relationship', 
          'label' => t('Organizations') 
      ), 
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['results']['subagency_id'] = array(
      'title' => t('Legacy: Results subagency_id field'),
      'help' => t('Legacy: Results subagency_id field'),
      'field' => array(
         'handler' => 'views_handler_field', 
         'click sortable' => TRUE,
      ), 
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['results']['title'] = array(
      'title' => t('Legacy: Results title field'),
      'help' => t('Legacy: Results title field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['results']['description'] = array(
      'title' => t('Legacy: Results description field'),
      'help' => t('Legacy: Results description field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['results']['agency_abbreviation'] = array(
      'title' => t('Legacy: Results agency_abbreviation field'),
      'help' => t('Legacy: Results agency_abbreviation field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['results']['subagency_abbreviation'] = array(
      'title' => t('Legacy: Results subagency_abbreviation field'),
      'help' => t('Legacy: Results subagency_abbreviation field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['results']['category_name'] = array(
      'title' => t('Legacy: Results category_name field'),
      'help' => t('Legacy: Results category_name field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['results']['agency_name'] = array(
      'title' => t('Legacy: Results agency name field'),
      'help' => t('Legacy: Results agency name field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

    $data['results']['dataset_last_updated'] = array(
      'title' => t('Legacy: Results dataset last updated field'),
      'help' => t('Legacy: Results dataset last updated field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_external_database_handler_filter_custom_datetime',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_date',
      ),
    );

    $data['results']['dataset_creation'] = array(
      'title' => t('Legacy: Results dataset creation field'),
      'help' => t('Legacy: Results dataset creation field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_date',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_date',
      ),
    );

   $data['organizations']['table']['group'] = t('Legacy: Organizations');
   $data['organizations']['table']['base'] = array(
      'field' => 'id',
      'title' => t('Legacy: Organizations table'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['organizations']['full_name'] = array(
      'title' => t('Legacy: Organizations full name field'),
      'help' => t('Legacy: Organizations full name field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['organizations']['sort_order'] = array(
      'title' => t('Legacy: Organizations sort order field'),
      'help' => t('Legacy: Organizations sort order field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['table']['group'] = t('Legacy: Dataset Counts');
   $data['dataset_counts']['table']['base'] = array(
      'field' => 'id',
      'title' => t('Legacy: Dataset count table'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['dataset_counts']['agency_id'] = array(
      'title' => t('Legacy: Dataset count agency ID field'),
      'help' => t('Legacy: Dataset count agency ID field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['subagency_id'] = array(
      'title' => t('Legacy: Dataset count subagency ID field'),
      'help' => t('Legacy: Dataset count subagency ID field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['agency_name'] = array(
      'title' => t('Agency/Sub-Agency/Organization'),
      'help' => t('Legacy: Dataset count agency name Field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['dataset_counts']['subagency_name'] = array(
      'title' => t('Legacy: Dataset count subagency name Field'),
      'help' => t('Legacy: Dataset count subagency name Field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['dataset_counts']['raw'] = array(
      'title' => t('Raw Datasets'),
      'help' => t('Legacy: Dataset count raw Field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['tools'] = array(
      'title' => t('Tools'),
      'help' => t('Legacy: Dataset tools Field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['geodata'] = array(
      'title' => t('Geodata'),
      'help' => t('Legacy: Dataset count geodata field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['latest_update'] = array(
      'title' => t('Latest Entry'),
      'help' => t('Legacy: Dataset count latest update field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_date',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_date',
      ),
    );

   $data['dataset_counts']['agency_abbr'] = array(
      'title' => t('Legacy: Dataset count agency abbreviation field'),
      'help' => t('Legacy: Dataset count agency abbreviation field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['dataset_counts']['subagency_abbr'] = array(
      'title' => t('Legacy: Dataset count subagency abbreviation field'),
      'help' => t('Legacy: Dataset count subagency abbreviation field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['dataset_counts']['count'] = array(
      'title' => t("Legacy: Dataset count 'count' field"),
      'help' => t("Legacy: Dataset count 'count' field"),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['is_cfo'] = array(
      'title' => t('Legacy: Dataset count is_cfo field'),
      'help' => t('Legacy: Dataset count is_cfo field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['dataset_counts']['high_value_raw'] = array(
      'title' => t('Raw Datasets (high-value)'),
      'help' => t('Legacy: Dataset count high_value_raw field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['high_value_tools'] = array(
      'title' => t('Tools (high-value)'),
      'help' => t('Legacy: Dataset count high_value_tools field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['sort_order'] = array(
      'title' => t('Sort order'),
      'help' => t('Legacy: Dataset count sort order field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['dataset_counts']['secondary_sort_order'] = array(
      'title' => t('Secondary sort order'),
      'help' => t('Legacy: Dataset count sort order field'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['metrics_metadata']['table']['group'] = t('Legacy: Metrics');
   $data['metrics_metadata']['table']['base'] = array(
      'field' => 'id',
      'title' => t('Legacy: Metrics Table'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['metrics_metadata']['id'] = array(
      'title' => t('Legacy Metrics ID Field'),
      'help' => t('Metrics ID from the legacy database'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['metrics_metadata']['desc'] = array(
      'title' => t('Legacy Metrics Description Field'),
      'help' => t('Metrics desc from the legacy database'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );


   $data['v_stats_daily_visitor']['table']['group'] = t('Metrics Daily Visitor');
   $data['v_stats_daily_visitor']['table']['base'] = array(
      'title' => t('Legacy Metrics Daily Visitor'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_daily_visitor']['data_point_date'] = array(
      'title' => t('Date'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_daily_visitor']['data_point_value'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );


   $data['v_stats_metrics']['table']['group'] = t('Metrics Stats');
   $data['v_stats_metrics']['table']['base'] = array(
      'title' => t('Legacy Metrics Stats'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_metrics']['calculated_year_month'] = array(
      'title' => t('Year Month'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_metrics']['data_point_date'] = array(
      'title' => t('Date'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_metrics']['data_point_value'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['v_stats_metrics']['type'] = array(
      'title' => t('Type'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );
	
   $data['v_stats_metrics']['data_point_key_1'] = array(
      'title' => t('Category'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );	
	
   $data['v_stats_metrics']['calculated_year'] = array(
      'title' => t('Year'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );	

   $data['v_stats_metrics']['calculated_month'] = array(
      'title' => t('Month'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );		


   $data['v_stats_top_country']['table']['group'] = t('Metrics Stats');
   $data['v_stats_top_country']['table']['base'] = array(
      'title' => t('Legacy Metrics Top Country'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_top_country']['data_point_key_1'] = array(
      'title' => t('Country'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_top_country']['data_point_value'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['v_stats_top_country']['data_point_date'] = array(
      'title' => t('Date'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );


   $data['v_stats_top_state']['table']['group'] = t('Metrics Stats');
   $data['v_stats_top_state']['table']['base'] = array(
      'title' => t('Legacy Metrics Top State'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_top_state']['data_point_key_1'] = array(
      'title' => t('State'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_top_state']['data_point_value'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['v_stats_top_state']['data_point_date'] = array(
      'title' => t('Date'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );


   $data['v_stats_download_by_category']['table']['group'] = t('Metrics Stats');
   $data['v_stats_download_by_category']['table']['base'] = array(
      'title' => t('Legacy Metrics Download by Category'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_download_by_category']['data_point_key_1'] = array(
      'title' => t('Data Category'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_download_by_category']['data_point_value'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_external_database_digits_views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );

   $data['v_stats_download_by_category']['data_point_date'] = array(
      'title' => t('Date'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );


   $data['v_stats_site_suggestion']['table']['group'] = t('Metrics Stats');
   $data['v_stats_site_suggestion']['table']['base'] = array(
      'title' => t('Legacy Metrics Site Suggestion'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_site_suggestion']['data_point_key_1'] = array(
      'title' => t('Category'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_site_suggestion']['data_point_value'] = array(
      'title' => t('Datasets'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );


   $data['v_stats_rawtool']['table']['group'] = t('Results Stats');
   $data['v_stats_rawtool']['table']['base'] = array(
      'title' => t('Legacy Results rawtool'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_rawtool']['category_name'] = array(
      'title' => t('Category'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_rawtool']['numberofdataset'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );


   $data['v_stats_geodata']['table']['group'] = t('Results Stats');
   $data['v_stats_geodata']['table']['base'] = array(
      'title' => t('Legacy Results geodata'),
      'database' => 'data_gov',
      'weight' => -10,
   );

   $data['v_stats_geodata']['category_name'] = array(
      'title' => t('Category'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['v_stats_geodata']['numberofdataset'] = array(
      'title' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_numeric',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_numeric',
      ),
    );


   return $data;

}

function views_external_database_views_query_alter(&$view, &$query) {

    if(($view->name == "monthly_download_trends_from_start" || $view->name == "monthly_visitor_stats_from_start" || $view->name == "page_views_from_start") 
	    && $view->current_display == "page_1" && $view->exposed_raw_input['calculated_year'] == "last_12") {
		
		unset($query->where[1]['conditions'][1]);	

		$today = date("d");		
		
		if($today > 10)
			$month = date("m")-1;
		else
			$month = date("m")-2;
				
		$query->add_where_expression(2, "v_stats_metrics.data_point_date <= '" . date("Y-m-d", mktime(0,0,0,$month ,date("t", $month),date('Y'))) . "'");
		$query->add_where_expression(0, "v_stats_metrics.data_point_date >= '" . date('Y-m-d', mktime(0,0,0,$month-11,1,date('Y'))) . "'");		
				
	}
	
   // jira #DG-1182 2nd. Department/Agency Level listing, change subagency_id = 0 to subagency_id IS NULL
   if ( $view->name != "agency_datasets_list") {
      return;
   }
   if (isset($query->where[0]['conditions'][1]) && $query->where[0]['conditions'][1]['value'][':results_subagency_id'] == '0') {
      unset($query->where[0]['conditions'][1]);
      $query->add_where(0, 'results.subagency_id', NULL, 'IS');
   }
   

}

