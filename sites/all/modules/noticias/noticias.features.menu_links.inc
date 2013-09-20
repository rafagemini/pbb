<?php
/**
 * @file
 * noticias.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function noticias_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:noticias
  $menu_links['main-menu:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Noticias');


  return $menu_links;
}
