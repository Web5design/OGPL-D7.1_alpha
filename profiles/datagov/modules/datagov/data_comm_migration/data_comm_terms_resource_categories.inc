<?php
//Concrete term migration for Resource Categories
class DataCommTermsResourceCategoriesMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_RESOURCE_CATEGORIES;
    $vocabulary_name = 'application_types';
    $description = 'Vocabulary to hold Resource Categories. Legacy vid : 6';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}