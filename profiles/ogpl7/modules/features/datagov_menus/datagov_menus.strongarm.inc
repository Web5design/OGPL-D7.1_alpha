<?php
/**
 * @file
 * datagov_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 493,
    4 => 253,
    5 => 252,
    6 => 251,
    7 => 250,
    8 => 247,
    9 => 246,
    10 => 245,
    11 => 241,
    12 => 126,
    13 => 125,
    14 => 124,
    15 => 123,
    16 => 122,
    17 => 121,
    18 => 120,
    19 => 117,
    20 => 85,
    21 => 79,
    22 => 63,
    23 => 62,
    24 => 61,
    25 => 60,
    26 => 59,
    27 => 58,
    28 => 56,
    29 => 55,
    30 => 54,
    31 => 45,
    32 => 44,
    33 => 42,
    34 => 39,
    35 => 31,
    36 => 30,
    37 => 29,
    38 => 28,
    39 => 27,
    40 => 24,
    41 => 23,
    42 => 22,
    43 => 21,
    44 => 20,
    45 => 19,
    46 => 15,
    47 => 14,
    48 => 13,
    49 => 12,
    50 => 11,
    51 => 10,
    52 => 9,
    53 => 7,
    54 => 6,
    55 => 5,
    56 => 4,
    57 => 3,
    58 => 2,
    59 => 1,
  );
  $export['menu_masks'] = $strongarm;

  return $export;
}
