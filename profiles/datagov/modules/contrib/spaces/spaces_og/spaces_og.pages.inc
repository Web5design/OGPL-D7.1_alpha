<?php

/**
 * Form for modifying a user's OG subscriptions quickly.
 */
function spaces_og_user_groups_form($form, $form_state, $account) {
  /**
   * Get list of current organic groups the user is a member of, return a fieldset with checkboxes.
   * @todo logic to choose the type of og group as well as displaying different content types and use proper titles
   */
  $form['edit_group_membership'] = array(
    '#type' => 'fieldset',
    '#title' => t('Edit Organic Group Memberships'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['account'] = array('#type' => 'value', '#value' => $account);

  $og_states = array(OG_STATE_ACTIVE, OG_STATE_PENDING, OG_STATE_BLOCKED);

  $groups = og_label_multiple(og_get_group_ids('group', FALSE, $og_states, FALSE));
  $group_membership = og_get_entity_groups('user', $account, $og_states);

  $form['edit_group_membership']['group_membership'] = array(
    '#type' => 'checkboxes',
    '#options' => $groups,
    '#title' => t('Edit Group Membership'),
    '#default_value' => $group_membership,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Submit handler for OG user groups form.
 * @todo check if user has changed any values from the form and og_revoke_roles on those elements
 */
function spaces_og_user_groups_form_submit($form, &$form_state) {

  $account = $form_state['values']['account'];
  $og_states = array(OG_STATE_ACTIVE, OG_STATE_PENDING, OG_STATE_BLOCKED, OG_STATE_ACTIVE);

  $group_membership = og_get_entity_groups('user', $account, $og_states);
  $group_selection = $form_state['values']['group_membership'];

  $unsubscribe_request = array_diff($group_membership, $group_selection);
  $subscribe_request = array_diff(array_filter($group_selection), $group_membership);

  // Subscribe users to selected groups.
  foreach ($subscribe_request as $gid) {
    // Check if group exists.
    if (!$group = og_load($gid)) {
      drupal_set_message(t('Please select a valid group.'));
      continue;
    }

    $label = og_label($gid);

    if (og_is_member($gid, 'user', $account, array(OG_STATE_BLOCKED))) {
      // User is blocked from this group.
      drupal_set_message(t('%user is blocked from %group.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

    if (og_is_member($gid, 'user', $account, array(OG_STATE_PENDING))) {
      // User has a pending membership.
      drupal_set_message(t('%user has a pending membership for the group %group.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

    if (og_is_member($gid, 'user', $account, array(OG_STATE_ACTIVE))) {
      // User is already a member.
      drupal_set_message(t('%user is already a member of the group %group.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

    if (!og_user_access($gid, 'subscribe', $account) && og_user_access($gid, 'subscribe without approval', $account)) {
      // User doesn't have access to join the group.
      drupal_set_message(t('%user can not join the %group group, please check the access permissions or contact the Administrator.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

    $state = og_user_access($gid, 'subscribe without approval', $account) ? OG_STATE_ACTIVE : OG_STATE_PENDING;
    $values = array(
      'entity' => $account,
      'state' => $state,
      'membership type' => OG_MEMBERSHIP_TYPE_DEFAULT,
    );

    og_group($gid, $values);
    drupal_set_message(t('%user has successfully subscribed to %group.', array('%user' => format_username($account), '%group' => $label)));    
  }

  // Remove users from unselected groups.
  foreach ($unsubscribe_request as $gid) {
    // Check if user is a member. 
    if (!og_is_member($gid, 'user', $account, array(OG_STATE_ACTIVE, OG_STATE_PENDING))) {
      drupal_set_message(t('As a non-member of %group, %user can not leave the group.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

    // Check if user has access to unsubscribe. 
    if (!og_user_access($gid, 'unsubscribe', $account)) {
      drupal_set_message(t('%user can not leave the %group group, please check the access permissions or contact the Administrator.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

    // Check if group exists.
    if (!$group = og_load($gid)) {
      drupal_set_message(t('Please select a valid group.'));
      continue;
    }
    
    $manager = $group->user();
    $label = og_label($group->gid);

    // Check if the user is not the manager of the group.
    if ($account->uid == $manager->uid) {
      drupal_set_message(t('As the manager of %group, %user can not leave the group.', array('%user' => format_username($account), '%group' => $label)));
      continue;
    }

   og_ungroup($group->gid, 'user', $account);
   drupal_set_message(t('%user has successfully unsubscribed from %group.', array('%user' => format_username($account), '%group' => $label)));
  }
}

/**
 * Spaces OG wrapper
 */
function spaces_og_ucreate($node) {
  drupal_set_title(t('Add new account'));
  if (module_exists('ucreate')) {
    $form = drupal_get_form('ucreate_user_form');
    return $form;
  }
  return '';
}

/**
 * Group node form_alter().
 * @TODO: repair default values on node previews.
 */
function _spaces_og_form_alter_group(&$form, $form_state) {
  _spaces_og_make_hidden($form['og_selective']);
  _spaces_og_make_hidden($form['og_register']);
  _spaces_og_make_hidden($form['og_private']);
  _spaces_og_make_hidden($form['og_directory']);

  // Add purl form.
  $purl = isset($form['#node']->purl) ? $form['#node']->purl : '';
  $form['purl'] = purl_form('spaces_og', isset($form['#node']->nid) ? $form['#node']->nid : NULL, isset($form_state['node_preview']) ? $form['#node']->purl['value'] : $purl);

  // Add preset form.
  // @TODO: Test with node preview.
  module_load_include('inc', 'spaces', 'spaces.admin');
  $nid = isset($form['#node']->nid) ? $form['#node']->nid : NULL;
  if ($space = spaces_load('og', $nid)) {
    $space->activate();
  }
  $presets = spaces_preset_load(NULL, 'og');
  if (count($presets) > 1) {
    $form['spaces_preset'] = spaces_preset_form($presets, 'og');
  }

  // Pass existing space through.
  if ($nid) {
    $form['space'] = array(
      '#type' => 'value',
      '#value' => $space,
    );
  }

  // Add additional submit handler that redirects to group homepage.
  if (!empty($form['buttons']['submit']['#submit'])) {
    $form['buttons']['submit']['#submit'][] = 'spaces_og_form_group_submit';
  }
}


/**
 * Custom submit handler for group delete confirmation.
 */
function _spaces_og_node_delete_confirm_submit($form, &$form_state) {
  purl_disable(TRUE);
}

/**
 * Group-enabled node form_alter()
 */
function _spaces_og_form_alter_node(&$form, $form_state) {
  global $user;
  $space = spaces_get_space();

  if ($group_types = og_get_types('group')) {
    $typename = node_type_get_name(array_shift($group_types));
  }

  // Retrieve the content type label
  /*
   if (!empty($form['og_nodeapi']['visible']['og_groups'])) {
   $form['og_groups'] = $form['og_nodeapi']['visible']['og_groups'];
   $form['og_groups']['#title'] = t('Select a !typename', array('!typename' => $typename));
   $form['og_groups']['#type'] = 'select';
   $form['og_groups']['#multiple'] = FALSE;
   unset($form['og_nodeapi']['visible']['og_groups']);
   }
   */

  // Recurse into og_options hiding all of them.
  _spaces_og_make_hidden($form['og_nodeapi']);

  // If this node is not associated with a group, we are not in a space and
  // og_audience is required, we do not meet a legal condition. If the user has
  // administer node permissions give her a list of groups to fix the situation.
  // Otherwise issue an error.
  $groups = !empty($form['#node']->og_groups) ? array_filter($form['#node']->og_groups) : array();
  if (variable_get('og_audience_required', FALSE) && empty($groups)) {
    if (user_access('administer nodes')) {
      $form['spaces_og_audience'] = array(
        '#type' => 'select',
        '#title' => t('Group'),
        '#description' => t('This node is supposted to be posted within a group but it is not. Select a group to fix the issue.'),
        '#required' => TRUE,
        '#options' => array(t('Select a group')) + og_all_groups_options(),
      );
    }
    else {
      drupal_set_message(t('This content type is supposed to be posted within a group but it is not. You will not be able to save this node. Please contact a site administrator to fix the issue.'), 'error');
    }
  }

  // We can only determine the privacy of this node if currently in
  // a group space. Otherwise, it will be determined by the feature
  // setting of the group targeted by the selector above.
  if (isset($space->type) && $space->type == 'og') {
    $form['spaces'] = array(
      '#title' => t('Privacy'),
      '#type' => 'fieldset',
      '#weight' => 100,
    );
    switch ($form['#node']->og_public) {
      case OG_VISIBLE_GROUPONLY:
        $form['spaces']['#description'] = t('A post of this type is <strong>private</strong>. Only members of this !typename will be able to see it.', array('!typename' => strtolower($typename)));
        break;
      case OG_VISIBLE_BOTH:
        $form['spaces']['#description'] = t('A post of this type is <strong>public</strong>. All visitors will be able to see it.');
        break;
    }
  }
}

/**
 * Element validator for group targeting selector.
 */
function spaces_og_nodeform_validate($element, &$form_state) {
  if ($element['#value'] == 0) {
    if ($group_types = og_get_types('group')) {
      $typename = node_type_get_name(array_shift($group_types));
    }
    form_error($element, t('Please choose a !typename to post to.', array('!typename' => strtolower($typename))));
  }
}

/**
 * Set all elements in a given form to 'value'. Using value preserves the tree and prevents
 * The element from being rendered.
 */
function _spaces_og_make_hidden(&$form) {
  if (isset($form['#type'])) {
    $form['#type'] = 'value';
    $form['#required'] = FALSE;
  }
  if (is_array($form)) {
    foreach ($form as $key => $value) {
      if (is_array($value) && strpos($key, '#') !== 0) {
        _spaces_og_make_hidden($form[$key]);
      }
    }
  }
}

/**
 * Implementation of hook_form_alter() for spaces_preset_editor().
 */
function _spaces_og_form_spaces_preset_editor_alter(&$form, $form_state) {
  $preset = $form_state['item'];
  if ($preset->space_type === 'og') {
    // Retrieve OG group settings form from OG & OG access.
    $keys = array_flip(array('og_selective', 'og_register', 'og_directory', 'og_private'));
    // $group_form = og_group_form(array(), $form_state);
    if (module_exists('og_access')) {
      drupal_add_js(drupal_get_path('module', 'og_access') . '/og_access.js');
      // og_access_alter_group_form($group_form, array());
    }
    $group_form = array_intersect_key($group_form, $keys);

    // Overwrite default values using preset values.
    foreach (array_keys($keys) as $key) {
      $group_form[$key]['#default_value'] = isset($preset->value['variable']["spaces_{$key}"]) ? $preset->value['variable']["spaces_{$key}"] : $group_form[$key]['#default_value'];
    }

    // Add to preset form.
    $form['spaces_og'] = $group_form + array(
      '#title' => t('OG settings'),
      '#type' => 'fieldset',
      '#tree' => FALSE,
      '#description' => t('The following settings will be used for any groups saved using this preset.'),
    );

    // Add submit handler - we'll need to do our own saving of these values.
    $form['#submit'][] = '_spaces_og_spaces_preset_editor_submit';
  }
}

/**
 * Additional submit handler for preset editor form.
 */
function _spaces_og_spaces_preset_editor_submit(&$form, &$form_state) {
  $preset = $form_state['item'];
  $keys = array('og_selective', 'og_register', 'og_directory', 'og_private');
  foreach ($keys as $key) {
    if (isset($form_state['values'][$key])) {
      $preset->value['variable']["spaces_{$key}"] = $form_state['values'][$key];
    }
  }
}
