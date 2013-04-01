<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<style>.item-list a{margin:0 3px;} </style>
<script type="text/javascript">
    jQuery(function ($) {
        $(".summary span").removeAttr("style");
        $("p").removeAttr("style");
        $(".details span").removeAttr("style")
    });

</script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="meta submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
//      print render($content);
    ?>

	<?php
	    //code for pagination
		$mapsperpage = variable_get('mapsperpage');
		
		$total_maps = $map_info['total_maps'];
		// find out total number of pages
		$total_pages = ceil($total_maps / $mapsperpage);
		
		// get the current page or set a default
		if (isset($_GET['currentpage']) && is_numeric($_GET['currentpage'])) {
			// cast var as int
			$currentpage = (int) $_GET['currentpage'];
		}
		else {
			// default page num
			$currentpage = 1;
		} // end if
		

		// if the current page is greater than the total pages ..
		if ($currentpage > $total_pages) {
			// set current page to last page
			$currentpage  = $total_pages;
		} // end if
		
		// if the current page is less than the first page ..
		if ($currentpage < 1) {
			// set the current page to first page
			$currentpage = 1;
		} // end if

		// the offset of the list, based on the current page
		$start = ($currentpage - 1) * $mapsperpage + 1;	
		
	?>

  <!--  <div class="map-gallery-wrap">
	 <?php //for($i=0; $i<$total_maps; $i++): ?>
	    <div class="map-align">
		<a target=_blank href="<?php //print $map_info[$i]['img_href'] ?>">
			<img class="map-gallery-thumbnail" src="<?php //print $map_info[$i]['img_src']?>">
			<div class="map-gallery-caption"><?php //print $map_info[$i]['title']?></div>
		</a>
		</div> -->
	 <?php //endfor; ?>
	 
	 <?php
		
		
		drupal_add_js(drupal_get_path('module', 'arcgis_map') . '/js/jquery.expander.js');
		$output = "";		
		
		if(isset($info)) {
			$output .= '<div id="infoTitle">';
		    if($info['type'] == "Map")
				$output .= "<h2>Map Information</h2>";
			else
				$output .= "<h2>Group Information</h2>";
			
			$output .= '</div>';			
			$output .= '<div class="groupImg"><h3><img class="groupThumbnail" src="' . htmlspecialchars_decode($info['thumbnail_src']) . '" title="' . $info['title'] . '">';
			$output .= htmlspecialchars_decode($info['title']) . '</h3></div>';
			$output .=  '<div class="groupDesc"><div class="expandable">' . htmlspecialchars_decode($info['description']) . '</div></div>';
		}
		$output .= '<br><div id="galleryTitle"><h2>Map Gallery</h2></div>';
		$output .= '<div class="map-gallery-wrap">';
		

		for($i=$start-1; $i<$start-1+$mapsperpage; $i++){

			if(isset($map_info[$i])) {
				$output .= '<div class="map-align">';
				$output .= '<a target=_blank href="'. $map_info[$i]["img_href"] . '">';
				$output .= '<img class="map-gallery-thumbnail" src="'. $map_info[$i]["img_src"] . '" title="' . $map_info[$i]["title"] .'">';
				
				$output .= '<div class="map-gallery-caption">'. $map_info[$i]["title"] . '</div>';
				$output .= '</a>';
				$output .= '</div>';
			}
			
		}
		$output .= "</div><div class='item-list'><ul class='pager'>";
		
		if($total_maps > $mapsperpage) {
	    // range of num links to show
		$range = 10;
		
		// if not on page 1, don't show back links
		if ($currentpage > 1) {
			// show << link to go back to page 1
			$output .= "<br clear='both'/><li class='pager-first first'><a href='?currentpage=1'><<< FIRST </a></li> ";
			// get previous page num
			$prevpage = $currentpage - 1;
			//  show < link to go back to 1 page
			$output .= "<li class='pager-previous'><a href='?currentpage=$prevpage'>< PREVIOUS  </a> </li>";
		} // end if
		
		// loop to show links to range of pages around current page
		for ($x = ($currentpage - $range); $x < (($currentpage + $range) + 1); $x++) {
			// if its a valid page number...
			if (($x > 0) && ($x <= $total_pages)) {
				// if we're on current page...
				if ($x == $currentpage) {
					if ($currentpage == 1) {
						$output .="<br clear='both'/><br/>";
					}
					if ($total_pages > 1) {
						// nighlight it but don't make a link
						$output .= "<li class='pager-current first'>$x</li>";
						// if not current page...
					}
				}
				else {
					// make it a link
					$output .= "<li class='pager-item'><a href='?currentpage=$x'> $x </a></li>";
				} // end else
			} // end if
		} // end for

		// if not on last page, show forward and last page links
		if ($currentpage != $total_pages) {
			// get next page
			$nextpage = $currentpage + 1;
			// echo forward link for next page
			$output .= " <li class='pager-next'> <a href='?currentpage=$nextpage'>NEXT ></a></li> ";
			// echo forward link for lastpage
			$output .= " <li class='pager-last last'><a href='?currentpage=$total_pages'>  LAST >>></a> </li>";
		} // end if
		/****** end build pagination links ******/
		}
		
		print $output;
		
		drupal_add_js('jQuery(document).ready(function () { jQuery("div.expandable").expander( { slicePoint: 600 } ); });', 'inline');
	 ?>
    </div>

  </div>

  <?php
    // Remove the "Add new comment" link on the teaser page or if the comment
    // form is being displayed on the same page.
    if ($teaser || !empty($content['comments']['comment_form'])) {
      unset($content['links']['comment']['#links']['comment-add']);
    }
    // Only display the wrapper div if there are links.
    $links = render($content['links']);
    if ($links):
  ?>
    <div class="link-wrapper">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</div>

