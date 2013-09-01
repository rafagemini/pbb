<?php
/**
 * @file
 * mascotas_catalogo.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mascotas_catalogo_user_default_roles() {
  $roles = array();

  // Exported role: Publicador Mascotas.
  $roles['Publicador Mascotas'] = array(
    'name' => 'Publicador Mascotas',
    'weight' => 4,
  );

  return $roles;
}
