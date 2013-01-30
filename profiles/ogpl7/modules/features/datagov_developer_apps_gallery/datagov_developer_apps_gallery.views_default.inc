<?php
/**
 * @file
 * datagov_developer_apps_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_developer_apps_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'applications_showcase';
  $view->description = 'Displays all applications in a gallery view.';
  $view->tag = 'datagov';
  $view->base_table = 'node';
  $view->human_name = 'Applications Showcase';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications Showcase';
  $handler->display->display_options['css_class'] = 'applications-showcase';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'applications_showcase',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="application-image">[field_application_image]</div>
<div class="application-description">
<h4>[title]</h4>
<p>[body]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'applications' => 'applications',
  );

  /* Display: Application Showcase Block */
  $handler = $view->new_display('block', 'Application Showcase Block', 'ogpl_applications_showcase_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Applications Showcase';
  $export['applications_showcase'] = $view;

  $view = new view();
  $view->name = 'community_applications';
  $view->description = 'Display applications in different showcases.';
  $view->tag = 'communities, datagov';
  $view->base_table = 'node';
  $view->human_name = 'Community Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications Showcase';
  $handler->display->display_options['css_class'] = 'applications-showcase';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There is nothing in this view';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'application_categories' => 'application_categories',
    'application_types' => 'application_types',
    'legacy_datacomm_userpoints_second' => 'legacy_datacomm_userpoints_second',
    'forums' => 0,
    'announcements_and_news' => 0,
    'datagovfusionmaps' => 0,
    'legacy_datacomm_application_categories' => 0,
    'legacy_datacomm_data_tools_categories' => 0,
    'legacy_datacomm_data_tools_vocabulary' => 0,
    'legacy_datacomm_userpoints_first' => 0,
    'legacy_datacomm_forum' => 0,
    'legacy_datacomm_resource_categories' => 0,
    'legacy_datacomm_tags' => 0,
    'legacy_datacomm_tools_identifier' => 0,
    'open_datasites_groupings' => 0,
  );
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="application-image">[field_application_image]</div>
<div class="application-description">
<h4>[title]</h4>
<p>[body]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['arguments']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['arguments']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_audience_gid']['summary_options']['items_per_page'] = '25';
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
    'applications' => 'applications',
    'data' => 'data',
  );

  /* Display: Mobile Applications Pane */
  $handler = $view->new_display('panel_pane', 'Mobile Applications Pane', 'ogpl_mobile_applications_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Android App Download URL */
  $handler->display->display_options['fields']['field_android_app_download_url']['id'] = 'field_android_app_download_url';
  $handler->display->display_options['fields']['field_android_app_download_url']['table'] = 'field_data_field_android_app_download_url';
  $handler->display->display_options['fields']['field_android_app_download_url']['field'] = 'field_android_app_download_url';
  $handler->display->display_options['fields']['field_android_app_download_url']['label'] = '';
  $handler->display->display_options['fields']['field_android_app_download_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_android_app_download_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_android_app_download_url']['alter']['text'] = '<li class="android"><a href="[field_android_app_download_url]" target="_blank"><img src="/sites/default/files/android-icon.png" title="Download Android App" /></a></li>';
  $handler->display->display_options['fields']['field_android_app_download_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_android_app_download_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_android_app_download_url']['type'] = 'link_title_plain';
  /* Field: Content: Blackberry App Download URL */
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['id'] = 'field_blackberry_app_download_ur';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['table'] = 'field_data_field_blackberry_app_download_ur';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['field'] = 'field_blackberry_app_download_ur';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['label'] = '';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['alter']['text'] = '<li class="blackberry"><a href="[field_blackberry_app_download_ur]" target="_blank"><img src="/sites/default/files/blackberry-icon.png" title="Download Blackberry App" /></a></li>';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['type'] = 'link_title_plain';
  /* Field: Content: iOS App Download URL */
  $handler->display->display_options['fields']['field_ios_app_download_url']['id'] = 'field_ios_app_download_url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['table'] = 'field_data_field_ios_app_download_url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['field'] = 'field_ios_app_download_url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['label'] = '';
  $handler->display->display_options['fields']['field_ios_app_download_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ios_app_download_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ios_app_download_url']['alter']['text'] = '<li class="ios"><a href="[field_ios_app_download_url]" target="_blank"><img src="/sites/default/files/apple-icon.png" title="Download iOS App" /></a></li>';
  $handler->display->display_options['fields']['field_ios_app_download_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ios_app_download_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['type'] = 'link_title_plain';
  /* Field: Content: Mobile Web URL */
  $handler->display->display_options['fields']['field_mobile_web_url']['id'] = 'field_mobile_web_url';
  $handler->display->display_options['fields']['field_mobile_web_url']['table'] = 'field_data_field_mobile_web_url';
  $handler->display->display_options['fields']['field_mobile_web_url']['field'] = 'field_mobile_web_url';
  $handler->display->display_options['fields']['field_mobile_web_url']['label'] = '';
  $handler->display->display_options['fields']['field_mobile_web_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_web_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_web_url']['alter']['text'] = '<li class="mobile-web"><a href="[field_mobile_web_url]" target="_blank"><img src="/sites/default/files/mobile-web-icon.png" title="Access Mobile Web" /></a></li>';
  $handler->display->display_options['fields']['field_mobile_web_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_web_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_mobile_web_url']['type'] = 'link_title_plain';
  /* Field: Content: Windows Phone App Download URL */
  $handler->display->display_options['fields']['field_windows_phone_app_download']['id'] = 'field_windows_phone_app_download';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['table'] = 'field_data_field_windows_phone_app_download';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['field'] = 'field_windows_phone_app_download';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['label'] = '';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_windows_phone_app_download']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_windows_phone_app_download']['alter']['text'] = '<li class="windows"><a href="[field_windows_phone_app_download]" target="_blank"><img src="/sites/default/files/microsoft-icon.png" title="Download Windows Phone App" /></a></li>';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_windows_phone_app_download']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapper">
  <div class="icons">
    <div class="application-image">[field_application_image]</div>
  </div>
  <div class="info">
    <h4>[title]</h4>
    <p>[body]</p>
    <ul class="download-buttons">
      [field_android_app_download_url]
      [field_blackberry_app_download_ur]
      [field_ios_app_download_url]
      [field_mobile_web_url]
      [field_windows_phone_app_download]
    </ul>
  </div>
  <div class="clearfloat"></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Mobile';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Web Applications Pane */
  $handler = $view->new_display('panel_pane', 'Web Applications Pane', 'ogpl_web_applications_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapper">
  <div class="application-image">[field_application_image]</div>
  <div class="application-description">
    <h4>[title]</h4>
    <p>[body]</p>
  </div>
  <div class="clearfloat"></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Apps';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'group_audience_gid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Groups audience (group_audience:gid)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'ogpl_applications_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Content: Application Type (field_application_type) */
  $handler->display->display_options['filters']['field_application_type_tid']['id'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['table'] = 'field_data_field_application_type';
  $handler->display->display_options['filters']['field_application_type_tid']['field'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['operator_id'] = 'field_application_type_tid_op';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['label'] = 'Application Type';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['operator'] = 'field_application_type_tid_op';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['identifier'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_application_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_application_type_tid']['vocabulary'] = 'application_types';
  $handler->display->display_options['path'] = 'applications';

  /* Display: Maps Applications Pane */
  $handler = $view->new_display('panel_pane', 'Maps Applications Pane', 'ogpl_maps_application_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Android App Download URL */
  $handler->display->display_options['fields']['field_android_app_download_url']['id'] = 'field_android_app_download_url';
  $handler->display->display_options['fields']['field_android_app_download_url']['table'] = 'field_data_field_android_app_download_url';
  $handler->display->display_options['fields']['field_android_app_download_url']['field'] = 'field_android_app_download_url';
  $handler->display->display_options['fields']['field_android_app_download_url']['label'] = '';
  $handler->display->display_options['fields']['field_android_app_download_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_android_app_download_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_android_app_download_url']['alter']['text'] = '<li class="android"><a href="[field_android_app_download_url]" target="_blank"><img src="/sites/default/files/android-icon.png" title="Download Android App" /></a></li>';
  $handler->display->display_options['fields']['field_android_app_download_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_android_app_download_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_android_app_download_url']['type'] = 'link_title_plain';
  /* Field: Content: Blackberry App Download URL */
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['id'] = 'field_blackberry_app_download_ur';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['table'] = 'field_data_field_blackberry_app_download_ur';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['field'] = 'field_blackberry_app_download_ur';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['label'] = '';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['alter']['text'] = '<li class="blackberry"><a href="[field_blackberry_app_download_ur]" target="_blank"><img src="/sites/default/files/blackberry-icon.png" title="Download Blackberry App" /></a></li>';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_blackberry_app_download_ur']['type'] = 'link_title_plain';
  /* Field: Content: iOS App Download URL */
  $handler->display->display_options['fields']['field_ios_app_download_url']['id'] = 'field_ios_app_download_url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['table'] = 'field_data_field_ios_app_download_url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['field'] = 'field_ios_app_download_url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['label'] = '';
  $handler->display->display_options['fields']['field_ios_app_download_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ios_app_download_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ios_app_download_url']['alter']['text'] = '<li class="ios"><a href="[field_ios_app_download_url]" target="_blank"><img src="/sites/default/files/apple-icon.png" title="Download iOS App" /></a></li>';
  $handler->display->display_options['fields']['field_ios_app_download_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ios_app_download_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ios_app_download_url']['type'] = 'link_title_plain';
  /* Field: Content: Mobile Web URL */
  $handler->display->display_options['fields']['field_mobile_web_url']['id'] = 'field_mobile_web_url';
  $handler->display->display_options['fields']['field_mobile_web_url']['table'] = 'field_data_field_mobile_web_url';
  $handler->display->display_options['fields']['field_mobile_web_url']['field'] = 'field_mobile_web_url';
  $handler->display->display_options['fields']['field_mobile_web_url']['label'] = '';
  $handler->display->display_options['fields']['field_mobile_web_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_web_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_web_url']['alter']['text'] = '<li class="mobile-web"><a href="[field_mobile_web_url]" target="_blank"><img src="/sites/default/files/mobile-web-icon.png" title="Access Mobile Web" /></a></li>';
  $handler->display->display_options['fields']['field_mobile_web_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_web_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_mobile_web_url']['type'] = 'link_title_plain';
  /* Field: Content: Windows Phone App Download URL */
  $handler->display->display_options['fields']['field_windows_phone_app_download']['id'] = 'field_windows_phone_app_download';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['table'] = 'field_data_field_windows_phone_app_download';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['field'] = 'field_windows_phone_app_download';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['label'] = '';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_windows_phone_app_download']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_windows_phone_app_download']['alter']['text'] = '<li class="windows"><a href="[field_windows_phone_app_download]" target="_blank"><img src="/sites/default/files/microsoft-icon.png" title="Download Windows Phone App" /></a></li>';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_windows_phone_app_download']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_windows_phone_app_download']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapper">
  <div class="icons">
    <div class="application-image">[field_application_image]</div>
  </div>
  <div class="info">
    <h4>[title]</h4>
    <p>[body]</p>
    <ul class="download-buttons">
      [field_android_app_download_url]
      [field_blackberry_app_download_ur]
      [field_ios_app_download_url]
      [field_mobile_web_url]
      [field_windows_phone_app_download]
    </ul>
  </div>
  <div class="clearfloat"></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Maps';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Not Tagged */
  $handler = $view->new_display('panel_pane', 'Not Tagged', 'ogpl_not_tagged_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Other Data Source';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'applications' => 'applications',
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: List View */
  $handler = $view->new_display('panel_pane', 'List View', 'ogpl_list_view_pane');
  $handler->display->display_options['display_description'] = 'List mobile and web apps';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_application_url' => 'field_application_url',
    'title' => 'title',
    'body' => 'title',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_application_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_application_url']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resources';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated On';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'applications' => 'applications',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Mobile';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_1']['value'] = 'Apps';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Federal Data Resources pane */
  $handler = $view->new_display('panel_pane', 'Federal Data Resources pane', 'ogpl_federal_data_resources_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Federal Data';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Non Federal Resources pane */
  $handler = $view->new_display('panel_pane', 'Non Federal Resources pane', 'ogpl_non_federal_resources_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Non-Federal Data';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: General References pane */
  $handler = $view->new_display('panel_pane', 'General References pane', 'ogpl_general_references_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'General Reference';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Education pane */
  $handler = $view->new_display('panel_pane', 'Education pane', 'ogpl_consumer_education_pane');
  $handler->display->display_options['display_description'] = 'Consumer community apps';
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Education';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display:  Energy & Environment pane */
  $handler = $view->new_display('panel_pane', ' Energy & Environment pane', 'ogpl_consumer_energy_environment_pane');
  $handler->display->display_options['display_description'] = 'consumer community';
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
    'applications' => 'applications',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Energy & Environment';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Finance pane */
  $handler = $view->new_display('panel_pane', 'Finance pane', 'ogpl_consumer_finance_pane');
  $handler->display->display_options['display_description'] = 'Consumer Finance pane';
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Finance';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Food & Nutrition  pane */
  $handler = $view->new_display('panel_pane', 'Food & Nutrition  pane', 'ogpl_consumer_food_nutrition_pane');
  $handler->display->display_options['display_description'] = 'Consumer Food & Nutrition ';
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Food & Nutrition';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Map List View */
  $handler = $view->new_display('panel_pane', 'Map List View', 'ogpl_map_list_view_pane');
  $handler->display->display_options['display_description'] = 'List Map apps';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_application_url' => 'field_application_url',
    'title' => 'title',
    'body' => 'title',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_application_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_application_url']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resources';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated On';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'applications' => 'applications',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_1']['value'] = 'Maps';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Health pane */
  $handler = $view->new_display('panel_pane', 'Health pane', 'ogpl_consumer_health_pane');
  $handler->display->display_options['display_description'] = 'Consumer Health pane';
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Health';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Safety pane */
  $handler = $view->new_display('panel_pane', 'Safety pane', 'ogpl_consumer_safety_pane');
  $handler->display->display_options['display_description'] = 'consumer safety view';
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Safety';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Telecommunications pane */
  $handler = $view->new_display('panel_pane', 'Telecommunications pane', 'ogpl_consumer_telecommunications_pane');
  $handler->display->display_options['display_description'] = 'consumer Telecommunications pane';
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Telecommunications';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Transportation pane */
  $handler = $view->new_display('panel_pane', 'Transportation pane', 'ogpl_consumer_transportation_pane');
  $handler->display->display_options['display_description'] = 'consumer Transportation ';
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
    'applications' => 'applications',
    'data' => 'data',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Transportation';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['community_applications'] = $view;

  return $export;
}
