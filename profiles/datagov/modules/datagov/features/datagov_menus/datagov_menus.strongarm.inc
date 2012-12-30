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
    1 => 'menu-og-1',
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
    4 => 485,
    5 => 253,
    6 => 252,
    7 => 251,
    8 => 250,
    9 => 247,
    10 => 246,
    11 => 245,
    12 => 243,
    13 => 242,
    14 => 241,
    15 => 126,
    16 => 125,
    17 => 124,
    18 => 123,
    19 => 122,
    20 => 121,
    21 => 120,
    22 => 117,
    23 => 85,
    24 => 79,
    25 => 63,
    26 => 62,
    27 => 61,
    28 => 60,
    29 => 59,
    30 => 58,
    31 => 56,
    32 => 54,
    33 => 45,
    34 => 44,
    35 => 42,
    36 => 39,
    37 => 31,
    38 => 30,
    39 => 29,
    40 => 28,
    41 => 27,
    42 => 26,
    43 => 24,
    44 => 23,
    45 => 22,
    46 => 21,
    47 => 20,
    48 => 19,
    49 => 15,
    50 => 14,
    51 => 13,
    52 => 12,
    53 => 11,
    54 => 10,
    55 => 9,
    56 => 7,
    57 => 6,
    58 => 5,
    59 => 4,
    60 => 3,
    61 => 2,
    62 => 1,
  );
  $export['menu_masks'] = $strongarm;

  return $export;
}
