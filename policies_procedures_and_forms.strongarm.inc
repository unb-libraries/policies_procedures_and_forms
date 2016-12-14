<?php
/**
 * @file
 * policies_procedures_and_forms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function policies_procedures_and_forms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_policies_procedures_and_forms';
  $strongarm->value = 0;
  $export['comment_anonymous_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_policies_procedures_and_forms';
  $strongarm->value = 1;
  $export['comment_default_mode_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_policies_procedures_and_forms';
  $strongarm->value = '50';
  $export['comment_default_per_page_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_policies_procedures_and_forms';
  $strongarm->value = 1;
  $export['comment_form_location_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_policies_procedures_and_forms';
  $strongarm->value = '0';
  $export['comment_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_policies_procedures_and_forms';
  $strongarm->value = '1';
  $export['comment_preview_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_policies_procedures_and_forms';
  $strongarm->value = 1;
  $export['comment_subject_field_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_policies_procedures_and_forms';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_policies_procedures_and_forms';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_policies_procedures_and_forms';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_policies_procedures_and_forms';
  $strongarm->value = '1';
  $export['node_preview_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_policies_procedures_and_forms';
  $strongarm->value = 0;
  $export['node_submitted_policies_procedures_and_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_policies_procedures_and_forms_pattern';
  $strongarm->value = '';
  $export['pathauto_node_policies_procedures_and_forms_pattern'] = $strongarm;

  return $export;
}
