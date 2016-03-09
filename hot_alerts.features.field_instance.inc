<?php
/**
 * @file
 * hot_alerts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_alerts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-hot_alerts-field_alert_type'.
  $field_instances['fieldable_panels_pane-hot_alerts-field_alert_type'] = array(
    'bundle' => 'hot_alerts',
    'default_value' => array(
      0 => array(
        'value' => 'alert-info',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_alert_type',
    'label' => 'Alert Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-hot_alerts-field_hs_alerts_description'.
  $field_instances['fieldable_panels_pane-hot_alerts-field_hs_alerts_description'] = array(
    'bundle' => 'hot_alerts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hs_alerts_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-hot_alerts-field_hs_alerts_options'.
  $field_instances['fieldable_panels_pane-hot_alerts-field_hs_alerts_options'] = array(
    'bundle' => 'hot_alerts',
    'default_value' => array(
      0 => array(
        'value' => 'fa',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hs_alerts_options',
    'label' => 'Options',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alert Type');
  t('Description');
  t('Options');

  return $field_instances;
}
