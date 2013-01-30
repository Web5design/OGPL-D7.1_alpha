<?php

class views_external_database_digits_views_handler_field extends views_handler_field {
  function render($values) {
    $value = $this->get_value($values);
    return number_format($this->sanitize_value($value));
  }
}