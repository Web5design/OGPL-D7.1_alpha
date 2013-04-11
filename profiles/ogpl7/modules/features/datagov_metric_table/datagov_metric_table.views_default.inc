<?php
/**
 * @file
 * datagov_metric_table.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_metric_table_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_metric_table';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Metric Federal Agency Participation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Summary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Abbr */
  $handler->display->display_options['fields']['field_metric_abbr']['id'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['table'] = 'field_data_field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['field'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Agency/Sub-Agency/Organization';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_metric_abbr])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Count Raw High */
  $handler->display->display_options['fields']['field_metric_count_raw_high']['id'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['table'] = 'field_data_field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['field'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw_high']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['text'] = '[field_metric_count_raw] ([field_metric_count_raw_high])';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools High */
  $handler->display->display_options['fields']['field_metric_count_tools_high']['id'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['table'] = 'field_data_field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['field'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools_high']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['text'] = '[field_metric_count_tools] ([field_metric_count_tools_high])';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_metric_count_raw] + [field_metric_count_tools] + [field_metric_count_geodata]';
  /* Field: Content: Metric Latest Entry */
  $handler->display->display_options['fields']['field_metric_latest_entry']['id'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['table'] = 'field_data_field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['field'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['label'] = 'Latest Entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_metric_latest_entry']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zend Agency ID */
  $handler->display->display_options['fields']['field_zend_agency_id']['id'] = 'field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['table'] = 'field_data_field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['field'] = 'field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zend_agency_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Zend Subagency ID */
  $handler->display->display_options['fields']['field_zend_subagency_id']['id'] = 'field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['table'] = 'field_data_field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['field'] = 'field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zend_subagency_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = '//comparison = parent_title + item_title
for ($i=1;$i<=2;$i++){
  $row = ${\'row\'.$i};

  $item_title = $row->title;
  if ($item_title == "Department/Agency Level") {
    $item_title = " "; // ensure this one sorted right next to agency title
  }

  $node = node_load(${\'row\'.$i}->nid);
  $parent = $node->field_metric_parent_organization;
  if($parent) {
    $parent = $parent[\'und\'][0][\'target_id\'];
    $parent = node_load($parent);
    $parent_title = $parent->title;
  }
  else {
    $parent_title = "";
  }

  ${\'comp\'.$i} = $parent_title . $item_title;
}
return strcmp($comp1, $comp2);';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'metric_organization' => 'metric_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$node = node_load($row->nid);
$total = $node->field_metric_count_raw[\'und\'][0][\'value\'] + $node->field_metric_count_tools[\'und\'][0][\'value\'] + $node->field_metric_count_geodata[\'und\'][0][\'value\'];
if(empty($total)) {
  return TRUE;
}';

  /* Display: Metric Table Federal Pane */
  $handler = $view->new_display('panel_pane', 'Metric Table Federal Pane', 'metric_table_federal_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departments/Agencies/Organizations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Abbr */
  $handler->display->display_options['fields']['field_metric_abbr']['id'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['table'] = 'field_data_field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['field'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Agency/Sub-Agency/Organization';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_metric_abbr])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Count Raw High */
  $handler->display->display_options['fields']['field_metric_count_raw_high']['id'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['table'] = 'field_data_field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['field'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['text'] = '[field_metric_count_raw] <span class="hival">([field_metric_count_raw_high])</span>';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools High */
  $handler->display->display_options['fields']['field_metric_count_tools_high']['id'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['table'] = 'field_data_field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['field'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['text'] = '[field_metric_count_tools] <span class="hival">([field_metric_count_tools_high])</span>';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Total';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '_placeholder_';
  /* Field: Content: Metric Latest Entry */
  $handler->display->display_options['fields']['field_metric_latest_entry']['id'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['table'] = 'field_data_field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['field'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['label'] = 'Latest Entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_metric_latest_entry']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zend Agency ID */
  $handler->display->display_options['fields']['field_zend_agency_id']['id'] = 'field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['table'] = 'field_data_field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['field'] = 'field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zend_agency_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Zend Subagency ID */
  $handler->display->display_options['fields']['field_zend_subagency_id']['id'] = 'field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['table'] = 'field_data_field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['field'] = 'field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zend_subagency_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Parent Organization */
  $handler->display->display_options['fields']['field_metric_parent_organization']['id'] = 'field_metric_parent_organization';
  $handler->display->display_options['fields']['field_metric_parent_organization']['table'] = 'field_data_field_metric_parent_organization';
  $handler->display->display_options['fields']['field_metric_parent_organization']['field'] = 'field_metric_parent_organization';
  $handler->display->display_options['fields']['field_metric_parent_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_parent_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: CKAN Unique ID */
  $handler->display->display_options['fields']['field_ckan_unique_id']['id'] = 'field_ckan_unique_id';
  $handler->display->display_options['fields']['field_ckan_unique_id']['table'] = 'field_data_field_ckan_unique_id';
  $handler->display->display_options['fields']['field_ckan_unique_id']['field'] = 'field_ckan_unique_id';
  $handler->display->display_options['fields']['field_ckan_unique_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'metric_organization' => 'metric_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Metric Sector (field_metric_sector) */
  $handler->display->display_options['filters']['field_metric_sector_value']['id'] = 'field_metric_sector_value';
  $handler->display->display_options['filters']['field_metric_sector_value']['table'] = 'field_data_field_metric_sector';
  $handler->display->display_options['filters']['field_metric_sector_value']['field'] = 'field_metric_sector_value';
  $handler->display->display_options['filters']['field_metric_sector_value']['value'] = array(
    'Federal' => 'Federal',
  );
  $handler->display->display_options['filters']['field_metric_sector_value']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$node = node_load($row->nid);
$total = $node->field_metric_count_raw[\'und\'][0][\'value\'] + $node->field_metric_count_tools[\'und\'][0][\'value\'] + $node->field_metric_count_geodata[\'und\'][0][\'value\'];
if(empty($total)) {
  return TRUE;
}';

  /* Display: Metric Table Other Pane */
  $handler = $view->new_display('panel_pane', 'Metric Table Other Pane', 'metric_table_other_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other Agencies';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Abbr */
  $handler->display->display_options['fields']['field_metric_abbr']['id'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['table'] = 'field_data_field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['field'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Agency/Sub-Agency/Organization';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_metric_abbr])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Count Raw High */
  $handler->display->display_options['fields']['field_metric_count_raw_high']['id'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['table'] = 'field_data_field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['field'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['text'] = '[field_metric_count_raw] <span class="hival">([field_metric_count_raw_high])</span>';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools High */
  $handler->display->display_options['fields']['field_metric_count_tools_high']['id'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['table'] = 'field_data_field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['field'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['text'] = '[field_metric_count_tools] <span class="hival">([field_metric_count_tools_high])</span>';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Total';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '_placeholder_';
  /* Field: Content: Metric Latest Entry */
  $handler->display->display_options['fields']['field_metric_latest_entry']['id'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['table'] = 'field_data_field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['field'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['label'] = 'Latest Entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_metric_latest_entry']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Zend Agency ID */
  $handler->display->display_options['fields']['field_zend_agency_id']['id'] = 'field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['table'] = 'field_data_field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['field'] = 'field_zend_agency_id';
  $handler->display->display_options['fields']['field_zend_agency_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zend_agency_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Zend Subagency ID */
  $handler->display->display_options['fields']['field_zend_subagency_id']['id'] = 'field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['table'] = 'field_data_field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['field'] = 'field_zend_subagency_id';
  $handler->display->display_options['fields']['field_zend_subagency_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zend_subagency_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Parent Organization */
  $handler->display->display_options['fields']['field_metric_parent_organization']['id'] = 'field_metric_parent_organization';
  $handler->display->display_options['fields']['field_metric_parent_organization']['table'] = 'field_data_field_metric_parent_organization';
  $handler->display->display_options['fields']['field_metric_parent_organization']['field'] = 'field_metric_parent_organization';
  $handler->display->display_options['fields']['field_metric_parent_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_parent_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: CKAN Unique ID */
  $handler->display->display_options['fields']['field_ckan_unique_id']['id'] = 'field_ckan_unique_id';
  $handler->display->display_options['fields']['field_ckan_unique_id']['table'] = 'field_data_field_ckan_unique_id';
  $handler->display->display_options['fields']['field_ckan_unique_id']['field'] = 'field_ckan_unique_id';
  $handler->display->display_options['fields']['field_ckan_unique_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'metric_organization' => 'metric_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Metric Sector (field_metric_sector) */
  $handler->display->display_options['filters']['field_metric_sector_value']['id'] = 'field_metric_sector_value';
  $handler->display->display_options['filters']['field_metric_sector_value']['table'] = 'field_data_field_metric_sector';
  $handler->display->display_options['filters']['field_metric_sector_value']['field'] = 'field_metric_sector_value';
  $handler->display->display_options['filters']['field_metric_sector_value']['value'] = array(
    'Other' => 'Other',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$node = node_load($row->nid);
$total = $node->field_metric_count_raw[\'und\'][0][\'value\'] + $node->field_metric_count_tools[\'und\'][0][\'value\'] + $node->field_metric_count_geodata[\'und\'][0][\'value\'];
if(empty($total)) {
  return TRUE;
}';

  /* Display: Metric Table Summary Pane */
  $handler = $view->new_display('panel_pane', 'Metric Table Summary Pane', 'metric_table_summary_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summary';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Departments/Agencies/Organizations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Total';
  /* Field: Content: Metric Count Raw High */
  $handler->display->display_options['fields']['field_metric_count_raw_high']['id'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['table'] = 'field_data_field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['field'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['text'] = '[field_metric_count_raw] <span class="hival">([field_metric_count_raw_high])</span>';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools High */
  $handler->display->display_options['fields']['field_metric_count_tools_high']['id'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['table'] = 'field_data_field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['field'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['text'] = '[field_metric_count_tools] <span class="hival">([field_metric_count_tools_high])</span>';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Total';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return number_format($view->result[0]->field_data_field_metric_count_raw_field_metric_count_raw_val + $view->result[0]->field_data_field_metric_count_tools_field_metric_count_tools + $view->result[0]->field_data_field_metric_count_geodata_field_metric_count_geo);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Metric Latest Entry */
  $handler->display->display_options['fields']['field_metric_latest_entry']['id'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['table'] = 'field_data_field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['field'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['group_type'] = 'max';
  $handler->display->display_options['fields']['field_metric_latest_entry']['label'] = 'Latest Entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_metric_latest_entry']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'metric_organization' => 'metric_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Parent Organization (field_metric_parent_organization) */
  $handler->display->display_options['filters']['field_metric_parent_organization_target_id']['id'] = 'field_metric_parent_organization_target_id';
  $handler->display->display_options['filters']['field_metric_parent_organization_target_id']['table'] = 'field_data_field_metric_parent_organization';
  $handler->display->display_options['filters']['field_metric_parent_organization_target_id']['field'] = 'field_metric_parent_organization_target_id';
  $handler->display->display_options['filters']['field_metric_parent_organization_target_id']['operator'] = 'empty';

  /* Display: Metric Table Agency Count Pane */
  $handler = $view->new_display('panel_pane', 'Metric Table Agency Count Pane', 'metric_table_agency_count_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agency Count';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Abbr */
  $handler->display->display_options['fields']['field_metric_abbr']['id'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['table'] = 'field_data_field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['field'] = 'field_metric_abbr';
  $handler->display->display_options['fields']['field_metric_abbr']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Agency/Sub-Agency/Organization';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_metric_abbr])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets (high-value)';
  $handler->display->display_options['fields']['field_metric_count_raw']['alter']['text'] = '[field_metric_count_raw] ([field_metric_count_raw_high])';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools (high-value)';
  $handler->display->display_options['fields']['field_metric_count_tools']['alter']['text'] = '[field_metric_count_tools] ([field_metric_count_tools_high])';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_metric_count_raw] + [field_metric_count_tools] + [field_metric_count_geodata]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'metric_organization' => 'metric_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$node = node_load($row->nid);
$total = $node->field_metric_count_raw[\'und\'][0][\'value\'] + $node->field_metric_count_tools[\'und\'][0][\'value\'] + $node->field_metric_count_geodata[\'und\'][0][\'value\'];
if(empty($total)) {
  return TRUE;
}';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'Department/Agency Level';

  /* Display: Metric Table XLS Export */
  $handler = $view->new_display('views_data_export', 'Metric Table XLS Export', 'metric_table_xls_export');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'NODE';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($row->nid);
$this_name = $node->title;
$this_abbr = isset($node->field_metric_abbr[\'und\'][0][\'safe_value\'])?$node->field_metric_abbr[\'und\'][0][\'safe_value\']:"";
if ($node->field_metric_parent_organization && $node->field_metric_parent_organization[\'und\'][0][\'target_id\']) {
  $parent_node = node_load($node->field_metric_parent_organization[\'und\'][0][\'target_id\']);
  $parent_name = $parent_node->title;
  $parent_abbr = isset($parent_node->field_metric_abbr[\'und\'][0][\'safe_value\'])?$parent_node->field_metric_abbr[\'und\'][0][\'safe_value\']:"";
}

$sector = $node->field_metric_sector[\'und\'][0][\'value\'];
$agency_name = isset($parent_name)?$parent_name:$this_name;
$agency_abbr = isset($parent_name)?$parent_abbr:$this_abbr;
$subagency_name = isset($parent_name)?$this_name:"";
$subagency_abbr = isset($parent_name)?$this_abbr:"";

$ret = new stdClass();
$ret->sector = $sector;
$ret->agency_name = $agency_name;
$ret->agency_abbr = $agency_abbr;
$ret->subagency_name = $subagency_name;
$ret->subagency_abbr = $subagency_abbr;

return serialize($ret);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Agency Name';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->agency_name;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Agecny Abbreviation';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->agency_abbr;';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'Subagency Name';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->subagency_name;';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'Subagency Abbreviation';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->subagency_abbr;';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Raw High */
  $handler->display->display_options['fields']['field_metric_count_raw_high']['id'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['table'] = 'field_data_field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['field'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['label'] = 'High-value Raw Datasets';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools High */
  $handler->display->display_options['fields']['field_metric_count_tools_high']['id'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['table'] = 'field_data_field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['field'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['label'] = 'High-value Tools';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_metric_count_raw] + [field_metric_count_tools] + [field_metric_count_geodata]';
  /* Field: Content: Metric Latest Entry */
  $handler->display->display_options['fields']['field_metric_latest_entry']['id'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['table'] = 'field_data_field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['field'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['label'] = 'Latest Entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_metric_latest_entry']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = '//comparison = parent_title + item_title
for ($i=1;$i<=2;$i++){
  $row = ${\'row\'.$i};
  $row = unserialize($row->php);

  if ($row->subagency_name == "Department/Agency Level") {
    $row->subagency_name = " "; // ensure this one sorted right next to agency title
  }

  ${\'comp\'.$i} = $row->sector . $row->agency_name . $row->subagency_name;
}
return strcmp($comp1, $comp2);';
  $handler->display->display_options['path'] = 'metric/federal-agency-participation.xls';

  /* Display: Metric Table CSV Export */
  $handler = $view->new_display('views_data_export', 'Metric Table CSV Export', 'metric_table_csv_export');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'NODE';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($row->nid);
$this_name = $node->title;
$this_abbr = isset($node->field_metric_abbr[\'und\'][0][\'safe_value\'])?$node->field_metric_abbr[\'und\'][0][\'safe_value\']:"";
if ($node->field_metric_parent_organization && $node->field_metric_parent_organization[\'und\'][0][\'target_id\']) {
  $parent_node = node_load($node->field_metric_parent_organization[\'und\'][0][\'target_id\']);
  $parent_name = $parent_node->title;
  $parent_abbr = isset($parent_node->field_metric_abbr[\'und\'][0][\'safe_value\'])?$parent_node->field_metric_abbr[\'und\'][0][\'safe_value\']:"";
}

$sector = $node->field_metric_sector[\'und\'][0][\'value\'];
$agency_name = isset($parent_name)?$parent_name:$this_name;
$agency_abbr = isset($parent_name)?$parent_abbr:$this_abbr;
$subagency_name = isset($parent_name)?$this_name:"";
$subagency_abbr = isset($parent_name)?$this_abbr:"";

$ret = new stdClass();
$ret->sector = $sector;
$ret->agency_name = $agency_name;
$ret->agency_abbr = $agency_abbr;
$ret->subagency_name = $subagency_name;
$ret->subagency_abbr = $subagency_abbr;

return serialize($ret);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Agency Name';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->agency_name;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Agecny Abbreviation';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->agency_abbr;';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'Subagency Name';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->subagency_name;';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'Subagency Abbreviation';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_value'] = '$php_info = unserialize($row->php);
return $php_info->subagency_abbr;';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Content: Metric Count Raw */
  $handler->display->display_options['fields']['field_metric_count_raw']['id'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['table'] = 'field_data_field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['field'] = 'field_metric_count_raw';
  $handler->display->display_options['fields']['field_metric_count_raw']['label'] = 'Raw Datasets';
  $handler->display->display_options['fields']['field_metric_count_raw']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Raw High */
  $handler->display->display_options['fields']['field_metric_count_raw_high']['id'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['table'] = 'field_data_field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['field'] = 'field_metric_count_raw_high';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['label'] = 'High-value Raw Datasets';
  $handler->display->display_options['fields']['field_metric_count_raw_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools */
  $handler->display->display_options['fields']['field_metric_count_tools']['id'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['table'] = 'field_data_field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['field'] = 'field_metric_count_tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['label'] = 'Tools';
  $handler->display->display_options['fields']['field_metric_count_tools']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Tools High */
  $handler->display->display_options['fields']['field_metric_count_tools_high']['id'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['table'] = 'field_data_field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['field'] = 'field_metric_count_tools_high';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['label'] = 'High-value Tools';
  $handler->display->display_options['fields']['field_metric_count_tools_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Metric Count Geodata */
  $handler->display->display_options['fields']['field_metric_count_geodata']['id'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['table'] = 'field_data_field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['field'] = 'field_metric_count_geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['label'] = 'Geodata';
  $handler->display->display_options['fields']['field_metric_count_geodata']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_metric_count_raw] + [field_metric_count_tools] + [field_metric_count_geodata]';
  /* Field: Content: Metric Latest Entry */
  $handler->display->display_options['fields']['field_metric_latest_entry']['id'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['table'] = 'field_data_field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['field'] = 'field_metric_latest_entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['label'] = 'Latest Entry';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_metric_latest_entry']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_metric_latest_entry']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = '//comparison = parent_title + item_title
for ($i=1;$i<=2;$i++){
  $row = ${\'row\'.$i};
  $row = unserialize($row->php);

  if ($row->subagency_name == "Department/Agency Level") {
    $row->subagency_name = " "; // ensure this one sorted right next to agency title
  }

  ${\'comp\'.$i} = $row->sector . $row->agency_name . $row->subagency_name;
}
return strcmp($comp1, $comp2);';
  $handler->display->display_options['path'] = 'metric/federal-agency-participation.csv';
  $export['new_metric_table'] = $view;

  return $export;
}
