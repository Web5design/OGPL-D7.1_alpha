<?php
/**
 * @file
 * datagov_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'Community Contributor',
      1 => 'Super User',
    ),
    'module' => 'devel',
  );

  // Exported permission: access google analytics reports.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: access mollom statistics.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(),
    'module' => 'mollom',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site map.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      0 => 'Super User',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: access statistics.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super User',
    ),
    'module' => 'statistics',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Content Administrator',
      4 => 'Super User',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'Community Contributor',
      1 => 'Super User',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer advanced forum.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: administer chart.
  $permissions['administer chart'] = array(
    'name' => 'administer chart',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'chart',
  );

  // Exported permission: administer consumers.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: administer custom breadcrumbs.
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: administer field collections.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: administer forums.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'forum',
  );

  // Exported permission: administer fusion.
  $permissions['administer fusion'] = array(
    'name' => 'administer fusion',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'fusion_apply_ui',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer google analytics reports.
  $permissions['administer google analytics reports'] = array(
    'name' => 'administer google analytics reports',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'google_analytics_api',
  );

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer messaging.
  $permissions['administer messaging'] = array(
    'name' => 'administer messaging',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'messaging',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer mollom.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(),
    'module' => 'mollom',
  );

  // Exported permission: administer nodequeue.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: administer notifications.
  $permissions['administer notifications'] = array(
    'name' => 'administer notifications',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'notifications',
  );

  // Exported permission: administer oauth.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: administer openlayers.
  $permissions['administer openlayers'] = array(
    'name' => 'administer openlayers',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'openlayers_ui',
  );

  // Exported permission: administer panel-nodes.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super User',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node data choice.
  $permissions['administer panelizer node data choice'] = array(
    'name' => 'administer panelizer node data choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node data content.
  $permissions['administer panelizer node data content'] = array(
    'name' => 'administer panelizer node data content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node data context.
  $permissions['administer panelizer node data context'] = array(
    'name' => 'administer panelizer node data context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node data layout.
  $permissions['administer panelizer node data layout'] = array(
    'name' => 'administer panelizer node data layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node data settings.
  $permissions['administer panelizer node data settings'] = array(
    'name' => 'administer panelizer node data settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node faq choice.
  $permissions['administer panelizer node faq choice'] = array(
    'name' => 'administer panelizer node faq choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node faq content.
  $permissions['administer panelizer node faq content'] = array(
    'name' => 'administer panelizer node faq content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node faq context.
  $permissions['administer panelizer node faq context'] = array(
    'name' => 'administer panelizer node faq context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node faq layout.
  $permissions['administer panelizer node faq layout'] = array(
    'name' => 'administer panelizer node faq layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node faq settings.
  $permissions['administer panelizer node faq settings'] = array(
    'name' => 'administer panelizer node faq settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node forum choice.
  $permissions['administer panelizer node forum choice'] = array(
    'name' => 'administer panelizer node forum choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node forum content.
  $permissions['administer panelizer node forum content'] = array(
    'name' => 'administer panelizer node forum content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node forum context.
  $permissions['administer panelizer node forum context'] = array(
    'name' => 'administer panelizer node forum context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node forum layout.
  $permissions['administer panelizer node forum layout'] = array(
    'name' => 'administer panelizer node forum layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node forum settings.
  $permissions['administer panelizer node forum settings'] = array(
    'name' => 'administer panelizer node forum settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page choice.
  $permissions['administer panelizer node page choice'] = array(
    'name' => 'administer panelizer node page choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page content.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page context.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page layout.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page settings.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tool choice.
  $permissions['administer panelizer node tool choice'] = array(
    'name' => 'administer panelizer node tool choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tool content.
  $permissions['administer panelizer node tool content'] = array(
    'name' => 'administer panelizer node tool content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tool context.
  $permissions['administer panelizer node tool context'] = array(
    'name' => 'administer panelizer node tool context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tool layout.
  $permissions['administer panelizer node tool layout'] = array(
    'name' => 'administer panelizer node tool layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node tool settings.
  $permissions['administer panelizer node tool settings'] = array(
    'name' => 'administer panelizer node tool settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node webform choice.
  $permissions['administer panelizer node webform choice'] = array(
    'name' => 'administer panelizer node webform choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node webform content.
  $permissions['administer panelizer node webform content'] = array(
    'name' => 'administer panelizer node webform content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node webform context.
  $permissions['administer panelizer node webform context'] = array(
    'name' => 'administer panelizer node webform context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node webform layout.
  $permissions['administer panelizer node webform layout'] = array(
    'name' => 'administer panelizer node webform layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node webform settings.
  $permissions['administer panelizer node webform settings'] = array(
    'name' => 'administer panelizer node webform settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer password policies.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer realname.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(),
    'module' => 'realname',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'search',
  );

  // Exported permission: administer services.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer statistics.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super User',
    ),
    'module' => 'statistics',
  );

  // Exported permission: administer string overrides.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(),
    'module' => 'stringoverrides',
  );

  // Exported permission: administer stylizer.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: administer the plus1 voting widget.
  $permissions['administer the plus1 voting widget'] = array(
    'name' => 'administer the plus1 voting widget',
    'roles' => array(),
    'module' => 'plus1',
  );

  // Exported permission: administer voting api.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench moderation.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: administer xmlsitemap.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: bypass mollom protection.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(),
    'module' => 'mollom',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'rules',
  );

  // Exported permission: bypass workbench moderation.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: create arcgis_map content.
  $permissions['create arcgis_map content'] = array(
    'name' => 'create arcgis_map content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create data content.
  $permissions['create data content'] = array(
    'name' => 'create data content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create document content.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: create forum content.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create fusion_map content.
  $permissions['create fusion_map content'] = array(
    'name' => 'create fusion_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create open_datasite_reference content.
  $permissions['create open_datasite_reference content'] = array(
    'name' => 'create open_datasite_reference content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel content.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel-nodes.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: create regional_planning content.
  $permissions['create regional_planning content'] = array(
    'name' => 'create regional_planning content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: create slide content.
  $permissions['create slide content'] = array(
    'name' => 'create slide content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: create subscriptions.
  $permissions['create subscriptions'] = array(
    'name' => 'create subscriptions',
    'roles' => array(
      0 => 'Super User',
      1 => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: create tool content.
  $permissions['create tool content'] = array(
    'name' => 'create tool content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any arcgis_map content.
  $permissions['delete any arcgis_map content'] = array(
    'name' => 'delete any arcgis_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any data content.
  $permissions['delete any data content'] = array(
    'name' => 'delete any data content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any document content.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any forum content.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any fusion_map content.
  $permissions['delete any fusion_map content'] = array(
    'name' => 'delete any fusion_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any open_datasite_reference content.
  $permissions['delete any open_datasite_reference content'] = array(
    'name' => 'delete any open_datasite_reference content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel content.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel-nodes.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete any regional_planning content.
  $permissions['delete any regional_planning content'] = array(
    'name' => 'delete any regional_planning content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any slide content.
  $permissions['delete any slide content'] = array(
    'name' => 'delete any slide content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tool content.
  $permissions['delete any tool content'] = array(
    'name' => 'delete any tool content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own arcgis_map content.
  $permissions['delete own arcgis_map content'] = array(
    'name' => 'delete own arcgis_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own data content.
  $permissions['delete own data content'] = array(
    'name' => 'delete own data content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own document content.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own forum content.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own fusion_map content.
  $permissions['delete own fusion_map content'] = array(
    'name' => 'delete own fusion_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own open_datasite_reference content.
  $permissions['delete own open_datasite_reference content'] = array(
    'name' => 'delete own open_datasite_reference content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel content.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel-nodes.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete own regional_planning content.
  $permissions['delete own regional_planning content'] = array(
    'name' => 'delete own regional_planning content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own slide content.
  $permissions['delete own slide content'] = array(
    'name' => 'delete own slide content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tool content.
  $permissions['delete own tool content'] = array(
    'name' => 'delete own tool content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 13.
  $permissions['delete terms in 13'] = array(
    'name' => 'delete terms in 13',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 14.
  $permissions['delete terms in 14'] = array(
    'name' => 'delete terms in 14',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 15.
  $permissions['delete terms in 15'] = array(
    'name' => 'delete terms in 15',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 16.
  $permissions['delete terms in 16'] = array(
    'name' => 'delete terms in 16',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 17.
  $permissions['delete terms in 17'] = array(
    'name' => 'delete terms in 17',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 18.
  $permissions['delete terms in 18'] = array(
    'name' => 'delete terms in 18',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 19.
  $permissions['delete terms in 19'] = array(
    'name' => 'delete terms in 19',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 20.
  $permissions['delete terms in 20'] = array(
    'name' => 'delete terms in 20',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 21.
  $permissions['delete terms in 21'] = array(
    'name' => 'delete terms in 21',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 22.
  $permissions['delete terms in 22'] = array(
    'name' => 'delete terms in 22',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 23.
  $permissions['delete terms in 23'] = array(
    'name' => 'delete terms in 23',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 24.
  $permissions['delete terms in 24'] = array(
    'name' => 'delete terms in 24',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 25.
  $permissions['delete terms in 25'] = array(
    'name' => 'delete terms in 25',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 26.
  $permissions['delete terms in 26'] = array(
    'name' => 'delete terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 27.
  $permissions['delete terms in 27'] = array(
    'name' => 'delete terms in 27',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit advanced skin settings.
  $permissions['edit advanced skin settings'] = array(
    'name' => 'edit advanced skin settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'fusion_apply_ui',
  );

  // Exported permission: edit any arcgis_map content.
  $permissions['edit any arcgis_map content'] = array(
    'name' => 'edit any arcgis_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any data content.
  $permissions['edit any data content'] = array(
    'name' => 'edit any data content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any document content.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any forum content.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any fusion_map content.
  $permissions['edit any fusion_map content'] = array(
    'name' => 'edit any fusion_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any open_datasite_reference content.
  $permissions['edit any open_datasite_reference content'] = array(
    'name' => 'edit any open_datasite_reference content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel content.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel-nodes.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit any regional_planning content.
  $permissions['edit any regional_planning content'] = array(
    'name' => 'edit any regional_planning content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any slide content.
  $permissions['edit any slide content'] = array(
    'name' => 'edit any slide content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tool content.
  $permissions['edit any tool content'] = array(
    'name' => 'edit any tool content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own arcgis_map content.
  $permissions['edit own arcgis_map content'] = array(
    'name' => 'edit own arcgis_map content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own data content.
  $permissions['edit own data content'] = array(
    'name' => 'edit own data content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own document content.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own forum content.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own fusion_map content.
  $permissions['edit own fusion_map content'] = array(
    'name' => 'edit own fusion_map content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own open_datasite_reference content.
  $permissions['edit own open_datasite_reference content'] = array(
    'name' => 'edit own open_datasite_reference content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel content.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel-nodes.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own regional_planning content.
  $permissions['edit own regional_planning content'] = array(
    'name' => 'edit own regional_planning content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slide content.
  $permissions['edit own slide content'] = array(
    'name' => 'edit own slide content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tool content.
  $permissions['edit own tool content'] = array(
    'name' => 'edit own tool content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit skin settings.
  $permissions['edit skin settings'] = array(
    'name' => 'edit skin settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'fusion_apply_ui',
  );

  // Exported permission: edit terms in 13.
  $permissions['edit terms in 13'] = array(
    'name' => 'edit terms in 13',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 14.
  $permissions['edit terms in 14'] = array(
    'name' => 'edit terms in 14',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 15.
  $permissions['edit terms in 15'] = array(
    'name' => 'edit terms in 15',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 16.
  $permissions['edit terms in 16'] = array(
    'name' => 'edit terms in 16',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 17.
  $permissions['edit terms in 17'] = array(
    'name' => 'edit terms in 17',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 18.
  $permissions['edit terms in 18'] = array(
    'name' => 'edit terms in 18',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 19.
  $permissions['edit terms in 19'] = array(
    'name' => 'edit terms in 19',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 20.
  $permissions['edit terms in 20'] = array(
    'name' => 'edit terms in 20',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 21.
  $permissions['edit terms in 21'] = array(
    'name' => 'edit terms in 21',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 22.
  $permissions['edit terms in 22'] = array(
    'name' => 'edit terms in 22',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 23.
  $permissions['edit terms in 23'] = array(
    'name' => 'edit terms in 23',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 24.
  $permissions['edit terms in 24'] = array(
    'name' => 'edit terms in 24',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 25.
  $permissions['edit terms in 25'] = array(
    'name' => 'edit terms in 25',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 26.
  $permissions['edit terms in 26'] = array(
    'name' => 'edit terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 27.
  $permissions['edit terms in 27'] = array(
    'name' => 'edit terms in 27',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'devel',
  );

  // Exported permission: export nodes.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node_export',
  );

  // Exported permission: export own nodes.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node_export',
  );

  // Exported permission: force password change.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: geocoder_service_all_handlers.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_exif.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_google.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_gpx.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_json.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_kml.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_latlon.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_mapquest_nominatim.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_wkt.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_yahoo.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_yandex.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: get a system variable.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: get any binary files.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: get own binary files.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: maintain own subscriptions.
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      0 => 'Super User',
      1 => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: manage all subscriptions.
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'notifications',
  );

  // Exported permission: manage own subscriptions.
  $permissions['manage own subscriptions'] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'notifications_account',
  );

  // Exported permission: manipulate all queues.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: migration information.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'migrate_ui',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: oauth authorize any consumers.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: oauth register any consumers.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: perform unlimited index queries.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: plus1 vote on comment.
  $permissions['plus1 vote on comment'] = array(
    'name' => 'plus1 vote on comment',
    'roles' => array(),
    'module' => 'plus1',
  );

  // Exported permission: plus1 vote on node.
  $permissions['plus1 vote on node'] = array(
    'name' => 'plus1 vote on node',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'plus1',
  );

  // Exported permission: plus1 vote on taxonomy_term.
  $permissions['plus1 vote on taxonomy_term'] = array(
    'name' => 'plus1 vote on taxonomy_term',
    'roles' => array(),
    'module' => 'plus1',
  );

  // Exported permission: rate content.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      0 => 'Super User',
      1 => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: save file information.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'Super User',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: set a system variable.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'services',
  );

  // Exported permission: skip notifications.
  $permissions['skip notifications'] = array(
    'name' => 'skip notifications',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'notifications',
  );

  // Exported permission: subscribe to content.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      0 => 'Super User',
      1 => 'authenticated user',
    ),
    'module' => 'notifications_content',
  );

  // Exported permission: subscribe to content type.
  $permissions['subscribe to content type'] = array(
    'name' => 'subscribe to content type',
    'roles' => array(
      0 => 'Super User',
      1 => 'authenticated user',
    ),
    'module' => 'notifications_content',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'devel',
  );

  // Exported permission: unblock expired accounts.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use PHP to import nodes.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node_export',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'Super User',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use bulk exporter.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: use php in custom breadcrumbs.
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: use text format code.
  $permissions['use text format code'] = array(
    'name' => 'use text format code',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Super User',
      1 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Content Administrator',
      4 => 'Super User',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'filter',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Moderator',
      2 => 'Content Administrator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view forum statistics.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      0 => 'Super User',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: view last edited notice.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      0 => 'Super User',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view post access counter.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super User',
    ),
    'module' => 'statistics',
  );

  return $permissions;
}
