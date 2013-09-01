<?php
/**
 * @file
 * noticias.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function noticias_user_default_roles() {
  $roles = array();

  // Exported role: Publicador Noticias.
  $roles['Publicador Noticias'] = array(
    'name' => 'Publicador Noticias',
    'weight' => 3,
  );

  return $roles;
}
