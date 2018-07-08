<?php
/**
 * @file
 * vitrina.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vitrina_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vitrina';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vitrina';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vitrina';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Criterio de ordenación: Contenido: Fecha de modificación */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vitrina' => 'vitrina',
  );

  /* Display: Vitrina de la portada */
  $handler = $view->new_display('block', 'Vitrina de la portada', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'nothing';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Predeterminado',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_imagen' => 0,
    'field_texto' => 0,
    'title' => 0,
    'field_enlace' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_imagen' => 0,
    'field_texto' => 0,
    'title' => 0,
    'field_enlace' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nothing' => 'nothing',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'adaptive',
    'image_link' => '',
  );
  /* Campo: Contenido: Texto */
  $handler->display->display_options['fields']['field_texto']['id'] = 'field_texto';
  $handler->display->display_options['fields']['field_texto']['table'] = 'field_data_field_texto';
  $handler->display->display_options['fields']['field_texto']['field'] = 'field_texto';
  $handler->display->display_options['fields']['field_texto']['label'] = '';
  $handler->display->display_options['fields']['field_texto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_texto']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['field_enlace']['id'] = 'field_enlace';
  $handler->display->display_options['fields']['field_enlace']['table'] = 'field_data_field_enlace';
  $handler->display->display_options['fields']['field_enlace']['field'] = 'field_enlace';
  $handler->display->display_options['fields']['field_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace']['type'] = 'link_plain';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong><a href="[field_enlace]" title="Más información">[title]</a></strong><br />
[field_texto] 
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Vitrina de la portada';

  /* Display: Panel */
  $handler = $view->new_display('block', 'Panel', 'block_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Imagen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imagen']['delta_offset'] = '0';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: Texto */
  $handler->display->display_options['fields']['field_texto']['id'] = 'field_texto';
  $handler->display->display_options['fields']['field_texto']['table'] = 'field_data_field_texto';
  $handler->display->display_options['fields']['field_texto']['field'] = 'field_texto';
  $handler->display->display_options['fields']['field_texto']['label'] = '';
  $handler->display->display_options['fields']['field_texto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_texto']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Enlace de edición */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Editar';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Campo: Contenido: Fecha de modificación */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="panvitleft">
    [field_imagen]
</div>

<div class="panvitright">
    <strong>[title]</strong><br />
<p>[field_texto]</p>
</div>

<div id="panvitbotton">
    <strong>[edit_node]</strong>
     Actualizado en: [changed] 
</div>


';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Vitrina en panel';
  $translatables['vitrina'] = array(
    t('Master'),
    t('Vitrina'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Vitrina de la portada'),
    t('<strong><a href="[field_enlace]" title="Más información">[title]</a></strong><br />
[field_texto] 
'),
    t('Panel'),
    t('Editar'),
    t('<div id="panvitleft">
    [field_imagen]
</div>

<div class="panvitright">
    <strong>[title]</strong><br />
<p>[field_texto]</p>
</div>

<div id="panvitbotton">
    <strong>[edit_node]</strong>
     Actualizado en: [changed] 
</div>


'),
    t('Vitrina en panel'),
  );
  $export['vitrina'] = $view;

  return $export;
}
