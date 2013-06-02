<?php
/**
 * @file
 * simplesite_category_vocab.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simplesite_category_vocab_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}
