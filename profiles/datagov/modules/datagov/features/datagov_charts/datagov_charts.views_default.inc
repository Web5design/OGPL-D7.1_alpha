<?php
/**
 * @file
 * datagov_charts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_charts_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'metrics_daily_visitor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_daily_visitor';
  $view->human_name = 'Metrics Daily Visitor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data.gov Daily Visitor Statistics';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['title'] = 'Data.gov Daily Visitor Statistics';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['title'] = 'Number of Visitors';
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_date' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'data_point_date';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_date' => 'data_point_date',
    'data_point_value' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'data_point_date';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<?php
 $view = views_get_current_view();
 print ($view->storage[\'output\']);
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Metrics Daily Visitor: Date */
  $handler->display->display_options['fields']['data_point_date']['id'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['table'] = 'v_stats_daily_visitor';
  $handler->display->display_options['fields']['data_point_date']['field'] = 'data_point_date';
  /* Field: Metrics Daily Visitor: Value */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_daily_visitor';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Number of Visitors';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/dailyvisitorstatistics';
  $export['metrics_daily_visitor'] = $view;

  $view = new view;
  $view->name = 'metrics_download_by_category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_download_by_category';
  $view->human_name = 'Metrics Download by Category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data Downloads by Data Category';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'These numbers represent the number of times a user has clicked on the "XML" or "CSV" (for example) links in the Raw Data Catalogs to download datasets and user downloads of tools in the Tool Catalog available in these categories. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div style=\'text-align:right\'>
<?php
 $view = views_get_current_view();
 print ($view->storage[\'output\']);
?>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Metrics Stats: Data Category */
  $handler->display->display_options['fields']['data_point_key_1']['id'] = 'data_point_key_1';
  $handler->display->display_options['fields']['data_point_key_1']['table'] = 'v_stats_download_by_category';
  $handler->display->display_options['fields']['data_point_key_1']['field'] = 'data_point_key_1';
  /* Field: Metrics Stats: Date */
  $handler->display->display_options['fields']['data_point_date']['id'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['table'] = 'v_stats_download_by_category';
  $handler->display->display_options['fields']['data_point_date']['field'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['data_point_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['data_point_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_date']['hide_alter_empty'] = 1;
  /* Field: Metrics Stats: Value */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_download_by_category';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Total Downloads';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/monthlyredirectbydatacategory';
  $export['metrics_download_by_category'] = $view;

  $view = new view;
  $view->name = 'metrics_geodata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_geodata';
  $view->human_name = 'Metrics GeoData';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['chart_type'] = 'pie';
  $handler->display->display_options['style_options']['format']['title'] = 'GeoData by Category';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'numberofdataset' => 'numberofdataset',
    'category_name' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'category_name';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'numberofdataset' => 'numberofdataset',
    'category_name' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'category_name';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Results Stats: Category */
  $handler->display->display_options['fields']['category_name']['id'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['table'] = 'v_stats_geodata';
  $handler->display->display_options['fields']['category_name']['field'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['label'] = '';
  $handler->display->display_options['fields']['category_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['category_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['category_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['category_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['category_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['category_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['category_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['category_name']['hide_alter_empty'] = 1;
  /* Field: Results Stats: Value */
  $handler->display->display_options['fields']['numberofdataset']['id'] = 'numberofdataset';
  $handler->display->display_options['fields']['numberofdataset']['table'] = 'v_stats_geodata';
  $handler->display->display_options['fields']['numberofdataset']['field'] = 'numberofdataset';
  $handler->display->display_options['fields']['numberofdataset']['label'] = '';
  $handler->display->display_options['fields']['numberofdataset']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['external'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['numberofdataset']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['numberofdataset']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['html'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['numberofdataset']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['numberofdataset']['hide_empty'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['empty_zero'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['hide_alter_empty'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'category_name' => 'category_name',
    'numberofdataset' => 'numberofdataset',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'category_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'numberofdataset' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['metrics_geodata'] = $view;

  $view = new view;
  $view->name = 'metrics_monthly_download';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_metrics';
  $view->human_name = 'Metrics Monthly Download';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data.gov Monthly Download Trends';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['title'] = '';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['title'] = 'Number of Downloads';
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'calculated_year_month' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'calculated_year_month';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 1;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'calculated_year_month' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'calculated_year_month';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'These numbers represent the number of times a user has clicked on the "XML" or "CSV" (for example) links in the Raw Data Catalogs to download datasets and user downloads of tools in the Tool Catalog available in these categories. 
<br><br>
<?php
  $view = views_get_current_view();
  print ($view->storage[\'output\']);
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Metrics Stats: Year Month */
  $handler->display->display_options['fields']['calculated_year_month']['id'] = 'calculated_year_month';
  $handler->display->display_options['fields']['calculated_year_month']['table'] = 'v_stats_metrics';
  $handler->display->display_options['fields']['calculated_year_month']['field'] = 'calculated_year_month';
  $handler->display->display_options['fields']['calculated_year_month']['label'] = '';
  $handler->display->display_options['fields']['calculated_year_month']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['external'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['html'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['hide_empty'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['empty_zero'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['hide_alter_empty'] = 1;
  /* Field: SUM(Metrics Stats: Value) */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_metrics';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Number of Downloads';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;
  /* Sort criterion: Metrics Stats: Year Month */
  $handler->display->display_options['sorts']['calculated_year_month']['id'] = 'calculated_year_month';
  $handler->display->display_options['sorts']['calculated_year_month']['table'] = 'v_stats_metrics';
  $handler->display->display_options['sorts']['calculated_year_month']['field'] = 'calculated_year_month';
  $handler->display->display_options['sorts']['calculated_year_month']['order'] = 'DESC';
  /* Filter criterion: Metrics Stats: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'v_stats_metrics';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value']['value'] = '4';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/monthlyredirecttrend';
  $export['metrics_monthly_download'] = $view;

  $view = new view;
  $view->name = 'metrics_monthly_page_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_metrics';
  $view->human_name = 'Metrics Monthly Page Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data.gov Page Views in the Previous 12 Months';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['title'] = '';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['title'] = 'Number of Hits';
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'calculated_year_month' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'calculated_year_month';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 1;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'calculated_year_month' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'calculated_year_month';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<?php
  $view = views_get_current_view();
  print ($view->storage[\'output\']);
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '* Page view is a new metric adopted in May 2011 with the use of Google Analytics. ';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Metrics Stats: Year Month */
  $handler->display->display_options['fields']['calculated_year_month']['id'] = 'calculated_year_month';
  $handler->display->display_options['fields']['calculated_year_month']['table'] = 'v_stats_metrics';
  $handler->display->display_options['fields']['calculated_year_month']['field'] = 'calculated_year_month';
  $handler->display->display_options['fields']['calculated_year_month']['label'] = '';
  $handler->display->display_options['fields']['calculated_year_month']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['external'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['html'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['hide_empty'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['empty_zero'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['hide_alter_empty'] = 1;
  /* Field: SUM(Metrics Stats: Value) */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_metrics';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Number of Hits';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;
  /* Sort criterion: Metrics Stats: Year Month */
  $handler->display->display_options['sorts']['calculated_year_month']['id'] = 'calculated_year_month';
  $handler->display->display_options['sorts']['calculated_year_month']['table'] = 'v_stats_metrics';
  $handler->display->display_options['sorts']['calculated_year_month']['field'] = 'calculated_year_month';
  $handler->display->display_options['sorts']['calculated_year_month']['order'] = 'DESC';
  /* Filter criterion: Metrics Stats: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'v_stats_metrics';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value']['value'] = '14';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/monthlyviewstrend';
  $export['metrics_monthly_page_views'] = $view;

  $view = new view;
  $view->name = 'metrics_monthly_visitor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_metrics';
  $view->human_name = 'Metrics Monthly Visitor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data.gov Monthly Visitor Statistics';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['title'] = '';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['title'] = 'Number of Visitors';
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'calculated_year_month' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'calculated_year_month';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 1;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'calculated_year_month' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'calculated_year_month';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<?php
  $view = views_get_current_view();
  print ($view->storage[\'output\']);
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '* Visitor numbers from May 2011 differ substantially due to the switch to Google Analytics for visitor statistics and the use of a different definition of “visitor.” ';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Metrics Stats: Year Month */
  $handler->display->display_options['fields']['calculated_year_month']['id'] = 'calculated_year_month';
  $handler->display->display_options['fields']['calculated_year_month']['table'] = 'v_stats_metrics';
  $handler->display->display_options['fields']['calculated_year_month']['field'] = 'calculated_year_month';
  $handler->display->display_options['fields']['calculated_year_month']['label'] = '';
  $handler->display->display_options['fields']['calculated_year_month']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['external'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['alter']['html'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['calculated_year_month']['hide_empty'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['empty_zero'] = 0;
  $handler->display->display_options['fields']['calculated_year_month']['hide_alter_empty'] = 1;
  /* Field: SUM(Metrics Stats: Value) */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_metrics';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Number of Visitors';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;
  /* Sort criterion: Metrics Stats: Year Month */
  $handler->display->display_options['sorts']['calculated_year_month']['id'] = 'calculated_year_month';
  $handler->display->display_options['sorts']['calculated_year_month']['table'] = 'v_stats_metrics';
  $handler->display->display_options['sorts']['calculated_year_month']['field'] = 'calculated_year_month';
  $handler->display->display_options['sorts']['calculated_year_month']['order'] = 'DESC';
  /* Filter criterion: Metrics Stats: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'v_stats_metrics';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/monthvisitorstats';
  $export['metrics_monthly_visitor'] = $view;

  $view = new view;
  $view->name = 'metrics_rawtool';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_rawtool';
  $view->human_name = 'Metrics RawTool';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['chart_type'] = 'pie';
  $handler->display->display_options['style_options']['format']['title'] = 'Raw Data & Tools by Category';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'numberofdataset' => 'numberofdataset',
    'category_name' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'category_name';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'numberofdataset' => 'numberofdataset',
    'category_name' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'category_name';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Results Stats: Category */
  $handler->display->display_options['fields']['category_name']['id'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['table'] = 'v_stats_rawtool';
  $handler->display->display_options['fields']['category_name']['field'] = 'category_name';
  $handler->display->display_options['fields']['category_name']['label'] = '';
  $handler->display->display_options['fields']['category_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['category_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['category_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['category_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['category_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['category_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['category_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['category_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['category_name']['hide_alter_empty'] = 1;
  /* Field: Results Stats: Value */
  $handler->display->display_options['fields']['numberofdataset']['id'] = 'numberofdataset';
  $handler->display->display_options['fields']['numberofdataset']['table'] = 'v_stats_rawtool';
  $handler->display->display_options['fields']['numberofdataset']['field'] = 'numberofdataset';
  $handler->display->display_options['fields']['numberofdataset']['label'] = '';
  $handler->display->display_options['fields']['numberofdataset']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['external'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['numberofdataset']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['numberofdataset']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['alter']['html'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['numberofdataset']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['numberofdataset']['hide_empty'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['empty_zero'] = 0;
  $handler->display->display_options['fields']['numberofdataset']['hide_alter_empty'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'category_name' => 'category_name',
    'numberofdataset' => 'numberofdataset',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'category_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'numberofdataset' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['metrics_rawtool'] = $view;

  $view = new view;
  $view->name = 'metrics_suggested_dataset';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_site_suggestion';
  $view->human_name = 'Metrics Suggested Dataset';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['chart_type'] = 'pie';
  $handler->display->display_options['style_options']['format']['title'] = 'Agency Determinations of Site Suggestions';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_key_1' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'data_point_key_1';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_key_1' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'data_point_key_1';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Metrics Stats: Category */
  $handler->display->display_options['fields']['data_point_key_1']['id'] = 'data_point_key_1';
  $handler->display->display_options['fields']['data_point_key_1']['table'] = 'v_stats_site_suggestion';
  $handler->display->display_options['fields']['data_point_key_1']['field'] = 'data_point_key_1';
  $handler->display->display_options['fields']['data_point_key_1']['label'] = '';
  $handler->display->display_options['fields']['data_point_key_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_point_key_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_key_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_key_1']['hide_alter_empty'] = 1;
  /* Field: Metrics Stats: Datasets */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_site_suggestion';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['label'] = '';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-suggested-dataset';
  $export['metrics_suggested_dataset'] = $view;

  $view = new view;
  $view->name = 'metrics_top_country';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_top_country';
  $view->human_name = 'Metrics Top Country';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top 10 Visiting Countries';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['title'] = 'Top 10 Visiting Countries';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['title'] = 'Number of Visits';
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_key_1' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'data_point_key_1';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_key_1' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'data_point_key_1';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Metrics Stats: Country */
  $handler->display->display_options['fields']['data_point_key_1']['id'] = 'data_point_key_1';
  $handler->display->display_options['fields']['data_point_key_1']['table'] = 'v_stats_top_country';
  $handler->display->display_options['fields']['data_point_key_1']['field'] = 'data_point_key_1';
  /* Field: Metrics Stats: Value */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_top_country';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;
  /* Field: Metrics Stats: Date */
  $handler->display->display_options['fields']['data_point_date']['id'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['table'] = 'v_stats_top_country';
  $handler->display->display_options['fields']['data_point_date']['field'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['label'] = '';
  $handler->display->display_options['fields']['data_point_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['data_point_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_point_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_date']['hide_alter_empty'] = 1;
  /* Sort criterion: Metrics Stats: Value */
  $handler->display->display_options['sorts']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['sorts']['data_point_value']['table'] = 'v_stats_top_country';
  $handler->display->display_options['sorts']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['sorts']['data_point_value']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/countrystatistics';
  $export['metrics_top_country'] = $view;

  $view = new view;
  $view->name = 'metrics_top_state';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'v_stats_top_state';
  $view->human_name = 'Metrics Top State';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top 10 Visiting States';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['title'] = 'Top 10 Visiting States';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['title'] = 'Number of Visits';
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_key_1' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'data_point_key_1';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['pie']['dataset_data'] = array(
    'data_point_value' => 'data_point_value',
    'data_point_key_1' => 0,
  );
  $handler->display->display_options['style_options']['pie']['selected_slice'] = 'data_point_value';
  $handler->display->display_options['style_options']['pie']['donut_hole'] = '0';
  $handler->display->display_options['style_options']['pie']['data_labels'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Metrics Stats: State */
  $handler->display->display_options['fields']['data_point_key_1']['id'] = 'data_point_key_1';
  $handler->display->display_options['fields']['data_point_key_1']['table'] = 'v_stats_top_state';
  $handler->display->display_options['fields']['data_point_key_1']['field'] = 'data_point_key_1';
  /* Field: Metrics Stats: Value */
  $handler->display->display_options['fields']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['table'] = 'v_stats_top_state';
  $handler->display->display_options['fields']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['fields']['data_point_value']['label'] = 'Number of Visits';
  $handler->display->display_options['fields']['data_point_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['data_point_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_value']['hide_alter_empty'] = 1;
  /* Field: Metrics Stats: Date */
  $handler->display->display_options['fields']['data_point_date']['id'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['table'] = 'v_stats_top_state';
  $handler->display->display_options['fields']['data_point_date']['field'] = 'data_point_date';
  $handler->display->display_options['fields']['data_point_date']['label'] = '';
  $handler->display->display_options['fields']['data_point_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['data_point_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data_point_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data_point_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data_point_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data_point_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['data_point_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data_point_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data_point_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data_point_date']['hide_alter_empty'] = 1;
  /* Sort criterion: Metrics Stats: Value */
  $handler->display->display_options['sorts']['data_point_value']['id'] = 'data_point_value';
  $handler->display->display_options['sorts']['data_point_value']['table'] = 'v_stats_top_state';
  $handler->display->display_options['sorts']['data_point_value']['field'] = 'data_point_value';
  $handler->display->display_options['sorts']['data_point_value']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'metric/visitorstats/statestatistics';
  $export['metrics_top_state'] = $view;

  return $export;
}
