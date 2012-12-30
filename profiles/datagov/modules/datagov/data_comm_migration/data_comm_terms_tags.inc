<?php
//Concrete term migration for Tags
class DataCommTermsTagsMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_TAGS;
    $vocabulary_name = 'legacy_datacomm_tags';
    $description = 'Vocabulary to hold Tags. Legacy vid : 2';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}