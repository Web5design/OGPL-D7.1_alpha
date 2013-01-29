<?php
/**
 * @file
 * datagov_about.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datagov_about_content_defaults() {
  $content = array();

  $content['about-page'] = (object) array(
    'exported_path' => 'about',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/about-page',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '19',
      'identifier' => 'main-menu:node-name/about-page',
    ),
    'title' => 'About',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1357510186',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'about-page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris sed urna eu felis accumsan aliquam. Proin at purus ante. Ut eu fermentum nibh. Integer egestas porta vehicula. Ut adipiscing tristique quam et interdum. Maecenas nibh sapien, tristique lobortis egestas quis, porta sed mi. Duis et lectus ut est semper posuere. In pellentesque accumsan mollis. Sed sit amet risus quis orci dignissim porttitor.

Etiam eleifend congue dui eget tincidunt. Curabitur vestibulum odio et lectus elementum ullamcorper. Fusce suscipit, lectus id fermentum commodo, tortor diam convallis neque, ac sodales mi lorem eu est. Nullam imperdiet orci vitae arcu varius vitae luctus mauris varius. Sed tempor nulla eu orci rutrum ac vestibulum risus varius. Donec varius nisi eros. Cras iaculis felis at odio eleifend non accumsan ante vulputate. Sed in hendrerit mauris. Suspendisse adipiscing, odio viverra malesuada mollis, nibh risus luctus magna, feugiat feugiat mauris turpis id ligula. Sed rutrum, lorem at sollicitudin lacinia, massa dolor elementum lacus, ac tincidunt arcu dolor sed lorem. Maecenas accumsan quam ac sem dapibus sed molestie sem hendrerit. Etiam ultricies mollis tellus, non fermentum risus semper in. Phasellus tortor ante, vestibulum sit amet pharetra eleifend, tincidunt non risus. Aliquam eu eros eu augue scelerisque elementum. In scelerisque ultrices tortor, id ultrices nisi porttitor consequat. Praesent et odio odio, id iaculis mauris.

Proin vel dapibus tortor. Duis vitae condimentum diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Phasellus arcu purus, pharetra sit amet suscipit sagittis, dictum et augue. Mauris gravida malesuada eros ac gravida. Suspendisse porttitor volutpat odio sed dignissim. Quisque tortor lorem, imperdiet consectetur mollis a, accumsan a turpis. Fusce vitae massa sapien. Fusce pellentesque dictum odio non tincidunt. Vestibulum odio leo, porta vitae laoreet eu, euismod a est. Proin in velit tortor, at laoreet enim. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.

Duis non nisi diam. Proin et rhoncus ipsum. Aliquam vulputate fermentum enim, a placerat mauris pulvinar eu. Donec in enim justo. Donec sit amet turpis quam. In hac habitasse platea dictumst. Duis orci justo, dignissim blandit pulvinar ut, viverra vitae eros. Praesent mollis dolor vitae quam gravida eget aliquam orci fringilla. Cras lectus quam, scelerisque blandit varius nec, adipiscing non magna. Vivamus pulvinar quam id nulla laoreet bibendum. Morbi velit justo, commodo bibendum hendrerit vel, ullamcorper vitae nulla. Vestibulum rutrum dignissim lorem quis hendrerit. Aliquam ac venenatis elit. Nunc adipiscing semper magna nec consectetur. Nam a lacus lectus, eu ullamcorper tellus.

Donec aliquam, ante id sagittis tincidunt, nisi ligula ornare erat, et egestas ante metus in urna. In sagittis sodales eros id rutrum. Donec sapien nisl, aliquet eget eleifend in, placerat vel erat. Suspendisse at vehicula sapien. Cras eu turpis at massa malesuada mollis. Donec tincidunt quam id tortor ullamcorper commodo. Maecenas blandit ultricies felis id cursus. Aliquam erat volutpat. Quisque felis mi, adipiscing sit amet mollis sed, consectetur ut metus. Cras eu sem enim. In hac habitasse platea dictumst. Nam bibendum vehicula metus, vitae lacinia quam venenatis sed.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris sed urna eu felis accumsan aliquam. Proin at purus ante. Ut eu fermentum nibh. Integer egestas porta vehicula. Ut adipiscing tristique quam et interdum. Maecenas nibh sapien, tristique lobortis egestas quis, porta sed mi. Duis et lectus ut est semper posuere. In pellentesque accumsan mollis. Sed sit amet risus quis orci dignissim porttitor.</p>
<p>Etiam eleifend congue dui eget tincidunt. Curabitur vestibulum odio et lectus elementum ullamcorper. Fusce suscipit, lectus id fermentum commodo, tortor diam convallis neque, ac sodales mi lorem eu est. Nullam imperdiet orci vitae arcu varius vitae luctus mauris varius. Sed tempor nulla eu orci rutrum ac vestibulum risus varius. Donec varius nisi eros. Cras iaculis felis at odio eleifend non accumsan ante vulputate. Sed in hendrerit mauris. Suspendisse adipiscing, odio viverra malesuada mollis, nibh risus luctus magna, feugiat feugiat mauris turpis id ligula. Sed rutrum, lorem at sollicitudin lacinia, massa dolor elementum lacus, ac tincidunt arcu dolor sed lorem. Maecenas accumsan quam ac sem dapibus sed molestie sem hendrerit. Etiam ultricies mollis tellus, non fermentum risus semper in. Phasellus tortor ante, vestibulum sit amet pharetra eleifend, tincidunt non risus. Aliquam eu eros eu augue scelerisque elementum. In scelerisque ultrices tortor, id ultrices nisi porttitor consequat. Praesent et odio odio, id iaculis mauris.</p>
<p>Proin vel dapibus tortor. Duis vitae condimentum diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Phasellus arcu purus, pharetra sit amet suscipit sagittis, dictum et augue. Mauris gravida malesuada eros ac gravida. Suspendisse porttitor volutpat odio sed dignissim. Quisque tortor lorem, imperdiet consectetur mollis a, accumsan a turpis. Fusce vitae massa sapien. Fusce pellentesque dictum odio non tincidunt. Vestibulum odio leo, porta vitae laoreet eu, euismod a est. Proin in velit tortor, at laoreet enim. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>
<p>Duis non nisi diam. Proin et rhoncus ipsum. Aliquam vulputate fermentum enim, a placerat mauris pulvinar eu. Donec in enim justo. Donec sit amet turpis quam. In hac habitasse platea dictumst. Duis orci justo, dignissim blandit pulvinar ut, viverra vitae eros. Praesent mollis dolor vitae quam gravida eget aliquam orci fringilla. Cras lectus quam, scelerisque blandit varius nec, adipiscing non magna. Vivamus pulvinar quam id nulla laoreet bibendum. Morbi velit justo, commodo bibendum hendrerit vel, ullamcorper vitae nulla. Vestibulum rutrum dignissim lorem quis hendrerit. Aliquam ac venenatis elit. Nunc adipiscing semper magna nec consectetur. Nam a lacus lectus, eu ullamcorper tellus.</p>
<p>Donec aliquam, ante id sagittis tincidunt, nisi ligula ornare erat, et egestas ante metus in urna. In sagittis sodales eros id rutrum. Donec sapien nisl, aliquet eget eleifend in, placerat vel erat. Suspendisse at vehicula sapien. Cras eu turpis at massa malesuada mollis. Donec tincidunt quam id tortor ullamcorper commodo. Maecenas blandit ultricies felis id cursus. Aliquam erat volutpat. Quisque felis mi, adipiscing sit amet mollis sed, consectetur ut metus. Cras eu sem enim. In hac habitasse platea dictumst. Nam bibendum vehicula metus, vitae lacinia quam venenatis sed.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
