<?php
/**
 * @file
 * mascotas_catalogo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mascotas_catalogo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mascotas_catalogo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mascotas_catalogo_image_default_styles() {
  $styles = array();

  // Exported image style: mascota-catalogo.
  $styles['mascota-catalogo'] = array(
    'name' => 'mascota-catalogo',
    'label' => 'mascota-catalogo',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mascota-principal.
  $styles['mascota-principal'] = array(
    'name' => 'mascota-principal',
    'label' => 'mascota-principal',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mascota-slider.
  $styles['mascota-slider'] = array(
    'name' => 'mascota-slider',
    'label' => 'mascota-slider',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mascotas_catalogo_node_info() {
  $items = array(
    'mascota' => array(
      'name' => t('Mascota'),
      'base' => 'node_content',
      'description' => t('Agregar Perro'),
      'has_title' => '1',
      'title_label' => t('Mascota'),
      'help' => '',
    ),
  );
  return $items;
}
