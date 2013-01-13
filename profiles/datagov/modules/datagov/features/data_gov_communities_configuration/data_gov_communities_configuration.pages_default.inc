<?php
/**
 * @file
 * data_gov_communities_configuration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function data_gov_communities_configuration_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'communities';
  $page->task = 'page';
  $page->admin_title = 'Communities';
  $page->admin_description = 'This is a communities page';
  $page->path = 'communities';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Communities',
    'name' => 'main-menu',
    'weight' => '30',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_communities_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'communities';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Communities panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:1_3_2_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      '1st_left' => NULL,
      '2nd_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Feature Slider',
      'title' => '',
      'body' => '<?php
$block = block_load(\'views\', \'community_hub_slideshow-ogpl_community_hub_slideshow_block\');
$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
?>

<div class="features-wrapper full-width toggle">
    <div class="grid12-12 centered-div">
      <?php print $output ?>
        <div class="slider-text-container">
            <h1>Welcome to the Data.gov Communities page!</h1>
            <div class="description">
                Here you\'ll find resources on a wide range of topics and the opportunity to share your interests
                and passions with others. We\'re building new communities all the time so come back often and join
                the conversation!
            </div>
            <div class="read-more">
                <input type="button" class="read-more-button" value="read more" title="read more" />
            </div>
        </div>
        <div class="clearfloat"></div>
    </div>
    <div class="grid12-12 centered-div">
        <ul id="slider-controls"><!-- will be populated with view settings: jQuery Cycle --></ul>
    </div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Events Calendar',
      'title' => '',
      'body' => '<img src="sites/all/themes/datagov/images/calendar-selected.png" class="preloads" />
<img src="sites/all/themes/datagov/images/1event-off.png" class="preloads" />
<img src="sites/all/themes/datagov/images/1event-on.png" class="preloads" />
<img src="sites/all/themes/datagov/images/2events-off.png" class="preloads" />
<img src="sites/all/themes/datagov/images/2events-on.png" class="preloads" />
<img src="sites/all/themes/datagov/images/3events-off.png" class="preloads" />
<img src="sites/all/themes/datagov/images/3events-on.png" class="preloads" />
<img src="sites/all/themes/datagov/images/multievents-off.png" class="preloads" />
<img src="sites/all/themes/datagov/images/multievents-on.png" class="preloads" />
<div class="events-wrapper full-width toggle start-hidden">
    <div class="grid12-12 centered-div">
        <div class="events-calendar-view">
            <input type="hidden" id="events-calendar" /><!-- needed for glDatePicker -->
        </div>
        <div class="events-list-view"><!-- populated by ajax --></div>
        <div class="clearfloat"></div>
    </div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['center'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured/Events Block Toggler',
      'title' => '',
      'body' => '<div class="toggle-wrapper events-toggle" title="Events">
    <div class="toggle-control datebox-container">
        <div class="month"><?php print strtoupper(date(\'M\')) ?></div>
        <div class="date"><?php print date(\'j\') ?></div>
    </div>
    <div class="toggle-control toggle-label">Events</div>
</div>

<div class="toggle-wrapper start-hidden features-toggle" title="Featured">
    <div class="toggle-control icon-container">
        <img src="<?php echo base_path() . path_to_theme() . \'/images/toggle-featured.png\' ?>" />
    </div>
    <div class="toggle-control toggle-label">Featured</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['center'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'community_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['right'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['communities'] = $page;

  return $pages;

}
