<?php
/**
 * @file
 * gaather_clubs_listing.features.inc
 */

/**
 * Implements hook_views_api().
 */
function gaather_clubs_listing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gaather_clubs_listing_node_info() {
  $items = array(
    'clubs' => array(
      'name' => t('Clubs'),
      'base' => 'node_content',
      'description' => t('Clubs Details'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
