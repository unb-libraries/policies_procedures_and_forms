<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
  $url = '';
  $url_or_file = $row->field_field_url_or_upload_file[0]['raw']['value'];
  switch($url_or_file) {
    case 'URL':
      $url = $row->field_field_url[0]['raw']['value'];
    break;

    case 'File':
      $url = $row->field_field_file[0]['rendered']['#markup'];
    break;
  }
  $title = $row->node_title;
?>
<a href="<?php print $url; ?>" target="_blank"><?php print $title; ?></a>
