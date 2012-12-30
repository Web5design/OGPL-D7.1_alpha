<?php
//Concrete term migration for Tools Identifier
class DataCommTermsToolsIdentifierMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_TOOLS_IDENTIFIER;
    $vocabulary_name = 'legacy_datacomm_tools_identifier';
    $description = 'Vocabulary to hold Forums. Legacy vid : 8';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}