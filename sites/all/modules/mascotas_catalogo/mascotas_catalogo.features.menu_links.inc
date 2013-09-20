<?php
/**
 * @file
 * mascotas_catalogo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mascotas_catalogo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:catalogo
  $menu_links['main-menu:catalogo'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'catalogo',
    'router_path' => 'catalogo',
    'link_title' => 'Catalogo',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Catalogo');


  return $menu_links;
}
