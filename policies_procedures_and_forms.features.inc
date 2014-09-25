<?php
/**
 * @file
 * policies_procedures_and_forms.features.inc
 */

/**
 * Implements hook_views_api().
 */
function policies_procedures_and_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function policies_procedures_and_forms_node_info() {
  $items = array(
    'policies_procedures_and_forms' => array(
      'name' => t('Policies, Procedures, and Forms'),
      'base' => 'node_content',
      'description' => t('Creates an entry for Policies, Procedures and Forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
