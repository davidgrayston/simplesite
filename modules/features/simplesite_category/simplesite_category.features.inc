<?php
/**
 * @file
 * simplesite_category.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simplesite_category_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}