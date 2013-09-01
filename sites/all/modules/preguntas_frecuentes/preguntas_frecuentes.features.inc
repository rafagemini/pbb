<?php
/**
 * @file
 * preguntas_frecuentes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function preguntas_frecuentes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function preguntas_frecuentes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function preguntas_frecuentes_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Escriba las preguntas y respuestas '),
      'has_title' => '1',
      'title_label' => t('FAQ'),
      'help' => '',
    ),
  );
  return $items;
}
