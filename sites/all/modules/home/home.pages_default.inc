<?php
/**
 * @file
 * home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_';
  $page->task = 'page';
  $page->admin_title = 'Home ';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 16,
          1 => 'main-row',
          2 => 1,
          3 => 8,
          4 => 9,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Slider',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 4,
          2 => 6,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '33.325901122340156',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'misi__n',
        ),
        'parent' => '2',
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => '33.32795403954729',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'valores',
        ),
        'parent' => '4',
        'class' => '',
      ),
      'valores' => array(
        'type' => 'region',
        'title' => 'Valores',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'column',
        'width' => '33.34614483811254',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 7,
        ),
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'objetivos',
        ),
        'parent' => '6',
        'class' => '',
      ),
      'objetivos' => array(
        'type' => 'region',
        'title' => 'Objetivos',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      'misi__n' => array(
        'type' => 'region',
        'title' => 'Misión',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'donar',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'donar' => array(
        'type' => 'region',
        'title' => 'Donar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 10,
          1 => 11,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      10 => array(
        'type' => 'column',
        'width' => '33.32604490871846',
        'width_type' => '%',
        'parent' => '9',
        'children' => array(
          0 => 13,
        ),
        'class' => '',
      ),
      11 => array(
        'type' => 'column',
        'width' => '66.673955091282',
        'width_type' => '%',
        'parent' => '9',
        'children' => array(
          0 => 14,
        ),
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'cont__ctenos_',
        ),
        'parent' => '10',
        'class' => '',
      ),
      'cont__ctenos_' => array(
        'type' => 'region',
        'title' => 'Contáctenos ',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'correo',
        ),
        'parent' => '11',
        'class' => '',
      ),
      'correo' => array(
        'type' => 'region',
        'title' => 'Correo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => '',
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'pbb_descripci__n',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'pbb_descripci__n' => array(
        'type' => 'region',
        'title' => 'PBB Descripción',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'valores' => NULL,
      'objetivos' => NULL,
      'misi__n' => NULL,
      'donar' => NULL,
      'cont__ctenos_' => NULL,
      'correo' => NULL,
      'noticias' => NULL,
      'pbb_descripci__n' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'cont__ctenos_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contáctenos',
      'title' => 'Contáctenos',
      'body' => '<p class=\'justificar\'>Para cualquier duda o información contáctenos.<p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['cont__ctenos_'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'correo';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Correo',
      'title' => 'Correo',
      'body' => 'aqui va el formulario para envio  de correos',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['correo'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'donar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Apóyanos',
      'title' => 'Apóyanos',
      'body' => '<p class=\'justificar\'>Puppies Behind Bars está financiado en su totalidad por las contribuciones privadas. Dependemos de la generosidad de nuestros donantes a continuar con nuestro trabajo.
 
Puppies Behind Bars es una organización sin fines de lucro (EIN # 13-3969389) como se describe en la sección 501 (c) (3) del Código de Rentas Internas. Las donaciones a Puppies detrás son deducibles de impuestos en la medida permitida por la ley.<p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['donar'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'misi__n';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Misión',
      'title' => 'Misión',
      'body' => '<div clas=\'img_mision\'><img src=\'\' alt=\'Misión\' /></div>
<p class=\'justificar\'>Puppies Behind Bars (PBB) capacita a los reclusos para elevar los perros de servicio para los veteranos de guerra heridos y caninos de detección de explosivos para la aplicación de la ley. Los cachorros entran prisión a la edad de las ocho semanas, y viven con su preso perrito de fondos por aproximadamente 20 meses. Como los cachorros maduran en perros muy querido y bien educados, los criadores de aprender lo que significa contribuir a la sociedad en lugar de tomar de ella. Programas PBB llevar el amor y la curación de los perros a cientos de personas cada año. Los perros llevan esperanza y orgullo a sus criadores, y la independencia y la seguridad de aquellos a quienes sirven.<p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['misi__n'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'objetivos';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Objetivos',
      'title' => 'Objetivos',
      'body' => '<div clas=\'img_objetivos\'><img src=\'\' alt=\'Objetivos\' /></div>
<p class=\'justificar\'>Nuestro objetivo es formar a los mejores perros de trabajo disponibles, para que los perros felices y sanos, para formar el preso perrito de fondos en el programa para ser guías de perros calificados, y para mantener una alta tasa de "graduación", con aproximadamente el 75% de nuestros perros pasando a llevar una vida de trabajo exitosos y productivos. (Los perros que no se gradúan son liberados para su aprobación.)<p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['objetivos'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'pbb_descripci__n';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class=\'descripcionPBB\'><span>PBB</span><p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.</p></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['pbb_descripci__n'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'valores';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Valores',
      'title' => 'Valores',
      'body' => '<div clas=\'img_valores\'><img src=\'\' alt=\'Valores\' /></div>
Integridad
Responsabilidad Social
Respeto por las Personas
Innovación
Enfoque por el Servicio',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['valores'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_'] = $page;

  return $pages;

}
