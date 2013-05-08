<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<style>.item-list a{margin:0 3px;} </style>

<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php 
	  
	  $map_list = array();
	  
	  for($i=0; $i<sizeof($view->result); $i++){
		$subsize = sizeof($view->result[$i]->views_php_1);
		for($j=0; $j<$subsize; $j++)
		  array_push($map_list, $view->result[$i]->views_php_1[$j]);
	  
	  }
	 
	  //code for pagination
	  $mapsperpage = $view->display['ogpl_map_gallery_national_block']->display_options['pager']['options']['items_per_page'];
		
	  $total_maps = sizeof($map_list);
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
	  
	  $output .= '<div class="map-gallery-wrap">';
	  
	

	  for($i=$start-1; $i<$start-1+$mapsperpage; $i++){

	    if(isset($map_list[$i])) {
			$output .= '<div class="map-align">';
			$output .= '<a target=_blank href="'. $map_list[$i]["img_href"] . '">';
			$output .= '<img class="map-gallery-thumbnail" src="'. $map_list[$i]["img_src"] . '" title="' . $map_list[$i]["title"] .'">';
					
			$output .= '<div class="map-gallery-caption">'. $map_list[$i]["title"] . '</div>';
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
			$output .= "<li class='pager-previous'><a href='?currentpage=$prevpage'>< PREVIOUS  </a> </li> ";
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
		
		$output .= "</ul></div>";
		
		print $output;	  
	 
	  //print $rows; 
	  
	  ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
