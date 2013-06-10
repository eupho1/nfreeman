<?php
/**
 * @file
 * nfreeman_core.features.inc
 */

/**
 * Implements hook_views_api().
 */
function nfreeman_core_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nfreeman_core_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
