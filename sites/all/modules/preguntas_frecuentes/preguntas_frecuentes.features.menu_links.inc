<?php
/**
 * @file
 * preguntas_frecuentes.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function preguntas_frecuentes_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:faq
  $menu_links['main-menu:faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');


  return $menu_links;
}
