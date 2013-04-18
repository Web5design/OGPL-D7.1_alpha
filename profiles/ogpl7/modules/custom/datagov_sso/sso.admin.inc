<?php
/**
 * SSO Admin Settings
 */
function datagov_sso_admin_settings() {
  $form['sso']['idm_profile_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Identity Management User Tab Link'),
    '#default_value' => variable_get('idm_profile_url', ''),
    '#size' => 100,
    '#description' => t('Identity Management URL. When users click on "SAML Identity Management" tab under their profile, they will be redirected to the IdM where they can edit their account information. If left blank, the "SAML Identity Management" tab will not be visible'),
  );

  $form['sso']['password_reset_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Password Reset Link'),
    '#default_value' => variable_get('password_reset_link', ''),
    '#size' => 100,
    '#description' => t('Overrides drupal\'s default password reset link if set'),
  );


  $form['sso']['registration_page_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Registration Page Link'),
    '#default_value' => variable_get('registration_page_link', ''),
    '#size' => 100,
    '#description' => t('Overrides drupal\'s default registration page link if set'),
  );

  /*$form['sso']['user_link'] = array(
    '#type' => 'textfild',
    '#title' => t('User Link'),
    '#default_value' => variable_get('user_link', ''),
    '#size' => 20,
    '#description' => t('Overrides drupal\'s default registration page link if set'),
  );*/

  
  $form['sso']['hide_drupal_login_form'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide Drupal Login Form'),
    '#default_value' => variable_get('hide_drupal_login_form', 1),
    '#description' => t('Hide drupal\'s default login form'),
  );

  $form['sso']['hide_add_user_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide Add User Link'),
    '#default_value' => variable_get('hide_add_user_link', 1),
    '#description' => t('Hide "add user" from user management page link. Cache needs to be cleared for changes to show up.'),
  );

  $form['sso']['hide_openid_tab'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide OpenID tab from user account page'),
    '#default_value' => variable_get('hide_openid_tab', 1),
    '#description' => t('Hides OpenID tab from user account page. Cache needs to be cleared for changes to show up.'),
  );

  /*$form['sso']['prevent_saml_login'] = array(
    '#type' => 'checkbox',
    '#title' => t('Prevent SAML login for users that already logged in through OpenID and registered with the same email with on SAML Identity Provider'),
    '#default_value' => variable_get('hide_openid_tab', 1),
    '#description' => t('Prevents SAML login for users that already logged in through OpenID and registered with the same email with on SAML Identity Provider'),
  );*/

  $form['sso']['hide_roles_openid'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide roles for openID users'),
    '#default_value' => variable_get('hide_roles_openid', 1),
    '#description' => t('If checked, Drupal will not allow administrators to assign roles to openID users'),
  );

  $form['sso']['hide_display_name_text_field'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide "Display Name" textField on user profile'),
    '#default_value' => variable_get('hide_display_name_text_field', 1),
    '#description' => t('If checked, Drupal will hide "Display Name" textfield on user profile in edit mode'),
  );
  $form['sso']['display_name_saml'] = array(
    '#type' => 'textfield',
    '#title' => t('SAML "Display Name" attribute'),
    '#default_value' => variable_get('display_name_saml', ''),
    '#size' => 50,
    '#description' => t('If an attribute name is provided, the "Display Name" field will be populated from SAML'),
  );

  return system_settings_form($form);
}
