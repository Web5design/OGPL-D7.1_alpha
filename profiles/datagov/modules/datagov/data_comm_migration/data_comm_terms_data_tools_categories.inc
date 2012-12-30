<?php
//Concrete term migration for Data/Tools Categories
class DataCommTermsDataToolsCategoriesMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_DATA_TOOLS_CATEGORIES;
    $vocabulary_name = 'legacy_datacomm_data_tools_categories';
    $description = 'Vocabulary to hold Forums. Legacy vid : 7';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}