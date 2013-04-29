<?php


/*
 * Implements hook_install_tasks_alter()
 */
function ogpl7_install_tasks_alter(&$tasks, $install_state) {

  // substitute our own finished step
  $tasks['install_finished'] = array(
    'display_name' => st('Installation has been finished successfully'),
    'display' => 1,
    'function' => 'ogpl7_install_finished',
  );
    
}

function ogpl7_install_finished(&$install_state) {
  drupal_set_title(st('@drupal installation complete', array('@drupal' => drupal_install_profile_distribution_name())), PASS_THROUGH);
  $messages = drupal_set_message();
  $output = '<p>' . st('Congratulations, you installed @drupal!', array('@drupal' => drupal_install_profile_distribution_name())) . '</p>';
  $output .= '<p>' . (isset($messages['error']) ? st('Review the messages above before enabling <a href="@url">the features of your new site</a>.', array('@url' => url('admin/structure/features'))) : st('<a href="@url">Visit your new site and enable features</a>.', array('@url' => url('admin/structure/features')))) . '</p>';   

  // Flush all caches to ensure that any full bootstraps during the installer
  // do not leave stale cached data, and that any content types or other items
  // registered by the install profile are registered correctly.
  drupal_flush_all_caches();

  // Remember the profile which was used.
  variable_set('install_profile', drupal_get_profile());

  // Install profiles are always loaded last
  db_update('system')
    ->fields(array('weight' => 1000))
    ->condition('type', 'module')
    ->condition('name', drupal_get_profile())
    ->execute();

  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);

  // Run cron to populate update status tables (if available) so that users
  // will be warned if they've installed an out of date Drupal version.
  // Will also trigger indexing of profile-supplied content or feeds.
  drupal_cron_run();
  
  // fix Demo Community menu link parent 
  $item = array(
    'menu_name' => 'main-menu',
    'module' => 'system',
    'link_path' => 'communities',
    'router_path' => 'communities',
    'link_title' => 'Communities',
  );
  $plid = menu_link_save($item);


  // get mlid of "Demo Community" menu link
    $result = db_select('menu_links', 'm')
    ->fields('m')
    ->condition('link_title', 'Demo-Community','=')
    ->condition('module', 'menu','=')
    ->execute()
    ->fetchAssoc();
  $mlid = $result['mlid'];
  $link_path = $result['link_path'];

  // set plid of "Demo Community" menu link
  $item = array(
    'plid' => $plid,
    'mlid' => $mlid,
    'menu_name' => 'main-menu',
    'module' => 'menu',
    'link_path' => $link_path,
    'link_title' => 'Demo Community',
  );
  menu_link_save($item);

  // insert "demo community group" og menu
  og_menu_update_menu('menu-demo-community-menu', 1);

  // insert "Data" menu link in Demo Community og menu
  $item = array(
    'plid' => $plid,
    'mlid' => $mlid,
    'menu_name' => 'main-menu',
    'module' => 'menu',
    'link_path' => $link_path,
    'link_title' => 'Demo Community',
  );
  menu_link_save($item);

  // insert demo community group og_menu
  og_menu_update_menu('menu-demo-community-menu', 1);

  // insert "Data" menu link in demo community group og menu
  $item = array(
    'menu_name' => 'menu-demo-community-menu',
    'module' => 'menu',
    'link_path' => 'node/9',
    'link_title' => 'Data',
  );
  menu_link_save($item);

  // insert "Open ID" menu link in user menu
  $item = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'link_title' => 'Open ID Login',
  );
  menu_link_save($item);

  // add #openid-login to user/login link path
  db_update('menu_links')
    ->fields(array('options' => 'a:3:{s:5:"alter";b:1;s:8:"fragment";s:12:"openid-login";s:10:"attributes";a:1:{s:5:"title";s:0:"";}}'))
    ->condition('link_title', 'Open ID Login')
    ->execute();

  // add "saml_login" link "menu_per_role" role
  $result = db_select('menu_links', 'm')
    ->fields('m')
    ->condition('link_title', 'SAML Login','=')
    ->execute()
    ->fetchAssoc();
  $mlid = $result['mlid'];

  db_insert('menu_per_role')
    ->fields(array('mlid' => $mlid, 'rids' => '1', 'hrids' => ''))
    ->execute();
  
  menu_cache_clear_all();

  // rebuild permissions
  node_access_rebuild();

  menu_cache_clear_all();

  // rebuild permissions
  node_access_rebuild();

  return $output;

}
