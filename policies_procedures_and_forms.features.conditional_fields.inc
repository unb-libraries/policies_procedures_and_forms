<?php
/**
 * @file
 * policies_procedures_and_forms.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function policies_procedures_and_forms_conditional_fields_default_fields() {
  $items = array();

  $items["node:policies_procedures_and_forms:0"] = array(
    'entity' => 'node',
    'bundle' => 'policies_procedures_and_forms',
    'dependent' => 'field_file',
    'dependee' => 'field_url_or_upload_file',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        14 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        16 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        18 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        20 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        22 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        24 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        26 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        28 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        15 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        17 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        19 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        21 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        23 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        25 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        27 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        29 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        31 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        8 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        9 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        10 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        11 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        12 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        13 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        30 => array(
          1 => 1,
          3 => 0,
        ),
        14 => array(
          1 => 1,
          3 => 0,
        ),
        16 => array(
          1 => 1,
          3 => 0,
        ),
        18 => array(
          1 => 1,
          3 => 0,
        ),
        20 => array(
          1 => 1,
          3 => 0,
        ),
        22 => array(
          1 => 1,
          3 => 0,
        ),
        24 => array(
          1 => 1,
          3 => 0,
        ),
        26 => array(
          1 => 1,
          3 => 0,
        ),
        28 => array(
          1 => 1,
          3 => 0,
        ),
        15 => array(
          1 => 1,
          3 => 0,
        ),
        17 => array(
          1 => 1,
          3 => 0,
        ),
        19 => array(
          1 => 1,
          3 => 0,
        ),
        21 => array(
          1 => 1,
          3 => 0,
        ),
        23 => array(
          1 => 1,
          3 => 0,
        ),
        25 => array(
          1 => 1,
          3 => 0,
        ),
        27 => array(
          1 => 1,
          3 => 0,
        ),
        29 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
        31 => array(
          1 => 1,
          3 => 0,
        ),
        5 => array(
          1 => 1,
          3 => 0,
        ),
        6 => array(
          1 => 1,
          3 => 0,
        ),
        7 => array(
          1 => 1,
          3 => 0,
        ),
        8 => array(
          1 => 1,
          3 => 0,
        ),
        9 => array(
          1 => 1,
          3 => 0,
        ),
        10 => array(
          1 => 1,
          3 => 0,
        ),
        11 => array(
          1 => 1,
          3 => 0,
        ),
        12 => array(
          1 => 1,
          3 => 0,
        ),
        13 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'File',
      'value' => array(
        0 => array(
          'value' => 'File',
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:policies_procedures_and_forms:1"] = array(
    'entity' => 'node',
    'bundle' => 'policies_procedures_and_forms',
    'dependent' => 'field_url',
    'dependee' => 'field_url_or_upload_file',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        14 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        16 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        18 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        20 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        22 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        24 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        26 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        28 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        15 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        17 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        19 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        21 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        23 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        25 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        27 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        29 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        31 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        8 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        9 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        10 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        11 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        12 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        13 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        30 => array(
          1 => 1,
          3 => 0,
        ),
        14 => array(
          1 => 1,
          3 => 0,
        ),
        16 => array(
          1 => 1,
          3 => 0,
        ),
        18 => array(
          1 => 1,
          3 => 0,
        ),
        20 => array(
          1 => 1,
          3 => 0,
        ),
        22 => array(
          1 => 1,
          3 => 0,
        ),
        24 => array(
          1 => 1,
          3 => 0,
        ),
        26 => array(
          1 => 1,
          3 => 0,
        ),
        28 => array(
          1 => 1,
          3 => 0,
        ),
        15 => array(
          1 => 1,
          3 => 0,
        ),
        17 => array(
          1 => 1,
          3 => 0,
        ),
        19 => array(
          1 => 1,
          3 => 0,
        ),
        21 => array(
          1 => 1,
          3 => 0,
        ),
        23 => array(
          1 => 1,
          3 => 0,
        ),
        25 => array(
          1 => 1,
          3 => 0,
        ),
        27 => array(
          1 => 1,
          3 => 0,
        ),
        29 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
        31 => array(
          1 => 1,
          3 => 0,
        ),
        5 => array(
          1 => 1,
          3 => 0,
        ),
        6 => array(
          1 => 1,
          3 => 0,
        ),
        7 => array(
          1 => 1,
          3 => 0,
        ),
        8 => array(
          1 => 1,
          3 => 0,
        ),
        9 => array(
          1 => 1,
          3 => 0,
        ),
        10 => array(
          1 => 1,
          3 => 0,
        ),
        11 => array(
          1 => 1,
          3 => 0,
        ),
        12 => array(
          1 => 1,
          3 => 0,
        ),
        13 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'URL',
      'value' => array(
        0 => array(
          'value' => 'URL',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
