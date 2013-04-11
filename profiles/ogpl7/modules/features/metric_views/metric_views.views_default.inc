<?php
/**
 * @file
 * metric_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function metric_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agency_datasets_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'agency_datasets_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agency Datasets (Raw Data)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Show All';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id_1' => 'id_1',
    'title' => 'title',
    'description' => 'description',
    'agency_abbreviation' => 'agency_abbreviation',
    'subagency_abbreviation' => 'subagency_abbreviation',
    'category_name' => 'category_name',
    'subagency_id' => 'subagency_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbreviation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_abbreviation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'category_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results ID field */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'results';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results title field */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'results';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name (click for metadata and to rate record) ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://explore.data.gov/datasets/external?id=http://www.data.gov/details/[id_1]';
  /* Field: Legacy: Results: Legacy: Results description field */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'results';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  /* Field: Legacy: Results: Legacy: Results agency_abbreviation field */
  $handler->display->display_options['fields']['agency_abbreviation']['id'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['agency_abbreviation']['field'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['label'] = 'Agency';
  /* Field: Legacy: Results: Legacy: Results subagency_abbreviation field */
  $handler->display->display_options['fields']['subagency_abbreviation']['id'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['subagency_abbreviation']['field'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['label'] = 'Subagency';
  /* Field: Legacy: Results: Legacy: Results category_name field */
  $handler->display->display_options['fields']['category_name']['id'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['table'] = 'results';
  $handler->display->display_options['fields']['category_name']['field'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['label'] = 'Category';
  /* Field: Legacy: Results: Legacy: Results subagency_id field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'results';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  /* Contextual filter: Legacy: Results: Legacy: Results agency ID field */
  $handler->display->display_options['arguments']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['arguments']['agency_id']['table'] = 'results';
  $handler->display->display_options['arguments']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['arguments']['agency_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['agency_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['agency_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['agency_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['agency_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Legacy: Results: Legacy: Results subagency_id field */
  $handler->display->display_options['arguments']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['arguments']['subagency_id']['table'] = 'results';
  $handler->display->display_options['arguments']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['arguments']['subagency_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['subagency_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['subagency_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['subagency_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$cur_view = views_get_current_view();


$orgs = $cur_view->args[2];

$orgs = trim($orgs, "[,]");
$orgs = explode(",", $orgs);
$a = array();
foreach ($orgs as $org) {
  if (strlen($org) ==0) {
    continue;
  }
  $a[] = "organization:" . urlencode($org);
}
$orgs = implode("+OR+", $a);


if ($org != "") {
  $url = variable_get(\'ckan_data_access_point\', \'http://geo.gov.ckan.org/\');
  $url = $url . "dataset?q=$orgs"; 
  echo "<div style=\'text-align:right\'>Click <a href=$url>here</a> to see Agency Datasets for Geospatial Data.</div>";
}
?>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Legacy: Results: Legacy: Results agency ID field */
  $handler->display->display_options['arguments']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['arguments']['agency_id']['table'] = 'results';
  $handler->display->display_options['arguments']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['arguments']['agency_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['agency_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['agency_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['agency_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['agency_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Legacy: Results: Legacy: Results subagency_id field */
  $handler->display->display_options['arguments']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['arguments']['subagency_id']['table'] = 'results';
  $handler->display->display_options['arguments']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['arguments']['subagency_id']['exception']['value'] = '*';
  $handler->display->display_options['arguments']['subagency_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['subagency_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['subagency_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['subagency_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/agency/%/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['agency_datasets_list'] = $view;

  $view = new view();
  $view->name = 'agency_datasets_monthly_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'agency_datasets_monthly_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agency datasets monthly list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id_1' => 'id_1',
    'title' => 'title',
    'description' => 'description',
    'agency_abbreviation' => 'agency_abbreviation',
    'subagency_abbreviation' => 'subagency_abbreviation',
    'category_name' => 'category_name',
    'subagency_id' => 'subagency_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbreviation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_abbreviation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'category_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results ID field */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'results';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results title field */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'results';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name (click for metadata and to rate record) ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://explore.data.gov/datasets/external?id=http://www.data.gov/details/[id_1]';
  /* Field: Legacy: Results: Legacy: Results description field */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'results';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  /* Field: Legacy: Results: Legacy: Results agency_abbreviation field */
  $handler->display->display_options['fields']['agency_abbreviation']['id'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['agency_abbreviation']['field'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['label'] = 'Agency';
  /* Field: Legacy: Results: Legacy: Results subagency_abbreviation field */
  $handler->display->display_options['fields']['subagency_abbreviation']['id'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['subagency_abbreviation']['field'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['label'] = 'Subagency';
  /* Field: Legacy: Results: Legacy: Results category_name field */
  $handler->display->display_options['fields']['category_name']['id'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['table'] = 'results';
  $handler->display->display_options['fields']['category_name']['field'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['label'] = 'Category';
  /* Field: Legacy: Results: Legacy: Results subagency_id field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'results';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['fields']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['fields']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['fields']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['fields']['dataset_last_updated']['label'] = 'Last updated date';
  /* Contextual filter: Legacy: Results: Legacy: Results agency ID field */
  $handler->display->display_options['arguments']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['arguments']['agency_id']['table'] = 'results';
  $handler->display->display_options['arguments']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['arguments']['agency_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['agency_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['agency_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['agency_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['agency_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['filters']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['filters']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['operator'] = '<=';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['value'] = 'now';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'list/agency/monthly/%/%/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['agency_datasets_monthly_list'] = $view;

  $view = new view();
  $view->name = 'datasets_published_per_month';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'Datasets Published per Month';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Datasets Published per Month';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Legacy: Results: Legacy: Results agency ID field */
  $handler->display->display_options['relationships']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['relationships']['agency_id']['table'] = 'results';
  $handler->display->display_options['relationships']['agency_id']['field'] = 'agency_id';
  /* Field: Legacy: Results: Legacy: Results agency ID field */
  $handler->display->display_options['fields']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['table'] = 'results';
  $handler->display->display_options['fields']['agency_id']['field'] = 'agency_id';
  /* Field: Legacy: Organizations: Legacy: Organizations full name field */
  $handler->display->display_options['fields']['full_name']['id'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['table'] = 'organizations';
  $handler->display->display_options['fields']['full_name']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['relationship'] = 'agency_id';
  $handler->display->display_options['fields']['full_name']['label'] = 'Agency Name';
  /* Field: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['fields']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['fields']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['fields']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['fields']['dataset_last_updated']['label'] = 'Number of Datasets & Tools published by month';
  /* Field: Legacy: Results: Legacy: Results dataset creation field */
  $handler->display->display_options['fields']['dataset_creation']['id'] = 'dataset_creation';
  $handler->display->display_options['fields']['dataset_creation']['table'] = 'results';
  $handler->display->display_options['fields']['dataset_creation']['field'] = 'dataset_creation';
  $handler->display->display_options['fields']['dataset_creation']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Total in the Past 12 Months';
  /* Sort criterion: Legacy: Organizations: Legacy: Organizations sort order field */
  $handler->display->display_options['sorts']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['table'] = 'organizations';
  $handler->display->display_options['sorts']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['relationship'] = 'agency_id';
  /* Filter criterion: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['filters']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['filters']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['operator'] = '>=';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['value'] = '-1 year';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'datasets-published-per-month';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['datasets_published_per_month'] = $view;

  $view = new view();
  $view->name = 'federal_agency_participation_departments_agencies_organizations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'dataset_counts';
  $view->human_name = 'Federal agency participation: Departments Agencies Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Departments/Agencies/Organizations';
  $handler->display->display_options['css_class'] = 'view-federal-agency-participation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'subagency_abbr' => 'subagency_abbr',
    'subagency_name' => 'subagency_name',
    'agency_abbr' => 'agency_abbr',
    'agency_name' => 'agency_name',
    'high_value_raw' => 'high_value_raw',
    'raw' => 'raw',
    'high_value_tools' => 'high_value_tools',
    'tools' => 'tools',
    'geodata' => 'geodata',
    'expression' => 'expression',
    'latest_update' => 'latest_update',
    'secondary_sort_order' => 'secondary_sort_order',
    'sort_order' => 'sort_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subagency_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'high_value_raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'high_value_tools' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tools' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'geodata' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'latest_update' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'secondary_sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency abbreviation field */
  $handler->display->display_options['fields']['subagency_abbr']['id'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_abbr']['field'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['fields']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_name']['field'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['label'] = 'Subagency name';
  $handler->display->display_options['fields']['subagency_name']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency abbreviation field */
  $handler->display->display_options['fields']['agency_abbr']['id'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_abbr']['field'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Agency/Sub-Agency/Organization */
  $handler->display->display_options['fields']['agency_name']['id'] = 'agency_name';
  $handler->display->display_options['fields']['agency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_name']['field'] = 'agency_name';
  /* Field: Legacy: Dataset Counts: Raw Datasets (high-value) */
  $handler->display->display_options['fields']['high_value_raw']['id'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_raw']['field'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['label'] = 'High-value raw datasets ';
  $handler->display->display_options['fields']['high_value_raw']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Raw Datasets */
  $handler->display->display_options['fields']['raw']['id'] = 'raw';
  $handler->display->display_options['fields']['raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['raw']['field'] = 'raw';
  $handler->display->display_options['fields']['raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['raw']['alter']['text'] = '[raw] <span class="hival">([high_value_raw])</span>';
  $handler->display->display_options['fields']['raw']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Tools (high-value) */
  $handler->display->display_options['fields']['high_value_tools']['id'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_tools']['field'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['label'] = 'High-value tools';
  $handler->display->display_options['fields']['high_value_tools']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Tools */
  $handler->display->display_options['fields']['tools']['id'] = 'tools';
  $handler->display->display_options['fields']['tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['tools']['field'] = 'tools';
  $handler->display->display_options['fields']['tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tools']['alter']['text'] = '[tools] <span class="hival">([high_value_tools])</span>';
  $handler->display->display_options['fields']['tools']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Geodata */
  $handler->display->display_options['fields']['geodata']['id'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['geodata']['field'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['empty'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['empty'] = '0';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[raw] + [tools] +  [geodata]';
  /* Field: Legacy: Dataset Counts: Latest Entry */
  $handler->display->display_options['fields']['latest_update']['id'] = 'latest_update';
  $handler->display->display_options['fields']['latest_update']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['latest_update']['field'] = 'latest_update';
  /* Field: Legacy: Dataset Counts: Secondary sort order */
  $handler->display->display_options['fields']['secondary_sort_order']['id'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['secondary_sort_order']['field'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Sort order */
  $handler->display->display_options['fields']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency ID field */
  $handler->display->display_options['fields']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency ID field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  /* Sort criterion: Legacy: Dataset Counts: Sort order */
  $handler->display->display_options['sorts']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['sorts']['sort_order']['field'] = 'sort_order';
  /* Sort criterion: Legacy: Dataset Counts: Secondary sort order */
  $handler->display->display_options['sorts']['secondary_sort_order']['id'] = 'secondary_sort_order';
  $handler->display->display_options['sorts']['secondary_sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['sorts']['secondary_sort_order']['field'] = 'secondary_sort_order';
  /* Sort criterion: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['sorts']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['sorts']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['sorts']['subagency_name']['field'] = 'subagency_name';
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count is_cfo field */
  $handler->display->display_options['filters']['is_cfo']['id'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['is_cfo']['field'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['value'] = 'Y';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'metric/federalagencyparticipation/departments_agencies_organizations';

  /* Display: Departments/Agencies/Organizations */
  $handler = $view->new_display('block', 'Departments/Agencies/Organizations', 'block_1');
  $handler->display->display_options['display_description'] = 'Departments/Agencies/Organizations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Data export - Departments Agencies Organizations - CSV */
  $handler = $view->new_display('views_data_export', 'Data export - Departments Agencies Organizations - CSV', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Departments Agencies Organizations CSV Export';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Legacy: Dataset Counts: Agency/Sub-Agency/Organization */
  $handler->display->display_options['fields']['agency_name']['id'] = 'agency_name';
  $handler->display->display_options['fields']['agency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_name']['field'] = 'agency_name';
  $handler->display->display_options['fields']['agency_name']['label'] = 'Agency Name';
  $handler->display->display_options['fields']['agency_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['agency_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['agency_name']['alter']['text'] = '[agency_name]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Agency Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[agency_name]';
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency abbreviation field */
  $handler->display->display_options['fields']['agency_abbr']['id'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_abbr']['field'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['label'] = 'Agency Abbreviation';
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['fields']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_name']['field'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['label'] = 'Subagency Name';
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency abbreviation field */
  $handler->display->display_options['fields']['subagency_abbr']['id'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_abbr']['field'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['label'] = 'Subagency Abbreviation';
  /* Field: Legacy: Dataset Counts: Raw Datasets */
  $handler->display->display_options['fields']['raw']['id'] = 'raw';
  $handler->display->display_options['fields']['raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['raw']['field'] = 'raw';
  $handler->display->display_options['fields']['raw']['alter']['text'] = '[raw] <span class="hival">([high_value_raw])</span>';
  $handler->display->display_options['fields']['raw']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Raw Datasets (high-value) */
  $handler->display->display_options['fields']['high_value_raw']['id'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_raw']['field'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['label'] = 'High-value Raw Datasets ';
  /* Field: Legacy: Dataset Counts: Tools */
  $handler->display->display_options['fields']['tools']['id'] = 'tools';
  $handler->display->display_options['fields']['tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['tools']['field'] = 'tools';
  $handler->display->display_options['fields']['tools']['alter']['text'] = '[tools] <span class="hival">([high_value_tools])</span>';
  $handler->display->display_options['fields']['tools']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Tools (high-value) */
  $handler->display->display_options['fields']['high_value_tools']['id'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_tools']['field'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['label'] = 'High-value Tools';
  /* Field: Legacy: Dataset Counts: Geodata */
  $handler->display->display_options['fields']['geodata']['id'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['geodata']['field'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['empty'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['empty'] = '0';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[raw] + [tools] +  [geodata]';
  /* Field: Legacy: Dataset Counts: Latest Entry */
  $handler->display->display_options['fields']['latest_update']['id'] = 'latest_update';
  $handler->display->display_options['fields']['latest_update']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['latest_update']['field'] = 'latest_update';
  /* Field: Legacy: Dataset Counts: Secondary sort order */
  $handler->display->display_options['fields']['secondary_sort_order']['id'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['secondary_sort_order']['field'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Sort order */
  $handler->display->display_options['fields']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency ID field */
  $handler->display->display_options['fields']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency ID field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'metric/federalagencyparticipation/departments_agencies_organizations_csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Data export - Departments Agencies Organizations - XLS */
  $handler = $view->new_display('views_data_export', 'Data export - Departments Agencies Organizations - XLS', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'Departments Agencies Organizations XLS Export';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Legacy: Dataset Counts: Agency/Sub-Agency/Organization */
  $handler->display->display_options['fields']['agency_name']['id'] = 'agency_name';
  $handler->display->display_options['fields']['agency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_name']['field'] = 'agency_name';
  $handler->display->display_options['fields']['agency_name']['label'] = 'Agency Name';
  $handler->display->display_options['fields']['agency_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['agency_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['agency_name']['alter']['text'] = '[agency_name]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Agency Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[agency_name]';
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency abbreviation field */
  $handler->display->display_options['fields']['agency_abbr']['id'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_abbr']['field'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['label'] = 'Agency Abbreviation';
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['fields']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_name']['field'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['label'] = 'Subagency Name';
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency abbreviation field */
  $handler->display->display_options['fields']['subagency_abbr']['id'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_abbr']['field'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['label'] = 'Subagency Abbreviation';
  /* Field: Legacy: Dataset Counts: Raw Datasets */
  $handler->display->display_options['fields']['raw']['id'] = 'raw';
  $handler->display->display_options['fields']['raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['raw']['field'] = 'raw';
  $handler->display->display_options['fields']['raw']['alter']['text'] = '[raw] <span class="hival">([high_value_raw])</span>';
  $handler->display->display_options['fields']['raw']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Raw Datasets (high-value) */
  $handler->display->display_options['fields']['high_value_raw']['id'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_raw']['field'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['label'] = 'High-value raw datasets ';
  /* Field: Legacy: Dataset Counts: Tools */
  $handler->display->display_options['fields']['tools']['id'] = 'tools';
  $handler->display->display_options['fields']['tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['tools']['field'] = 'tools';
  $handler->display->display_options['fields']['tools']['alter']['text'] = '[tools] <span class="hival">([high_value_tools])</span>';
  $handler->display->display_options['fields']['tools']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Tools (high-value) */
  $handler->display->display_options['fields']['high_value_tools']['id'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_tools']['field'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['label'] = 'High-value tools';
  /* Field: Legacy: Dataset Counts: Geodata */
  $handler->display->display_options['fields']['geodata']['id'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['geodata']['field'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['empty'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['empty'] = '0';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[raw] + [tools] +  [geodata]';
  /* Field: Legacy: Dataset Counts: Latest Entry */
  $handler->display->display_options['fields']['latest_update']['id'] = 'latest_update';
  $handler->display->display_options['fields']['latest_update']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['latest_update']['field'] = 'latest_update';
  /* Field: Legacy: Dataset Counts: Secondary sort order */
  $handler->display->display_options['fields']['secondary_sort_order']['id'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['secondary_sort_order']['field'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Sort order */
  $handler->display->display_options['fields']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency ID field */
  $handler->display->display_options['fields']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency ID field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'metric/federalagencyparticipation/departments_agencies_organizations_xls';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count is_cfo field */
  $handler->display->display_options['filters']['is_cfo']['id'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['is_cfo']['field'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['value'] = 'Y';
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['filters']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['filters']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['subagency_name']['field'] = 'subagency_name';
  $handler->display->display_options['filters']['subagency_name']['value'] = 'Department/Agency Level';
  $export['federal_agency_participation_departments_agencies_organizations'] = $view;

  $view = new view();
  $view->name = 'federal_agency_participation_other_agencies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'dataset_counts';
  $view->human_name = 'Federal agency participation: Other Agencies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Agencies';
  $handler->display->display_options['css_class'] = 'view-federal-agency-participation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'subagency_abbr' => 'subagency_abbr',
    'subagency_name' => 'subagency_name',
    'agency_abbr' => 'agency_abbr',
    'agency_name' => 'agency_name',
    'high_value_raw' => 'high_value_raw',
    'raw' => 'raw',
    'high_value_tools' => 'high_value_tools',
    'tools' => 'tools',
    'geodata' => 'geodata',
    'expression' => 'expression',
    'latest_update' => 'latest_update',
    'secondary_sort_order' => 'secondary_sort_order',
    'sort_order' => 'sort_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subagency_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'high_value_raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'high_value_tools' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tools' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'geodata' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'latest_update' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'secondary_sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency abbreviation field */
  $handler->display->display_options['fields']['subagency_abbr']['id'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_abbr']['field'] = 'subagency_abbr';
  $handler->display->display_options['fields']['subagency_abbr']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['fields']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_name']['field'] = 'subagency_name';
  $handler->display->display_options['fields']['subagency_name']['label'] = 'Subagency name';
  $handler->display->display_options['fields']['subagency_name']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency abbreviation field */
  $handler->display->display_options['fields']['agency_abbr']['id'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_abbr']['field'] = 'agency_abbr';
  $handler->display->display_options['fields']['agency_abbr']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Agency/Sub-Agency/Organization */
  $handler->display->display_options['fields']['agency_name']['id'] = 'agency_name';
  $handler->display->display_options['fields']['agency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_name']['field'] = 'agency_name';
  /* Field: Legacy: Dataset Counts: Raw Datasets (high-value) */
  $handler->display->display_options['fields']['high_value_raw']['id'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_raw']['field'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['label'] = 'High-value raw datasets ';
  $handler->display->display_options['fields']['high_value_raw']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Raw Datasets */
  $handler->display->display_options['fields']['raw']['id'] = 'raw';
  $handler->display->display_options['fields']['raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['raw']['field'] = 'raw';
  $handler->display->display_options['fields']['raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['raw']['alter']['text'] = '[raw] <span class="hival">([high_value_raw])</span>';
  $handler->display->display_options['fields']['raw']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Tools (high-value) */
  $handler->display->display_options['fields']['high_value_tools']['id'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_tools']['field'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['label'] = 'High-value tools';
  $handler->display->display_options['fields']['high_value_tools']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Tools */
  $handler->display->display_options['fields']['tools']['id'] = 'tools';
  $handler->display->display_options['fields']['tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['tools']['field'] = 'tools';
  $handler->display->display_options['fields']['tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tools']['alter']['text'] = '[tools] <span class="hival">([high_value_tools])</span>';
  $handler->display->display_options['fields']['tools']['empty'] = '0';
  /* Field: Legacy: Dataset Counts: Geodata */
  $handler->display->display_options['fields']['geodata']['id'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['geodata']['field'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['empty'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['empty'] = '0';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[raw] + [tools] +  [geodata]';
  /* Field: Legacy: Dataset Counts: Latest Entry */
  $handler->display->display_options['fields']['latest_update']['id'] = 'latest_update';
  $handler->display->display_options['fields']['latest_update']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['latest_update']['field'] = 'latest_update';
  /* Field: Legacy: Dataset Counts: Secondary sort order */
  $handler->display->display_options['fields']['secondary_sort_order']['id'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['secondary_sort_order']['field'] = 'secondary_sort_order';
  $handler->display->display_options['fields']['secondary_sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Sort order */
  $handler->display->display_options['fields']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['fields']['sort_order']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count agency ID field */
  $handler->display->display_options['fields']['agency_id']['id'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['agency_id']['field'] = 'agency_id';
  $handler->display->display_options['fields']['agency_id']['exclude'] = TRUE;
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency ID field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  /* Sort criterion: Legacy: Dataset Counts: Sort order */
  $handler->display->display_options['sorts']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['sorts']['sort_order']['field'] = 'sort_order';
  /* Sort criterion: Legacy: Dataset Counts: Secondary sort order */
  $handler->display->display_options['sorts']['secondary_sort_order']['id'] = 'secondary_sort_order';
  $handler->display->display_options['sorts']['secondary_sort_order']['table'] = 'dataset_counts';
  $handler->display->display_options['sorts']['secondary_sort_order']['field'] = 'secondary_sort_order';
  /* Sort criterion: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['sorts']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['sorts']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['sorts']['subagency_name']['field'] = 'subagency_name';
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count is_cfo field */
  $handler->display->display_options['filters']['is_cfo']['id'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['is_cfo']['field'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['value'] = 'N';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'metric/federalagencyparticipation/other_agencies';

  /* Display: Other Agencies */
  $handler = $view->new_display('block', 'Other Agencies', 'block_1');
  $handler->display->display_options['display_description'] = 'Departments/Agencies/Organizations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count is_cfo field */
  $handler->display->display_options['filters']['is_cfo']['id'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['is_cfo']['field'] = 'is_cfo';
  $handler->display->display_options['filters']['is_cfo']['value'] = 'N';
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count subagency name Field */
  $handler->display->display_options['filters']['subagency_name']['id'] = 'subagency_name';
  $handler->display->display_options['filters']['subagency_name']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['subagency_name']['field'] = 'subagency_name';
  $handler->display->display_options['filters']['subagency_name']['value'] = 'Department/Agency Level';
  $export['federal_agency_participation_other_agencies'] = $view;

  $view = new view();
  $view->name = 'federal_agency_participation_summary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'dataset_counts';
  $view->human_name = 'Federal agency participation: Summary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Summary';
  $handler->display->display_options['css_class'] = 'view-federal-agency-participation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'subagency_abbr' => 'subagency_abbr',
    'subagency_name' => 'subagency_name',
    'agency_abbr' => 'agency_abbr',
    'agency_name' => 'agency_name',
    'high_value_raw' => 'high_value_raw',
    'raw' => 'raw',
    'high_value_tools' => 'high_value_tools',
    'tools' => 'tools',
    'geodata' => 'geodata',
    'expression' => 'expression',
    'latest_update' => 'latest_update',
    'secondary_sort_order' => 'secondary_sort_order',
    'sort_order' => 'sort_order',
    'subagency_id' => 'subagency_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subagency_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'high_value_raw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'high_value_tools' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tools' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'geodata' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'latest_update' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'secondary_sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Legacy: Dataset Counts: Legacy: Dataset count subagency ID field */
  $handler->display->display_options['fields']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['fields']['subagency_id']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Agency/Sub-Agency/Organization ';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Total';
  /* Field: SUM(Legacy: Dataset Counts: Raw Datasets (high-value)) */
  $handler->display->display_options['fields']['high_value_raw']['id'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_raw']['field'] = 'high_value_raw';
  $handler->display->display_options['fields']['high_value_raw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['high_value_raw']['exclude'] = TRUE;
  /* Field: SUM(Legacy: Dataset Counts: Raw Datasets) */
  $handler->display->display_options['fields']['raw']['id'] = 'raw';
  $handler->display->display_options['fields']['raw']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['raw']['field'] = 'raw';
  $handler->display->display_options['fields']['raw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['raw']['alter']['text'] = '[raw] <span class="hival">([high_value_raw])</span>';
  $handler->display->display_options['fields']['raw']['empty'] = '0';
  /* Field: SUM(Legacy: Dataset Counts: Tools (high-value)) */
  $handler->display->display_options['fields']['high_value_tools']['id'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['high_value_tools']['field'] = 'high_value_tools';
  $handler->display->display_options['fields']['high_value_tools']['group_type'] = 'sum';
  $handler->display->display_options['fields']['high_value_tools']['exclude'] = TRUE;
  /* Field: SUM(Legacy: Dataset Counts: Tools) */
  $handler->display->display_options['fields']['tools']['id'] = 'tools';
  $handler->display->display_options['fields']['tools']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['tools']['field'] = 'tools';
  $handler->display->display_options['fields']['tools']['group_type'] = 'sum';
  $handler->display->display_options['fields']['tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tools']['alter']['text'] = '[tools] <span class="hival">([high_value_tools])</span>';
  $handler->display->display_options['fields']['tools']['empty'] = '0';
  /* Field: SUM(Legacy: Dataset Counts: Geodata) */
  $handler->display->display_options['fields']['geodata']['id'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['geodata']['field'] = 'geodata';
  $handler->display->display_options['fields']['geodata']['group_type'] = 'sum';
  $handler->display->display_options['fields']['geodata']['empty'] = '0';
  /* Field: SUM(Global: Math expression) */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['group_type'] = 'sum';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['empty'] = '0';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[raw] + [tools] +  [geodata]';
  /* Field: MAX(Legacy: Dataset Counts: Latest Entry) */
  $handler->display->display_options['fields']['latest_update']['id'] = 'latest_update';
  $handler->display->display_options['fields']['latest_update']['table'] = 'dataset_counts';
  $handler->display->display_options['fields']['latest_update']['field'] = 'latest_update';
  $handler->display->display_options['fields']['latest_update']['group_type'] = 'max';
  /* Filter criterion: Legacy: Dataset Counts: Legacy: Dataset count subagency ID field */
  $handler->display->display_options['filters']['subagency_id']['id'] = 'subagency_id';
  $handler->display->display_options['filters']['subagency_id']['table'] = 'dataset_counts';
  $handler->display->display_options['filters']['subagency_id']['field'] = 'subagency_id';
  $handler->display->display_options['filters']['subagency_id']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'metric/federalagencyparticipation/summary';

  /* Display: Summary */
  $handler = $view->new_display('block', 'Summary', 'block_1');
  $handler->display->display_options['display_description'] = 'Summary';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['federal_agency_participation_summary'] = $view;

  $view = new view();
  $view->name = 'latest_datasets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'Latest Datasets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Datasets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Legacy: Results: Legacy: Results ID field */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'results';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Legacy: Results: Legacy: Results title field */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'results';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://explore.data.gov/datasets/external?id=http://www.data.gov/details/[id]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Legacy: Results: Legacy: Results dataset creation field */
  $handler->display->display_options['sorts']['dataset_creation']['id'] = 'dataset_creation';
  $handler->display->display_options['sorts']['dataset_creation']['table'] = 'results';
  $handler->display->display_options['sorts']['dataset_creation']['field'] = 'dataset_creation';
  $handler->display->display_options['sorts']['dataset_creation']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'latest-datasets';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['latest_datasets'] = $view;

  $view = new view();
  $view->name = 'newest_datasets_monthly';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'newest_datasets_monthly';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'newest-datasets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: COUNT(Legacy: Results: Legacy: Results ID field) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'results';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['element_class'] = 'newest-datasets-count';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['id']['element_wrapper_class'] = 'newest_datasets_weekly';
  $handler->display->display_options['fields']['id']['empty'] = '0';
  $handler->display->display_options['fields']['id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['id']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'new datasets/tools added <br />in the last 30 days (<a class="newest_datasets_monthly_link" href="/list/new/30">view list</a>) ';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'newest-datasets-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['filters']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['filters']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['operator'] = '>';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'newest-datasets-monthly';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['newest_datasets_monthly'] = $view;

  $view = new view();
  $view->name = 'newest_datasets_monthly_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'newest_datasets_monthly_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data.gov Newest Datasets/Tools in the Last 30 Days';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id_1' => 'id_1',
    'title' => 'title',
    'description' => 'description',
    'agency_abbreviation' => 'agency_abbreviation',
    'subagency_abbreviation' => 'subagency_abbreviation',
    'category_name' => 'category_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbreviation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_abbreviation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'category_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Legacy: Results: Legacy: Results ID field */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'results';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results title field */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'results';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name (click for metadata and to rate record) ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://explore.data.gov/datasets/external?id=http://www.data.gov/details/[id_1]';
  /* Field: Legacy: Results: Legacy: Results description field */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'results';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  /* Field: Legacy: Results: Legacy: Results agency_abbreviation field */
  $handler->display->display_options['fields']['agency_abbreviation']['id'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['agency_abbreviation']['field'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['label'] = 'Agency';
  /* Field: Legacy: Results: Legacy: Results subagency_abbreviation field */
  $handler->display->display_options['fields']['subagency_abbreviation']['id'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['subagency_abbreviation']['field'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['label'] = 'Subagency';
  /* Field: Legacy: Results: Legacy: Results category_name field */
  $handler->display->display_options['fields']['category_name']['id'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['table'] = 'results';
  $handler->display->display_options['fields']['category_name']['field'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['label'] = 'Category';
  /* Filter criterion: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['filters']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['filters']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['operator'] = '>';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'list/new/30';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['newest_datasets_monthly_list'] = $view;

  $view = new view();
  $view->name = 'newest_datasets_weekly';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'newest_datasets_weekly';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'newest-datasets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: COUNT(Legacy: Results: Legacy: Results ID field) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'results';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['element_class'] = 'newest-datasets-count';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['id']['element_wrapper_class'] = 'newest_datasets_weekly';
  $handler->display->display_options['fields']['id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['id']['empty'] = '0';
  $handler->display->display_options['fields']['id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['id']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'new datasets/tools added <br />in the last 7 days (<a class="newest_datasets_weekly_link" href="/list/new/7">view list</a>) ';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'newest-datasets-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Filter criterion: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['filters']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['filters']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['operator'] = '>';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['value'] = '-7 days';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'newest-datasets-weekly';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['newest_datasets_weekly'] = $view;

  $view = new view();
  $view->name = 'newest_datasets_weekly_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'results';
  $view->human_name = 'newest_datasets_weekly_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data.gov Newest Datasets/Tools in the Last 7 Days';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id_1' => 'id_1',
    'title' => 'title',
    'description' => 'description',
    'agency_abbreviation' => 'agency_abbreviation',
    'subagency_abbreviation' => 'subagency_abbreviation',
    'category_name' => 'category_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'agency_abbreviation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subagency_abbreviation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'category_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Legacy: Results: Legacy: Results ID field */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'results';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  /* Field: Legacy: Results: Legacy: Results title field */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'results';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name (click for metadata and to rate record) ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://explore.data.gov/datasets/external?id=http://www.data.gov/details/[id_1]';
  /* Field: Legacy: Results: Legacy: Results description field */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'results';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  /* Field: Legacy: Results: Legacy: Results agency_abbreviation field */
  $handler->display->display_options['fields']['agency_abbreviation']['id'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['agency_abbreviation']['field'] = 'agency_abbreviation';
  $handler->display->display_options['fields']['agency_abbreviation']['label'] = 'Agency';
  /* Field: Legacy: Results: Legacy: Results subagency_abbreviation field */
  $handler->display->display_options['fields']['subagency_abbreviation']['id'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['table'] = 'results';
  $handler->display->display_options['fields']['subagency_abbreviation']['field'] = 'subagency_abbreviation';
  $handler->display->display_options['fields']['subagency_abbreviation']['label'] = 'Subagency';
  /* Field: Legacy: Results: Legacy: Results category_name field */
  $handler->display->display_options['fields']['category_name']['id'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['table'] = 'results';
  $handler->display->display_options['fields']['category_name']['field'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['label'] = 'Category';
  /* Filter criterion: Legacy: Results: Legacy: Results dataset last updated field */
  $handler->display->display_options['filters']['dataset_last_updated']['id'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['table'] = 'results';
  $handler->display->display_options['filters']['dataset_last_updated']['field'] = 'dataset_last_updated';
  $handler->display->display_options['filters']['dataset_last_updated']['operator'] = '>';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['value'] = '-7 days';
  $handler->display->display_options['filters']['dataset_last_updated']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'list/new/7';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['newest_datasets_weekly_list'] = $view;

  return $export;
}
