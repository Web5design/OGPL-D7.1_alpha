<?php
//Concrete term migration for Application Categories
class DataCommTermsApplicationCategoriesMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_APPLICATION_CATEGORIES;
    $vocabulary_name = 'application_categories';
    $description = 'Vocabulary to hold Forums. Legacy vid : 11';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}