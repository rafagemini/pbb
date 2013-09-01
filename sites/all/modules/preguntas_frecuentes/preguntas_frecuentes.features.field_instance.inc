<?php
/**
 * @file
 * preguntas_frecuentes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function preguntas_frecuentes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-faq-field_pregunta'
  $field_instances['node-faq-field_pregunta'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Escriba la pregunta frecuente',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pregunta',
    'label' => 'Pregunta',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-faq-field_respuesta'
  $field_instances['node-faq-field_respuesta'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Escriba la Respuesta',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_respuesta',
    'label' => 'Respuesta',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Escriba la Respuesta');
  t('Escriba la pregunta frecuente');
  t('Pregunta');
  t('Respuesta');

  return $field_instances;
}
