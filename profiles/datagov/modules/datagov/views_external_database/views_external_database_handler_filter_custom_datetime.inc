<?php
/**
* Custom datetime filter handler for views, that handles SQL type DATETIME
*/
class views_external_database_handler_filter_custom_datetime extends views_handler_filter_date {
  function op_between($field) {
    if ($this->operator == 'between') {
      $a = intval(strtotime($this->value['min'], 0));
      $b = intval(strtotime($this->value['max'], 0));
    }
    else {
      $a = intval(strtotime($this->value['max'], 0));
      $b = intval(strtotime($this->value['min'], 0));
    }

    if ($this->value['type'] == 'offset') {
      // changed from original
      $a = (integer)time() + (integer)sprintf('%+d', $a); // keep sign
      $b = (integer)time() + (integer)sprintf('%+d', $b); // keep sign
      // changed from original ends
    }
    // %s is safe here because strtotime scrubbed the input and we might
    // have a string if using offset.
    $this->query->add_where_expression($this->options['group'], "$field >= '".date("Y-m-d H:i:s", $a)."'");
    $this->query->add_where_expression($this->options['group'], "$field <= '".date("Y-m-d H:i:s", $b)."'");
  }

  function op_simple($field) {
    $value = intval(strtotime($this->value['value'], 0));
    //If there are year and month arguments, we will filter based on those values.

    $type = check_plain(arg(2));
    $year = (int)arg(4);
    $month = arg(5);

    if($type == 'monthly' && !empty($year)) {
      if(!is_numeric($month)) {
        $this->query->add_where_expression($this->options['group'], "$field >= DATE_ADD(NOW(), INTERVAL -31536000 SECOND)");
      }
      else {
        $this->query->add_where_expression($this->options['group'], "YEAR($field) = '$year' and MONTH($field) = '$month' ");
      }
    }
    else {
      if (!empty($this->value['type']) && $this->value['type'] == 'offset') {
        $this->query->add_where_expression($this->options['group'], "$field $this->operator DATE_ADD(NOW(), INTERVAL $value SECOND)");
      } else {
        $this->query->add_where_expression($this->options['group'], "$field $this->operator $value");
      }
    }
  }
}
