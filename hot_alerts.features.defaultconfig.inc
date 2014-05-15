<?php
/**
 * @file
 * hot_alerts.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_alerts_defaultconfig_features() {
  return array(
    'hot_alerts' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_alerts_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_alerts-field_alert_type'.
  $fields['fieldable_panels_pane-hot_alerts-field_alert_type'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_alert_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'alert-success' => 'Success',
          'alert-info' => 'Info',
          'alert-warning' => 'Warning',
          'alert-danger' => 'Danger',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
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
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_alerts-field_hs_alerts_description'.
  $fields['fieldable_panels_pane-hot_alerts-field_hs_alerts_description'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hs_alerts_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
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
        'weight' => 2,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alert Type');
  t('Description');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hot_alerts_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__hot_alerts';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__hot_alerts'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_alerts_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hot_alerts'.
  $permissions['create fieldable hot_alerts'] = array(
    'name' => 'create fieldable hot_alerts',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hot_alerts'.
  $permissions['delete fieldable hot_alerts'] = array(
    'name' => 'delete fieldable hot_alerts',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hot_alerts'.
  $permissions['edit fieldable hot_alerts'] = array(
    'name' => 'edit fieldable hot_alerts',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
