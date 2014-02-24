<?php
/**
 * @file
 * bean_text_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bean_text_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
