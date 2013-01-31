<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
    // Find out all published communities.
    $gids = og_get_all_group();
    $communities_published = array();
    foreach ($gids as $gid) {
      $group = og_load($gid);
      $group_node = node_load($group->etid);
      if ($group_node->status) {
        $communities_published[] = $group->label;
      } 
    }
  ?>
  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } ?>>
    <?php
      // Go thru each community and make at least one of them are published.
      $b_published = FALSE;

      $dom = new simple_html_dom();
      $dom->load($row);
      // Find all images
      foreach($dom->find('li') as $li) {
        $a = $li->find('a');
        $community = $a[0]->innertext;
        if (in_array($community, $communities_published)) {
          $b_published = TRUE;
          break;
        }
      }
      if ($b_published) {
        print $row;
      }
    ?>
  </div>
<?php endforeach; ?>