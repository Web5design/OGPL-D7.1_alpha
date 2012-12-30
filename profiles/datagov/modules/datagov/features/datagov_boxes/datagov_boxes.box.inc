<?php
/**
 * @file
 * datagov_boxes.box.inc
 */

/**
 * Implements hook_default_box().
 */
function datagov_boxes_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'current_date_preheader';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Current Date - PreHeader';
  $box->options = array(
    'body' => array(
      'value' => '<p id="datagov-current-date">[current-date:custom:l], [current-date:custom:F] [current-date:custom:d], [current-date:custom:Y]</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['current_date_preheader'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'datagov_footer_logo';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Data.gov Footer Logo';
  $box->options = array(
    'body' => array(
      'value' => '<p><img title="Data.gov" src="/sites/all/themes/datagov/images/datagov-footer-logo.png" alt="Data.gov" /></p>',
      'format' => 'full_html',
    ),
  );
  $export['datagov_footer_logo'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'developers_forums';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Developers Corner - Forums Link';
  $box->options = array(
    'body' => array(
      'value' => '<p style="text-align: center;"><strong><a href="http://www.data.gov/communities/node/130/forums">So what are you waiting for, tell us what you\'re doing, and brag a little!</a></strong></p><p style="text-align: center;"><a href="http://www.data.gov/communities/node/130/forums"><img style="border: 0px none;" src="/sites/default/files/images/jointhedialogue.jpg" alt="Join the Dialog" height="112" width="511"></a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['developers_forums'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'developers_intro';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Developers Corner - Intro';
  $box->options = array(
    'body' => array(
      'value' => '<p>Are you interested in sharing your mashups, apps, and ideas? Do you want to learn how to create app and mashups with some of the data hosted here on Data.gov? Whether you are here to share, learn, collaborate, or innovate–you\'ve come to the right place.</p>',
      'format' => 'full_html',
    ),
  );
  $export['developers_intro'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'developers_share';
  $box->plugin_key = 'simple';
  $box->title = 'Share What You\'ve Done';
  $box->description = 'Developers Corner - Share What You\'ve Done';
  $box->options = array(
    'body' => array(
      'value' => '<p>If you\'ve created an applications, mashup, or visualization of the data from Data.gov, congratulations! We\'d like to hear what you\'re doing, what lessons you learned, and what you\'d like to see. You can post ideas to the <a href="http://www.data.gov/communities/node/130/forums">Open Data community</a> and talk about suggestions you have for new datasets or other enhancements to the Data.gov system.</p>',
      'format' => 'full_html',
    ),
  );
  $export['developers_share'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'developers_tutorials';
  $box->plugin_key = 'simple';
  $box->title = 'Tutorials and Videos';
  $box->description = 'Developers Corner - Tutorials';
  $box->options = array(
    'body' => array(
      'value' => '<p>Ready to try building a mashup or application? To get started, check out the <a href="http://logd.tw.rpi.edu/tutorials">tutorials</a> and <a href="http://logd.tw.rpi.edu/videos">videos</a> that will help you.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['developers_tutorials'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_communities';
  $box->plugin_key = 'simple';
  $box->title = '<a href="communities">Communities</a>';
  $box->description = 'Home Feature - Communities';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/communities"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-communities.png" alt="Data.gov Communities" border="0" height="150" width="280"></a></div><p>Come explore, discuss, meet others in the same field, and develop the data and apps in the community that you care about. Join in the discussions by <a href="/communities">going to communities</a>, some of which are listed below, that interest you.</p><div class="centered"><a href="/communities/education"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-education.png" alt="Education" height="30" width="145"></a> <a href="/communities/energy"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-energy.png" alt="Energy" height="30" width="145"></a> <a href="/communities/health"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-health.png" alt="Health" height="30" width="145"></a> <a href="/communities/manufacturing"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-manufacturing.png" alt="Manufacturing" height="30" width="145"></a> <a href="/communities/ocean"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-ocean.png" alt="Ocean" height="30" width="145"></a> <a href="/communities/safety"><img src="http://www.data.gov/communities/sites/all/files/images/home-community-safety.png" alt="Safety" height="30" width="145"></a></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['home_communities'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_data_apps';
  $box->plugin_key = 'simple';
  $box->title = '<a href="/metric">Data and Apps</a>';
  $box->description = 'Home Feature - Data and Apps';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/metric"><img style="border: 0;" src="/sites/default/files/images/home-feature-data-apps.png" alt="An example of a citizen-developed application" border="0" height="150" width="280"></a></div><ul class="datagov-home-ul hometext"><li>445,317 <a href="http://explore.data.gov/catalog/raw/">raw</a> and <a href="http://geo.data.gov/geoportal/">geospatial</a> datasets</li><li>1,264 government <a href="https://explore.data.gov/catalog/apps/">apps</a></li><li>236 citizen-developed <a href="/developers/showcase">apps</a></li><li>103 <a href="http://apps.usa.gov/">mobile apps</a></li><li>172 <a href="/metric">agencies and subagencies</a></li><li><a href="https://explore.data.gov/nominate">Suggest a dataset or app!</a></li><li><a href="/announcements/introducing-datagov-next-generation">2011 Next Generation Data.gov</a> is interactive, explorable, and socially.</li></ul>',
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
  $box->title = '<a href="developers">Developers Corner</a>';
  $box->description = 'Home Feature - Developers Corner';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/developers"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-developerscorner.png" alt="Data.gov developer\'s corner" border="0" height="150" width="280"></a></div><p>Are you interested in sharing your mashups, apps, and ideas? Do you want to learn how to create app and mashups with some of the data hosted here on Data.gov? Whether you are here to share, learn, collaborate, or innovate—you’ve come to the right place.</p><p>Look at these great government <a href="http://apps.usa.gov/">mobile apps</a> and help us to develop more!</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['home_developers_corner'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_latest_datasets';
  $box->plugin_key = 'simple';
  $box->title = 'Latest Datasets';
  $box->description = 'Home Feature - Latest Datasets';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li class="first"><a href="#">Dataset 1</a> (from newest to oldest)</li><li><a href="#">Dataset 2</a></li><li><a href="#">Dataset 3</a></li><li><a href="#">Dataset 4</a></li><li><a href="#">Dataset 5</a></li><li><a href="#">Dataset 6</a></li><li><a href="#">Dataset 7</a></li><li><a href="#">Dataset 8</a></li><li><a href="#">Dataset 9</a></li><li class="last"><a href="#">Dataset 10</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'home-latest-datasets',
  );
  $export['home_latest_datasets'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_learn';
  $box->plugin_key = 'simple';
  $box->title = '<a href="/communities/node/38/classroom">Learn</a>';
  $box->description = 'Home Feature - Learn';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/communities/node/38/classroom"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-learn.png" alt="Learn about Data.gov in the classroom" border="0" height="150" width="280"></a></div><p>Are you a teacher, professor, or student? Young people across America are learning about Data.gov and we want you to be part of getting data into the classroom.</p><p>See what teachers are doing, share a lesson plan, showcase an app. Learn what’s going on in <a href="/communities/node/38/classroom">classrooms</a> today!</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['home_learn'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_open_government';
  $box->plugin_key = 'simple';
  $box->title = '<a href="/opengovplatform">Open Government</a>';
  $box->description = 'Home Feature - Open Government';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="opengovplatform"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-opengov.png" alt="What\'s New at Data.gov" border="0" height="150" width="280"></a></div><p>First open source code released for the <a href="/opengovplatform">Open Government Platform</a> delivered by the governments of India and the U.S. <a href="/opengovplatform">Find out more</a> and then <a href="https://github.com/opengovplatform/opengovplatform">download the code</a>.</p><p>The 2012 International Open Government Data Conference will be held July 10-12 at the World Bank in Washington DC. We hope to see you <a href="http://www.data.gov/communities/conference">there</a>.</p><p>What’s coming up on Data.gov? Check out <a href="/communities/node/130/blogs">our blog</a>.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['home_open_government'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_semantic_web';
  $box->plugin_key = 'simple';
  $box->title = '<a href="http://semantic.data.gov">Semantic Web</a>';
  $box->description = 'Home Feature - Semantic Web';
  $box->options = array(
    'body' => array(
      'value' => '<div class="centered"><a href="/semantic"><img style="border: 0; vertical-align: middle;" src="/sites/default/files/images/home-feature-semantic.png" alt="Visit the Semantic Web community" border="0" height="150" width="280"></a></div><p>As the Web of linked documents evolves to include the Web of linked data, we’re working to maximize the potential of Semantic Web technologies to realize the promise of Linked Open Government Data. We and our collaborators at the <a href="http://data-gov.tw.rpi.edu/">Tetherless World Constellation</a> at the <a href="http://rpi.edu/">Rensselaer Polytechnic Institute</a> are helping to lead the way in this exciting area!</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['home_semantic_web'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'omb_recordkeeping_disclaimer';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'OMB Recordkeeping & Public Reporting Disclaimer';
  $box->options = array(
    'body' => array(
      'value' => '<p class="disclaimer">OMB Control No. 3090-0284</p><p class="disclaimer">The public reporting and recordkeeping burden for this collection of information is estimated to average 30 seconds for the 5-star ratings/Comment on this Data text box, 30 seconds for the Contact Us page and 5 minutes to Suggest Other Datasets. Send comments on the Agency\'s need for this information, the accuracy of the provided burden estimates, and any suggested methods for minimizing respondent burden, including through the use of automated collection techniques to&nbsp;<a href="mailto:datagov@gsa.gov?body=OMB%20Control%20No.%203090-0284">datagov@gsa.gov</a>. Please include the OMB Control Number 3090-0284 in any correspondence.</p>',
      'format' => 'full_html',
    ),
  );
  $export['omb_recordkeeping_disclaimer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'opendatasites_intro';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Open Data Sites - Intro';
  $box->options = array(
    'body' => array(
      'value' => '<div id="open-data-sites-intro"><div class="clear"><p>Data.gov is leading the way in democratizing public sector data and driving innovation. This movement has spread throughout cities, states, and countries.</p></div><div id="open-data-sites-boxes" class="clear"><div class="open-data-sites-box"><div class="region"><a href="#">U.S. States</a></div><div class="numbers"><a href="#">34</a></div></div><div class="open-data-sites-box"><div class="region"><a href="#">U.S. Cities</a></div><div class="numbers"><a href="#">15</a></div></div><div class="open-data-sites-box"><div class="region-twolines"><a href="#">Agencies and Subagencies</a></div><div class="numbers"><a href="#">172</a></div></div><div class="open-data-sites-box"><div class="region"><a href="#">International</a></div><div class="numbers"><a href="#">30</a></div></div></div><div class="clear"><p>If you would like to be part of this community and help to shape its future, <a href="http://www.data.gov/opendata">join in the discussions</a> going on now.</p></div></div>',
      'format' => 'full_html',
    ),
  );
  $export['opendatasites_intro'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'suggest_other_datasets';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Suggest Other Datasets';
  $box->options = array(
    'body' => array(
      'value' => '<p>Our vision is to continuously improve and update Data.gov with a wide variety of available datasets and easy-to-use tools based on your feedback.</p><p>Please note that requested datasets that contain sensitive information (e.g., personally identifiable information, national security), are limited by technology (e.g., not machine readable), or that do not belong to the Executive Branch of the Federal Government are not available on Data.gov.</p><p>We received approximately 900 suggested datasets from the time of the site launch in May 2009 through December 2009. Representatives from the identified Federal agencies reviewed the suggested datasets from the public. Their responses fell into four categories: 16 percent of the data is already published on Data.gov (Already Published), 26 percent of the suggestions can be published in the near future (Actionable), 36 percent of the suggestions could be published at a later date (Potentially Actionable), and the remaining 22 percent of the suggestions cannot be published due primarily to security, privacy, or technology constraints (Not Actionable).</p>',
      'format' => 'full_html',
    ),
  );
  $export['suggest_other_datasets'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'usaflag_info';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'USA Flag & Info';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="http://www.whitehouse.gov"><img title="Visit Whitehouse.gov" src="/sites/all/themes/datagov/images/usa-flag.gif" alt="An American flag linked to Whitehouse.gov" border="0" /></a> <em>An Official Web Site of the United States Government</em></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['usaflag_info'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'whatsnew_additional_information';
  $box->plugin_key = 'simple';
  $box->title = 'Additional Information';
  $box->description = 'What\'s New - Additional Information';
  $box->options = array(
    'body' => array(
      'value' => '<div class="whatsnew-stage"><img style="float: left; border: 0; padding-right: 5px;" src="/sites/default/files/images/ul-hbs.png" alt="Harvard Business School" width="35" height="43"><p>Read the <a href="http://www.data.gov/documents/hbs_datagov_case_study.pdf">Harvard Business School (HBS) case study</a><strong class="red">*</strong> (1.5 MB, PDF) on Data.gov presented by HBS Assistant Professor Karim Lakhani, Ph.D. This case study is free for government use.</p><p>Explore the <a href="http://www.data.gov/documents/data_gov_conops_v1.0.pdf">Data.gov Concept of Operations</a><strong class="red">*</strong>(CONOPS, 4 MB, PDF) released at the Conference. The CONOPS represents the vision for the future of Data.gov and Open Data for the Federal Government.</p><p><strong class="red">*</strong> To view these documents in PDF format, you must have Adobe Reader Software. <a title="Follow this link to learn about Portable Document Format and download a free viewer" href="http://www.usa.gov/Help/Free_Downloads.shtml">Download</a> it free here.</p></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['whatsnew_additional_information'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'whatsnew_in_the_news';
  $box->plugin_key = 'simple';
  $box->title = 'Data.gov In the News';
  $box->description = 'What\'s New - Data.gov In the News';
  $box->options = array(
    'body' => array(
      'value' => '<div><a title="Data.gov In the News" href="in-the-news"><img style="vertical-align: middle; border: 0px; display: block; margin-left: auto; margin-right: auto;" src="/sites/default/files/images/whatsnew-news.jpg" alt="Data.gov In the News" width="290" height="178"></a></div><p>Check out how Data.gov is making news. You\'ll also find stories about Open Government and learn how Data.gov is supporting its core principles of transparency, participation and collaboration.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['whatsnew_in_the_news'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'whatsnew_new_features';
  $box->plugin_key = 'simple';
  $box->title = 'New Features';
  $box->description = 'What\'s New - New Features';
  $box->options = array(
    'body' => array(
      'value' => '<div><a title="New Features" href="whatsnew/new-features"><img style="vertical-align: middle; border: 0px; display: block; margin-left: auto; margin-right: auto;" src="/sites/default/files/images/whatsnew-geoviewer.jpg" alt="New Data.gov Features" width="290" height="178"></a></div><p>We are pleased to announce the availability of the Data.gov GEO Viewer, an interactive mapping tool designed to let users preview geospatial data available through the Data.gov catalogs. Using this tool, you can immediately view datasets on an interactive map, overlay them with other datasets, and investigate the underlying data.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['whatsnew_new_features'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'whatsnew_newest_datasets';
  $box->plugin_key = 'simple';
  $box->title = 'Newest Datasets';
  $box->description = 'What\'s New - Newest Datasets';
  $box->options = array(
    'body' => array(
      'value' => '<div><a title="New Datasets" href="http://www.data.gov/list/new/7"><img style="vertical-align: middle; border: 0; display: block; margin-left: auto; margin-right: auto;" src="/sites/default/files/images/whatsnew-datasets.jpg" alt="New Data.gov Features" width="290" height="178"></a></div><p>Find out what datasets and tools have been added to Data.gov catalogs.</p>
<!-- <table class="newest-datasets"><tbody><tr><td class="newest-datasets-count red">38</td><td class="newest-datasets-link">new datasets/tools added in the last 7 days (<a href="http://www.data.gov/list/new/7">view list</a>)</td></tr><tr><td class="newest-datasets-count red">47</td><td class="newest-datasets-link">new datasets/tools added in the last 7 days (<a href="http://www.data.gov/list/new/30">view list</a>)</td></tr></tbody></table> -->',
      'format' => 'php_code',
    ),
    'additional_classes' => 'whats-new-feature-box',
  );
  $export['whatsnew_newest_datasets'] = $box;

  return $export;
}
