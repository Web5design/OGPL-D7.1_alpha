<?php
/**
 * @file
 * datagov_challenge.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_challenge_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'community_challenges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Community Challenges';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Community Challenges';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no current challenges in this category.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: OG membership: OG membership from Content */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Challenge URL */
  $handler->display->display_options['fields']['field_challenge_url']['id'] = 'field_challenge_url';
  $handler->display->display_options['fields']['field_challenge_url']['table'] = 'field_data_field_challenge_url';
  $handler->display->display_options['fields']['field_challenge_url']['field'] = 'field_challenge_url';
  $handler->display->display_options['fields']['field_challenge_url']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_challenge_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_challenge_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_challenge_url']['delta_offset'] = '0';
  /* Field: Content: Challenge Thumbnail */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'image_style' => 'challenge_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapper">
  <div class="icon">
    [field_challenge_image]
  </div>
  <div class="info">
    <div class="title"><a href="[field_challenge_url]">[title]</a></div>
    <div class="description">[body]</div>
  </div>
  <div class="clearfloat"></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: OG membership:  */
  $handler->display->display_options['arguments']['group']['id'] = 'group';
  $handler->display->display_options['arguments']['group']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group']['field'] = 'group';
  $handler->display->display_options['arguments']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group']['summary_options']['items_per_page'] = '25';
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';

  /* Display: Community Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Community Challenges Pane', 'ogpl_community_challenges_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Community Challenges Page */
  $handler = $view->new_display('page', 'Community Challenges Page', 'ogpl_community_challenges_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Content */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: OG Membership: Custom Group ID filter */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['gid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['operator_id'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['label'] = 'Community';
  $handler->display->display_options['filters']['gid']['expose']['operator'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['identifier'] = 'gid';
  $handler->display->display_options['filters']['gid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  $handler->display->display_options['path'] = 'challenges';

  /* Display: Open Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Open Challenges Pane', 'ogpl_open_challenges_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Open Challenges';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
// find out which community we are on
$group_node = og_context();
$group_name = $group_node->label;

// diff comm need diff message.
switch ($group_name) {
  case "Education":
    $str = "There are no current education challenges, but please check back soon!";
    break;
  default:
    $str = "There are no current challenges in this category.";
}
echo $str;
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Challenge Winners Pane */
  $handler = $view->new_display('panel_pane', 'Challenge Winners Pane', 'ogpl_challenge_winners_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Challenge Winners';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Closed Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Closed Challenges Pane', 'ogpl_closed_challenges_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Closed Challenges';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['order'] = 'DESC';
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Closed challenges block */
  $handler = $view->new_display('block', 'Closed challenges block', 'ogpl_closed_challenges_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Closed challenges block';
  $handler->display->display_options['display_description'] = 'Closed challenges block';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['value'] = array(
    0 => '0',
  );

  /* Display: Recent Events Pane */
  $handler = $view->new_display('panel_pane', 'Recent Events Pane', 'ogpl_recent_events_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Events';
  $handler->display->display_options['display_description'] = 'Recent Events for Cities Community';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['order'] = 'DESC';
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Upcoming Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Upcoming Challenges Pane', 'ogpl_upcoming_challenges_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Challenges';
  $handler->display->display_options['display_description'] = 'Upcoming Challenges for Cities Community';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['sorts']['field_challenge_start_date_value2']['order'] = 'DESC';
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Stay Tuned for Winners Pane */
  $handler = $view->new_display('panel_pane', 'Stay Tuned for Winners Pane', 'ogpl_stay_tuned_for_winners_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Just Closed – Stay Tuned for Winners';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_winner_announced_value']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['community_challenges'] = $view;

  return $export;
}
