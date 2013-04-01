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


  return system_settings_form($form);
}
