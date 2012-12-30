<?php
/**
 * @file
 * datagov_home_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function datagov_home_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_communities';
  $box->plugin_key = 'simple';
  $box->title = 'Communities';
  $box->description = 'Home Feature - Communities';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/communities"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-communities.png" alt="Data.gov Communities" width="280" height="150" border="0" /></a></div><p>Come explore, discuss, meet others in the same field, and develop the data and apps in the community that you care about. Join in the discussions by <a href="/communities">going to communities</a>, some of which are listed below, that interest you.</p><div class="centered"><a href="/communities/education"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-education.png" alt="Education" width="145" height="30" /></a> <a href="/communities/energy"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-energy.png" alt="Energy" width="145" height="30" /></a> <a href="/communities/health"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-health.png" alt="Health" width="145" height="30" /></a> <a href="/communities/manufacturing"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-manufacturing.png" alt="Manufacturing" width="145" height="30" /></a> <a href="/communities/ocean"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-ocean.png" alt="Ocean" width="145" height="30" /></a> <a href="/communities/safety"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-safety.png" alt="Safety" width="145" height="30" /></a></div>',
      'format' => 'full_html',
    ),
  );
  $export['home_communities'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_data_apps';
  $box->plugin_key = 'simple';
  $box->title = 'Data and Apps';
  $box->description = 'Home Feature - Data and Apps';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/metric"><img style="border: 0;" src="/sites/default/files/images/home-feature-data-apps.png" alt="An example of a citizen-developed application" width="280" height="150" border="0" /></a></div><ul class="datagov-home-ul hometext"><li>445,317 <a href="/catalog/raw">raw</a> and <a href="/catalog/geodata">geospatial</a> datasets</li><li>1,264 government <a href="/catalog/tools">apps</a></li><li>236 citizen-developed <a href="/developers/showcase">apps</a></li><li>103 <a href="http://apps.usa.gov/">mobile apps</a></li><li>172 <a href="/metric">agencies and subagencies</a></li><li><a href="/suggestdataset">Suggest a dataset or app!</a></li><li><a class="thickbox external" title="" href="#">2011 Next Generation Data.gov</a> is interactive, explorable, and social.</li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['home_data_apps'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_developers_corner';
  $box->plugin_key = 'simple';
  $box->title = 'Developers Corner';
  $box->description = 'Home Feature - Developers Corner';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/developers"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-developerscorner.png" alt="Data.gov developer\'s corner" width="280" height="150" border="0" /></a></div><p>Are you interested in sharing your mashups, apps, and ideas? Do you want to learn how to create app and mashups with some of the data hosted here on Data.gov? Whether you are here to share, learn, collaborate, or innovate—you’ve come to the right place.</p><p>Look at these great government <a href="http://apps.usa.gov/">mobile apps</a> and help us to develop more!</p>',
      'format' => 'full_html',
    ),
  );
  $export['home_developers_corner'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_learn';
  $box->plugin_key = 'simple';
  $box->title = 'Learn';
  $box->description = 'Home Feature - Learn';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/story/datagov-in-the-classroom"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-learn.png" alt="Learn about Data.gov in the classroom" width="280" height="150" border="0" /></a></div><p>Are you a teacher, professor, or student? Young people across America are learning about Data.gov and we want you to be part of getting data into the classroom.</p><p>See what teachers are doing, share a lesson plan, showcase an app. Learn what’s going on in <a href="/story/datagov-in-the-classroom">classrooms</a> today!</p>',
      'format' => 'full_html',
    ),
  );
  $export['home_learn'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_open_government';
  $box->plugin_key = 'simple';
  $box->title = 'Open Government';
  $box->description = 'Home Feature - Open Government';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/whatsnew"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-opengov.png" alt="What\'s New at Data.gov" width="280" height="150" border="0" /></a></div><p>First open source code released for the <a class="thickbox external" title="" href="#">Open Government Platform</a> delivered by the governments of India and the U.S. <a href="/opengovplatform">Find out more</a> and then <a href="#">download the code</a>.</p><p>The 2012 International Open Government Data Conference will be held July 10-12 at the World Bank in Washington DC. We hope to see you <a href="http://www.data.gov/communities/conference">there</a>.</p><p>What’s coming up on Data.gov? Check out <a href="/communities/node/130/blogs">our blog</a>.</p>',
      'format' => 'full_html',
    ),
  );
  $export['home_open_government'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_semantic_web';
  $box->plugin_key = 'simple';
  $box->title = 'Semantic Web';
  $box->description = 'Home Feature - Semantic Web';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/semantic"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-semantic.png" alt="Visit the Semantic Web community" width="280" height="150" border="0" /></a></div><p>As the Web of linked documents evolves to include the Web of linked data, we’re working to maximize the potential of Semantic Web technologies to realize the promise of Linked Open Government Data. We and our collaborators at the <a href="#">Tetherless World Constellation</a> at the <a href="#">Rensselaer Polytechnic Institute</a> are helping to lead the way in this exciting area!</p>',
      'format' => 'full_html',
    ),
  );
  $export['home_semantic_web'] = $box;

  return $export;
}
