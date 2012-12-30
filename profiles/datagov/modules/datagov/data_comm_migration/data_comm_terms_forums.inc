<?php
//Concrete term migration for Forums
class DataCommTermsForumsMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_FORUM;
    $vocabulary_name = 'forums';
    $description = 'Vocabulary to hold Forums. Legacy vid : 3';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}