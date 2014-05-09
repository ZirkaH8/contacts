<?php
/**
 * @file
 * features_for_contacts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_for_contacts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access method'.
  $permissions['access method'] = array(
    'name' => 'access method',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contacts',
  );

  return $permissions;
}
