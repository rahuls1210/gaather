<?php
/**
 * @file
 * gaather_clubs_listing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gaather_clubs_listing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create clubs content'.
  $permissions['create clubs content'] = array(
    'name' => 'create clubs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own clubs content'.
  $permissions['delete own clubs content'] = array(
    'name' => 'delete own clubs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own clubs content'.
  $permissions['edit own clubs content'] = array(
    'name' => 'edit own clubs content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
