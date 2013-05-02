This feature provides configuration for Single Sign On. It depends on simplesamlphp_auth module, which in turn depends
on simplesamlphp framework. Make sure that the later is installed and configured correctly before enabling SAML functionality.

Installation and configuration instructions can be found here: http://drupal.org/project/simplesamlphp_auth

Note: simplesamlphp_auth module has been modified in order to make it compatible with OpenID module.
So, if both SAML and OpenID modules are enabled, a user can only register a new account with either SAML or OpenID, but not both.
