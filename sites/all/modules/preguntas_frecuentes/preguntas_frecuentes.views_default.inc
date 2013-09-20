<?php
/**
 * @file
 * preguntas_frecuentes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function preguntas_frecuentes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQ';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-faq-container';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Pregunta */
  $handler->display->display_options['fields']['field_pregunta']['id'] = 'field_pregunta';
  $handler->display->display_options['fields']['field_pregunta']['table'] = 'field_data_field_pregunta';
  $handler->display->display_options['fields']['field_pregunta']['field'] = 'field_pregunta';
  $handler->display->display_options['fields']['field_pregunta']['label'] = '';
  $handler->display->display_options['fields']['field_pregunta']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_pregunta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pregunta']['element_default_classes'] = FALSE;
  /* Field: Content: Respuesta */
  $handler->display->display_options['fields']['field_respuesta']['id'] = 'field_respuesta';
  $handler->display->display_options['fields']['field_respuesta']['table'] = 'field_data_field_respuesta';
  $handler->display->display_options['fields']['field_respuesta']['field'] = 'field_respuesta';
  $handler->display->display_options['fields']['field_respuesta']['label'] = '';
  $handler->display->display_options['fields']['field_respuesta']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_respuesta']['element_class'] = 'faq-answer';
  $handler->display->display_options['fields']['field_respuesta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_respuesta']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'faq';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FAQ';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['faq'] = $view;

  return $export;
}
