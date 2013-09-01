<?php
/**
 * @file
 * noticias.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function noticias_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function noticias_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function noticias_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Noticia'),
      'help' => '',
    ),
  );
  return $items;
}
