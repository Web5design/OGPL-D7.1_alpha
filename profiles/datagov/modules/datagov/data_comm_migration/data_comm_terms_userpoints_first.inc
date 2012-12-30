<?php
//Concrete term migration for Userpoints
class DataCommTermsUserpointsFirstMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_FIRST_USERPOINTS;
    $vocabulary_name = 'legacy_datacomm_userpoints_first';
    $description = 'Vocabulary to hold Userpoint terms. Legacy vid : 1';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}