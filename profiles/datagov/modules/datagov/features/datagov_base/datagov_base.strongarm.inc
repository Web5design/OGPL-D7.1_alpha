<?php
/**
 * @file
 * datagov_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_508_compliant';
  $strongarm->value = 1;
  $export['addthis_508_compliant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_type';
  $strongarm->value = 'addthis_basic_button';
  $export['addthis_block_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_bookmark_url';
  $strongarm->value = 'http://www.addthis.com/bookmark.php?v=250';
  $export['addthis_bookmark_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_co_brand';
  $strongarm->value = 'Data.gov';
  $export['addthis_co_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_enabled_services';
  $strongarm->value = array(
    'blogger' => 'blogger',
    'digg' => 'digg',
    'email' => 'email',
    'facebook' => 'facebook',
    'favorites' => 'favorites',
    'gmail' => 'gmail',
    'google_plusone' => 'google_plusone',
    'linkedin' => 'linkedin',
    'print' => 'print',
    'reddit' => 'reddit',
    'stumbleupon' => 'stumbleupon',
    'tumblr' => 'tumblr',
    'twitter' => 'twitter',
    '100zakladok' => 0,
    '2tag' => 0,
    '2linkme' => 0,
    '7live7' => 0,
    'a97abi' => 0,
    'addressbar' => 0,
    'adfty' => 0,
    'adifni' => 0,
    'amazonwishlist' => 0,
    'amenme' => 0,
    'aim' => 0,
    'aolmail' => 0,
    'armenix' => 0,
    'arto' => 0,
    'aviary' => 0,
    'azadegi' => 0,
    'baang' => 0,
    'baidu' => 0,
    'beat100' => 0,
    'bebo' => 0,
    'bentio' => 0,
    'biggerpockets' => 0,
    'bitly' => 0,
    'bizsugar' => 0,
    'bland' => 0,
    'blinklist' => 0,
    'blip' => 0,
    'bloggy' => 0,
    'blogkeen' => 0,
    'blogmarks' => 0,
    'blogtrottr' => 0,
    'blurpalicious' => 0,
    'bolt' => 0,
    'bobrdobr' => 0,
    'bonzobox' => 0,
    'socialbookmarkingnet' => 0,
    'bookmarkycz' => 0,
    'bookmerkende' => 0,
    'bordom' => 0,
    'box' => 0,
    'brainify' => 0,
    'bryderi' => 0,
    'buddymarks' => 0,
    'buffer' => 0,
    'buzzzy' => 0,
    'camyoo' => 0,
    'cardthis' => 0,
    'care2' => 0,
    'chimein' => 0,
    'chiq' => 0,
    'cirip' => 0,
    'citeulike' => 0,
    'classicalplace' => 0,
    'cleanprint' => 0,
    'clipdo' => 0,
    'cndig' => 0,
    'colivia' => 0,
    'technerd' => 0,
    'connotea' => 0,
    'cootopia' => 0,
    'cosmiq' => 0,
    'curateus' => 0,
    'delicious' => 0,
    'designbump' => 0,
    'digthiswebhost' => 0,
    'digaculturanet' => 0,
    'diggita' => 0,
    'digo' => 0,
    'digzign' => 0,
    'diigo' => 0,
    'dipdive' => 0,
    'domelhor' => 0,
    'dosti' => 0,
    'dotnetkicks' => 0,
    'dotnetshoutout' => 0,
    'douban' => 0,
    'draugiem' => 0,
    'drimio' => 0,
    'dropjack' => 0,
    'dzone' => 0,
    'edelight' => 0,
    'efactor' => 0,
    'ekudos' => 0,
    'elefantapl' => 0,
    'mailto' => 0,
    'embarkons' => 0,
    'eucliquei' => 0,
    'evernote' => 0,
    'extraplay' => 0,
    'ezyspot' => 0,
    'stylishhome' => 0,
    'fabulously40' => 0,
    'facebook_like' => 0,
    'informazione' => 0,
    'fark' => 0,
    'farkinda' => 0,
    'fashiolista' => 0,
    'fashionburner' => 0,
    'favable' => 0,
    'faves' => 0,
    'favlogde' => 0,
    'favoritende' => 0,
    'favoritus' => 0,
    'flaker' => 0,
    'flosspro' => 0,
    'folkd' => 0,
    'formspring' => 0,
    'thefreedictionary' => 0,
    'fresqui' => 0,
    'friendfeed' => 0,
    'funp' => 0,
    'fwisp' => 0,
    'gabbr' => 0,
    'gamekicker' => 0,
    'givealink' => 0,
    'globalgrind' => 0,
    'govn' => 0,
    'godudu' => 0,
    'goodnoows' => 0,
    'google' => 0,
    'googletranslate' => 0,
    'google_plusone_share' => 0,
    'greaterdebater' => 0,
    'grono' => 0,
    'habergentr' => 0,
    'hackernews' => 0,
    'hadashhot' => 0,
    'hatena' => 0,
    'gluvsnap' => 0,
    'hedgehogs' => 0,
    'hellotxt' => 0,
    'historious' => 0,
    'hotbookmark' => 0,
    'hotklix' => 0,
    'hotmail' => 0,
    'w3validator' => 0,
    'hyves' => 0,
    'identica' => 0,
    'igoogle' => 0,
    'ihavegot' => 0,
    'index4' => 0,
    'indexor' => 0,
    'instapaper' => 0,
    'investorlinks' => 0,
    'iorbix' => 0,
    'isociety' => 0,
    'iwiw' => 0,
    'jamespot' => 0,
    'jappy' => 0,
    'joliprint' => 0,
    'jolly' => 0,
    'jumptags' => 0,
    'kaboodle' => 0,
    'kaevur' => 0,
    'kaixin' => 0,
    'ketnooi' => 0,
    'kindleit' => 0,
    'kipup' => 0,
    'kledy' => 0,
    'kommenting' => 0,
    'latafaneracat' => 0,
    'librerio' => 0,
    'linkninja' => 0,
    'linkagogo' => 0,
    'linksgutter' => 0,
    'linkshares' => 0,
    'linkuj' => 0,
    'livejournal' => 0,
    'lockerblogger' => 0,
    'logger24' => 0,
    'mymailru' => 0,
    'markme' => 0,
    'mashbord' => 0,
    'meinvz' => 0,
    'mekusharim' => 0,
    'memonic' => 0,
    'memori' => 0,
    'mendeley' => 0,
    'meneame' => 0,
    'live' => 0,
    'mindbodygreen' => 0,
    'misterwong' => 0,
    'misterwong_de' => 0,
    'moemesto' => 0,
    'moikrug' => 0,
    'mototagz' => 0,
    'mrcnetworkit' => 0,
    'multiply' => 0,
    'myaol' => 0,
    'myhayastan' => 0,
    'mylinkvault' => 0,
    'myspace' => 0,
    'n4g' => 0,
    'naszaklasa' => 0,
    'netlog' => 0,
    'netvibes' => 0,
    'netvouz' => 0,
    'newsmeback' => 0,
    'newstrust' => 0,
    'newsvine' => 0,
    'nujij' => 0,
    'odnoklassniki_ru' => 0,
    'oknotizie' => 0,
    'oneview' => 0,
    'orkut' => 0,
    'dashboard' => 0,
    'oyyla' => 0,
    'packg' => 0,
    'pafnetde' => 0,
    'pdfonline' => 0,
    'pdfmyurl' => 0,
    'phonefavs' => 0,
    'pingfm' => 0,
    'pinterest' => 0,
    'planypus' => 0,
    'plaxo' => 0,
    'plurk' => 0,
    'pochvalcz' => 0,
    'politicnote' => 0,
    'posteezy' => 0,
    'posterous' => 0,
    'pratiba' => 0,
    'printfriendly' => 0,
    'pusha' => 0,
    'qrfin' => 0,
    'qrsrc' => 0,
    'quantcast' => 0,
    'qzone' => 0,
    'readitlater' => 0,
    'rediff' => 0,
    'redkum' => 0,
    'researchgate' => 0,
    'ridefix' => 0,
    'scoopat' => 0,
    'scoopit' => 0,
    'sekoman' => 0,
    'select2gether' => 0,
    'sharer' => 0,
    'shaveh' => 0,
    'shetoldme' => 0,
    'sinaweibo' => 0,
    'skyrock' => 0,
    'smiru' => 0,
    'sodahead' => 0,
    'sonico' => 0,
    'speedtile' => 0,
    'sphinn' => 0,
    'spinsnap' => 0,
    'spokentoyou' => 0,
    'yiid' => 0,
    'springpad' => 0,
    'squidoo' => 0,
    'startaid' => 0,
    'startlap' => 0,
    'storyfollower' => 0,
    'studivz' => 0,
    'stuffpit' => 0,
    'stumpedia' => 0,
    'surfingbird' => 0,
    'svejo' => 0,
    'symbaloo' => 0,
    'taaza' => 0,
    'tagza' => 0,
    'tarpipe' => 0,
    'thewebblend' => 0,
    'thinkfinity' => 0,
    'thisnext' => 0,
    'throwpile' => 0,
    'tipd' => 0,
    'toly' => 0,
    'topsitelernet' => 0,
    'transferr' => 0,
    'tuenti' => 0,
    'tulinq' => 0,
    'tusul' => 0,
    'tvinx' => 0,
    'tweetmeme' => 0,
    'twitthis' => 0,
    'typepad' => 0,
    'upnews' => 0,
    'urlaubswerkde' => 0,
    'urlcapt' => 0,
    'viadeo' => 0,
    'virb' => 0,
    'visitezmonsite' => 0,
    'vk' => 0,
    'vkrugudruzei' => 0,
    'voxopolis' => 0,
    'vybralisme' => 0,
    'vyoom' => 0,
    'webnews' => 0,
    'webshare' => 0,
    'domaintoolswhois' => 0,
    'windows' => 0,
    'windycitizen' => 0,
    'wirefan' => 0,
    'wordpress' => 0,
    'worio' => 0,
    'raiseyourvoice' => 0,
    'wykop' => 0,
    'xanga' => 0,
    'xing' => 0,
    'yahoobkm' => 0,
    'yahoomail' => 0,
    'yammer' => 0,
    'yardbarker' => 0,
    'yemle' => 0,
    'yigg' => 0,
    'yoolink' => 0,
    'yorumcuyum' => 0,
    'youblr' => 0,
    'youbookmarks' => 0,
    'youmob' => 0,
    'yuuby' => 0,
    'zakladoknet' => 0,
    'ziczac' => 0,
    'zingme' => 0,
  );
  $export['addthis_enabled_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_standard_css_enabled';
  $strongarm->value = 1;
  $export['addthis_standard_css_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_header_background_color';
  $strongarm->value = '#FFFFFF';
  $export['addthis_ui_header_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_header_color';
  $strongarm->value = '#0a3163';
  $export['addthis_ui_header_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_widget_js_url';
  $strongarm->value = 'http://s7.addthis.com/js/250/addthis_widget.js';
  $export['addthis_widget_js_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-tabs' => 'blockify-tabs',
    'blockify-messages' => 'blockify-messages',
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-page-title' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = '0';
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '1';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/Applications/MAMP/tmp/php';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'menu-footer-menu',
    1 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'menu-footer-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'default' => 0,
    'choice' => 1,
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_community_pattern';
  $strongarm->value = '';
  $export['pathauto_node_community_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_panel_pattern';
  $strongarm->value = '';
  $export['pathauto_node_panel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slide_pattern';
  $strongarm->value = '';
  $export['pathauto_node_slide_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_release_labels_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_release_labels_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/5';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Site-Install';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_arrow_1';
  $strongarm->value = 1;
  $export['superfish_arrow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_bgf_1';
  $strongarm->value = 1;
  $export['superfish_bgf_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_delay_1';
  $strongarm->value = '800';
  $export['superfish_delay_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_depth_1';
  $strongarm->value = '-1';
  $export['superfish_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dfirstlast_1';
  $strongarm->value = 0;
  $export['superfish_dfirstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dzebra_1';
  $strongarm->value = 0;
  $export['superfish_dzebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_firstlast_1';
  $strongarm->value = 1;
  $export['superfish_firstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hid_1';
  $strongarm->value = 1;
  $export['superfish_hid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hlclass_1';
  $strongarm->value = '';
  $export['superfish_hlclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldescription_1';
  $strongarm->value = 0;
  $export['superfish_hldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldexclude_1';
  $strongarm->value = '';
  $export['superfish_hldexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldmenus_1';
  $strongarm->value = '';
  $export['superfish_hldmenus_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcounter_1';
  $strongarm->value = 1;
  $export['superfish_itemcounter_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcount_1';
  $strongarm->value = 1;
  $export['superfish_itemcount_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemdepth_1';
  $strongarm->value = 1;
  $export['superfish_itemdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_liclass_1';
  $strongarm->value = '';
  $export['superfish_liclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_maxwidth_1';
  $strongarm->value = '27';
  $export['superfish_maxwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcdepth_1';
  $strongarm->value = '1';
  $export['superfish_mcdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcexclude_1';
  $strongarm->value = '';
  $export['superfish_mcexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mclevels_1';
  $strongarm->value = '1';
  $export['superfish_mclevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_minwidth_1';
  $strongarm->value = '16';
  $export['superfish_minwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_multicolumn_1';
  $strongarm->value = 0;
  $export['superfish_multicolumn_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_name_1';
  $strongarm->value = 'Main Menu - Superfish';
  $export['superfish_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathclass_1';
  $strongarm->value = 'active-trail';
  $export['superfish_pathclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathcss_1';
  $strongarm->value = '';
  $export['superfish_pathcss_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathlevels_1';
  $strongarm->value = '1';
  $export['superfish_pathlevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 1;
  $export['superfish_shadow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slide_1';
  $strongarm->value = 'none';
  $export['superfish_slide_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_speed_1';
  $strongarm->value = 'fast';
  $export['superfish_speed_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_spp_1';
  $strongarm->value = 0;
  $export['superfish_spp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'none';
  $export['superfish_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_1';
  $strongarm->value = 1;
  $export['superfish_supersubs_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchual_1';
  $strongarm->value = '';
  $export['superfish_touchual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchua_1';
  $strongarm->value = 1;
  $export['superfish_touchua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touch_1';
  $strongarm->value = 1;
  $export['superfish_touch_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_type_1';
  $strongarm->value = 'horizontal';
  $export['superfish_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_ulclass_1';
  $strongarm->value = '';
  $export['superfish_ulclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphlt_1';
  $strongarm->value = '';
  $export['superfish_wraphlt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphl_1';
  $strongarm->value = '';
  $export['superfish_wraphl_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapmul_1';
  $strongarm->value = '';
  $export['superfish_wrapmul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapul_1';
  $strongarm->value = '';
  $export['superfish_wrapul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_zebra_1';
  $strongarm->value = 1;
  $export['superfish_zebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_datagov_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'sidebar_first_width' => '3',
    'sidebar_second_width' => '3',
    'theme_grid' => 'grid12-1015',
    'fluid_grid_width' => 'fluid-100',
    'responsive_enabled' => '0',
    'responsive_columns' => '12',
    'responsive_ie_shim' => 1,
    'sidebar_layout' => 'sidebars-split',
    'sidebar_enabled' => 1,
    'sidebar_grid_width' => '1015',
    'sidebar_gutter' => '20',
    'sidebar_mquery' => 'only screen and (min-width:1200px)',
    'theme_font' => 'none',
    'theme_font_size' => 'font-size-13',
    'breadcrumb_display' => 0,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'sidebar_tablet_landscape_layout' => 'sidebars-split',
    'sidebar_tablet_landscape_enabled' => 0,
    'sidebar_tablet_landscape_grid_width' => '960',
    'sidebar_tablet_landscape_gutter' => '20',
    'sidebar_tablet_landscape_mquery' => 'only screen and (max-device-width: 1024px) and (orientation:landscape), only screen and (min-width:960px) and (max-width:1199px) and (min-device-width: 1100px)',
    'sidebar_tablet_portrait_layout' => 'sidebars-split',
    'sidebar_tablet_portrait_enabled' => 0,
    'sidebar_tablet_portrait_grid_width' => '768',
    'sidebar_tablet_portrait_gutter' => '20',
    'sidebar_tablet_portrait_mquery' => 'only screen and (max-device-width: 1024px) and (orientation:portrait), only screen and (min-width:768px) and (max-width:959px) and (min-device-width: 1100px)',
    'sidebar_phone_landscape_layout' => 'sidebars-drop',
    'sidebar_phone_landscape_enabled' => 0,
    'sidebar_phone_landscape_grid_width' => 'mobile',
    'sidebar_phone_landscape_gutter' => '10',
    'sidebar_phone_landscape_mquery' => 'only screen and (max-width:759px)',
    'general_settings__active_tab' => 'edit-theme-grid-config',
    'scheme' => 'default',
    'palette' => array(
      'base' => '#fdfdfd',
      'link' => '#284a77',
      'text' => '#666666',
      'headernolink' => '#284a78',
      'headerwithlink' => '#284a79',
      'sfishbgtop' => '#294b78',
      'sfishbgbottom' => '#0b3064',
      'sfishbgactive' => '#4782b1',
      'sfishitem' => '#fefefe',
      'sfishbg2' => '#366c9f',
      'promoareatop' => '#5ea0d2',
      'promoareabottom' => '#033162',
      'tableheaderbg' => '#036',
      'tableheadertext' => '#fffffe',
    ),
    'theme' => 'datagov',
    'info' => array(
      'fields' => array(
        'base' => 'Main Background',
        'link' => 'Hyperlinks Color',
        'text' => 'Paragraph Text Color',
        'headernolink' => 'Headline Colors (No Hyperlink)',
        'headerwithlink' => 'Headline Colors (With Hyperlink)',
        'sfishbgtop' => 'Main Menu Gradient Top Bg',
        'sfishbgbottom' => 'Main Menu Gradient Bottom Bg',
        'sfishbgactive' => 'Main Menu Active Hyperlink Bg',
        'sfishitem' => 'Main Menu Text Hyperlink',
        'sfishbg2' => 'Main Menu Dropdown Bg',
        'promoareatop' => 'Promo/Page Title Gradient Top Bg',
        'promoareabottom' => 'Promo/Page Title Gradient Bottom Bg',
        'tableheaderbg' => 'Tables Header Bg',
        'tableheadertext' => 'Tables Header Text',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Data.gov Default Colors',
          'colors' => array(
            'base' => '#fdfdfd',
            'link' => '#284a77',
            'text' => '#666666',
            'headernolink' => '#284a78',
            'headerwithlink' => '#284a79',
            'sfishbgtop' => '#294b78',
            'sfishbgbottom' => '#0b3064',
            'sfishbgactive' => '#4782b1',
            'sfishitem' => '#fefefe',
            'sfishbg2' => '#366c9f',
            'promoareatop' => '#5ea0d2',
            'promoareabottom' => '#033162',
            'tableheaderbg' => '#036',
            'tableheadertext' => '#fffffe',
          ),
        ),
        'green' => array(
          'title' => 'Green Palette',
          'colors' => array(
            'base' => '#fdfdfd',
            'link' => '#284a77',
            'text' => '#666666',
            'headernolink' => '#366c9d',
            'headerwithlink' => '#366c9e',
            'sfishbgtop' => '#294b78',
            'sfishbgbottom' => '#0b3064',
            'sfishbgactive' => '#4782b1',
            'sfishitem' => '#fefefe',
            'sfishbg2' => '#366c9f',
            'promoareatop' => '#5ea0d2',
            'promoareabottom' => '#033162',
            'tableheaderbg' => '#025506',
            'tableheadertext' => '#fffffe',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'css/color.css',
      ),
      'copy' => array(
        0 => 'logo.png',
      ),
      'preview_css' => 'color/preview.css',
      'preview_js' => 'color/preview.js',
      'preview_html' => 'color/preview.html',
      'gradients' => array(),
      'fill' => array(
        'banner' => array(
          0 => 0,
          1 => 0,
          2 => 990,
          3 => 62,
        ),
      ),
      'slices' => array(
        'images/colorized-header.png' => array(
          0 => 0,
          1 => 0,
          2 => 990,
          3 => 62,
        ),
      ),
      'base_image' => 'color/base.png',
      'blend_target' => '#ffffff',
    ),
    'designkit_color' => array(
      'menu_background_standard' => '#5881B0',
      'menu_background_last' => '#F5F5F5',
      'menu_background_active' => '#FFFFFF',
      'menu_background_other_communities' => '#336699',
      'slider_link' => '#ffffff',
      'law_color' => '#ffffff',
      'slider_view_more_button' => '#66ccff',
      'apply_button' => '#294B78',
      'apply_button_border' => '#033162',
      'apply_button_hover' => '#4782B1',
    ),
  );
  $export['theme_datagov_settings'] = $strongarm;

  return $export;
}
