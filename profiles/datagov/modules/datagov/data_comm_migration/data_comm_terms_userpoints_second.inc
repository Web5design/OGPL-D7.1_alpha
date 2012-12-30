<?php
//Concrete term migration for Userpoints
class DataCommTermsUserpointsSecondMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_APPLICATION_USERPOINTS;
    $vocabulary_name = 'legacy_datacomm_userpoints_second';
    $description = 'Vocabulary to hold Userpoint terms. Legacy vid : 5';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}