<?php

/**
 * @file
 * Template file for usasearch module.
 */
?>

<?php if ($search_scope): ?>
<div class="search-results-scope">
  You are searching <strong><?php print check_plain($search_term); ?></strong> in <?php print $search_scope; ?> community.
  Show search results in <a href="<?php global $base_root; print $base_root . "/search/node/$search_term" ?>">Data.gov</a>.
</div>
<?php endif; ?>

<h2><?php print $title; ?></h2>

<?php if (isset($results['boosted_results']) && count($results['boosted_results']) > 0): ?>
<ol class="search-results usasearch-results usasearch-boosted-results ">
  <?php foreach ($results['boosted_results'] as $result) : ?>
  <li class="search-result">
    <h4>Recommended results</h4>
    <h3 class="title"><?php print l($result['title'], $result['url'], array('html' => TRUE,)); ?></h3>
    <div class="search-snippet-info"><?php print $result['description']; ?></div>
  </li>
  <?php endforeach; ?>
</ol>
<?php endif; ?>

<ol class="search-results usasearch-results">
  <?php if (count($results['results']) > 0): ?>
    <?php foreach ($results['results'] as $result) : ?>
    <li class="search-result">
      <h3 class="title"><?php print l($result['title'], $result['unescapedUrl'], array('html' => TRUE,)); ?></h3>
      <div class="search-snippet-info"><?php print $result['content']; ?></div>
    </li>
    <?php endforeach; ?>
  <?php else: ?>
    <div><?php print t('Sorry, no results found. Try entering fewer or broader query terms.'); ?></div>
  <?php endif; ?>
</ol>
 
