// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/bms_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__BMSData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x7d, 0xab, 0x43, 0x7a, 0x81, 0x3e, 0x8a,
      0xc8, 0x8c, 0x1b, 0x27, 0x43, 0x4f, 0x43, 0x9d,
      0x69, 0xb1, 0xa7, 0x7c, 0xd0, 0x7e, 0xb2, 0xf0,
      0xa9, 0x2e, 0x8a, 0x25, 0x7f, 0x4e, 0x28, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__BMSData__TYPE_NAME[] = "mir_msgs/msg/BMSData";

// Define type names, field names, and default values
static char mir_msgs__msg__BMSData__FIELD_NAME__pack_voltage[] = "pack_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__charge_current[] = "charge_current";
static char mir_msgs__msg__BMSData__FIELD_NAME__discharge_current[] = "discharge_current";
static char mir_msgs__msg__BMSData__FIELD_NAME__state_of_charge[] = "state_of_charge";
static char mir_msgs__msg__BMSData__FIELD_NAME__remaining_time_to_full_charge[] = "remaining_time_to_full_charge";
static char mir_msgs__msg__BMSData__FIELD_NAME__remaining_capacity[] = "remaining_capacity";
static char mir_msgs__msg__BMSData__FIELD_NAME__state_of_health[] = "state_of_health";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_flags[] = "status_flags";
static char mir_msgs__msg__BMSData__FIELD_NAME__temperature[] = "temperature";
static char mir_msgs__msg__BMSData__FIELD_NAME__cell_voltage[] = "cell_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__cell_voltage_diff[] = "cell_voltage_diff";
static char mir_msgs__msg__BMSData__FIELD_NAME__wst_serial[] = "wst_serial";
static char mir_msgs__msg__BMSData__FIELD_NAME__bmz_flag[] = "bmz_flag";
static char mir_msgs__msg__BMSData__FIELD_NAME__battery_type[] = "battery_type";
static char mir_msgs__msg__BMSData__FIELD_NAME__full_voltage[] = "full_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__full_capacity[] = "full_capacity";
static char mir_msgs__msg__BMSData__FIELD_NAME__temperature2[] = "temperature2";
static char mir_msgs__msg__BMSData__FIELD_NAME__temperature_pcb[] = "temperature_pcb";
static char mir_msgs__msg__BMSData__FIELD_NAME__cycle_count[] = "cycle_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__dsg_overcurrent_counter[] = "dsg_overcurrent_counter";
static char mir_msgs__msg__BMSData__FIELD_NAME__chg_overcurrent_counter[] = "chg_overcurrent_counter";
static char mir_msgs__msg__BMSData__FIELD_NAME__hw_major[] = "hw_major";
static char mir_msgs__msg__BMSData__FIELD_NAME__hw_minor[] = "hw_minor";
static char mir_msgs__msg__BMSData__FIELD_NAME__fw_major[] = "fw_major";
static char mir_msgs__msg__BMSData__FIELD_NAME__fw_minor[] = "fw_minor";
static char mir_msgs__msg__BMSData__FIELD_NAME__fw_patch[] = "fw_patch";
static char mir_msgs__msg__BMSData__FIELD_NAME__fw_parameters_ok[] = "fw_parameters_ok";
static char mir_msgs__msg__BMSData__FIELD_NAME__rec_fw_major[] = "rec_fw_major";
static char mir_msgs__msg__BMSData__FIELD_NAME__rec_fw_minor[] = "rec_fw_minor";
static char mir_msgs__msg__BMSData__FIELD_NAME__rec_fw_patch[] = "rec_fw_patch";
static char mir_msgs__msg__BMSData__FIELD_NAME__bl_major[] = "bl_major";
static char mir_msgs__msg__BMSData__FIELD_NAME__bl_minor[] = "bl_minor";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_enabled[] = "status_enabled";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_current_limitation[] = "status_current_limitation";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_switch_off_warn1[] = "status_switch_off_warn1";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_switch_off_warn2[] = "status_switch_off_warn2";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_fully_discharged[] = "status_fully_discharged";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_nearly_discharged[] = "status_nearly_discharged";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_chargefet_on[] = "status_chargefet_on";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_dischargefet_on[] = "status_dischargefet_on";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_discharging[] = "status_discharging";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_fully_charged[] = "status_fully_charged";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_charging[] = "status_charging";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_temp_charging_err[] = "status_temp_charging_err";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_cell_over_voltage[] = "status_cell_over_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_cell_under_voltage[] = "status_cell_under_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_charge_over_current[] = "status_charge_over_current";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_shortcircuit[] = "status_shortcircuit";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_discharge_over_current[] = "status_discharge_over_current";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_chargefet_voltage[] = "status_chargefet_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_dischargefet_voltage[] = "status_dischargefet_voltage";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_temp_discharging_err[] = "status_temp_discharging_err";
static char mir_msgs__msg__BMSData__FIELD_NAME__status_charger_detected[] = "status_charger_detected";
static char mir_msgs__msg__BMSData__FIELD_NAME__mnfct_bms_revision[] = "mnfct_bms_revision";
static char mir_msgs__msg__BMSData__FIELD_NAME__mnfct_asn_revision[] = "mnfct_asn_revision";
static char mir_msgs__msg__BMSData__FIELD_NAME__mnfct_year[] = "mnfct_year";
static char mir_msgs__msg__BMSData__FIELD_NAME__mnfct_week[] = "mnfct_week";
static char mir_msgs__msg__BMSData__FIELD_NAME__mnfct_model[] = "mnfct_model";
static char mir_msgs__msg__BMSData__FIELD_NAME__mnfct_serial[] = "mnfct_serial";
static char mir_msgs__msg__BMSData__FIELD_NAME__afe_i2c_error_count[] = "afe_i2c_error_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__app_error_count[] = "app_error_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__fet_disable_state[] = "fet_disable_state";
static char mir_msgs__msg__BMSData__FIELD_NAME__last_battery_msg_time[] = "last_battery_msg_time";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_battery_status[] = "sbs_battery_status";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_battery_status_raw[] = "sbs_battery_status_raw";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_serial_1[] = "sbs_serial_1";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_serial_2[] = "sbs_serial_2";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_arti_nr_1[] = "sbs_arti_nr_1";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_arti_nr_2[] = "sbs_arti_nr_2";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_arti_nr_3[] = "sbs_arti_nr_3";
static char mir_msgs__msg__BMSData__FIELD_NAME__sbs_curr_flow_passive_state[] = "sbs_curr_flow_passive_state";
static char mir_msgs__msg__BMSData__FIELD_NAME__chg_oc1_count[] = "chg_oc1_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__chg_oc2_count[] = "chg_oc2_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc1_count[] = "dsg_oc1_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc2_count[] = "dsg_oc2_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc3_count[] = "dsg_oc3_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__afe_oc1_count[] = "afe_oc1_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__afe_oc2_count[] = "afe_oc2_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__chg_latch_clear_count[] = "chg_latch_clear_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__dsg_latch_clear_count[] = "dsg_latch_clear_count";
static char mir_msgs__msg__BMSData__FIELD_NAME__chg_oc_warning[] = "chg_oc_warning";
static char mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc_warning[] = "dsg_oc_warning";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__BMSData__FIELDS[] = {
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__pack_voltage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__charge_current, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__discharge_current, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__state_of_charge, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__remaining_time_to_full_charge, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__remaining_capacity, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__state_of_health, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_flags, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__cell_voltage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__cell_voltage_diff, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__wst_serial, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__bmz_flag, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__battery_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__full_voltage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__full_capacity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__temperature2, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__temperature_pcb, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__cycle_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__dsg_overcurrent_counter, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__chg_overcurrent_counter, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__hw_major, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__hw_minor, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__fw_major, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__fw_minor, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__fw_patch, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__fw_parameters_ok, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__rec_fw_major, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__rec_fw_minor, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__rec_fw_patch, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__bl_major, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__bl_minor, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_enabled, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_current_limitation, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_switch_off_warn1, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_switch_off_warn2, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_fully_discharged, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_nearly_discharged, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_chargefet_on, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_dischargefet_on, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_discharging, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_fully_charged, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_charging, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_temp_charging_err, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_cell_over_voltage, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_cell_under_voltage, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_charge_over_current, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_shortcircuit, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_discharge_over_current, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_chargefet_voltage, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_dischargefet_voltage, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_temp_discharging_err, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__status_charger_detected, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__mnfct_bms_revision, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__mnfct_asn_revision, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__mnfct_year, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__mnfct_week, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__mnfct_model, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__mnfct_serial, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__afe_i2c_error_count, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__app_error_count, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__fet_disable_state, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__last_battery_msg_time, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_battery_status, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_battery_status_raw, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_serial_1, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_serial_2, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_arti_nr_1, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_arti_nr_2, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_arti_nr_3, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__sbs_curr_flow_passive_state, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__chg_oc1_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__chg_oc2_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc1_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc2_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc3_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__afe_oc1_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__afe_oc2_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__chg_latch_clear_count, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__dsg_latch_clear_count, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__chg_oc_warning, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BMSData__FIELD_NAME__dsg_oc_warning, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__BMSData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__BMSData__TYPE_NAME, 20, 20},
      {mir_msgs__msg__BMSData__FIELDS, 82, 82},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 pack_voltage\n"
  "float64 charge_current\n"
  "float64 discharge_current\n"
  "float64 state_of_charge\n"
  "float64 remaining_time_to_full_charge\n"
  "int32 remaining_capacity\n"
  "int32 state_of_health\n"
  "int32 DISCHARGING=1 #bit 0\n"
  "int32 CHARGING=2    #bit 1\n"
  "int32 OV=4         #bit 2 Over voltage\n"
  "int32 UV=8          #bit 3 Under voltage\n"
  "int32 COC=16         #bit 4 Charge over current\n"
  "int32 DOC=32         #bit 5 Discharge over current\n"
  "int32 DOT=64         #bit 6 Discharge over temperature\n"
  "int32 DUT=128         #bit 7 Discharge under temperature\n"
  "int32  SC=512         #bit 9\n"
  "int32 COT=1024         #bit 10 Charge over temperature\n"
  "int32 CUT=2048         #bit 11 Charge under temperature\n"
  "int32 FW_STATUS_MSK=2031616 # to get Battery_Firmware_Status  do the following:\n"
  "int32 FW_STATUS_SHIFT=16    # batt_fw_stat=(status_flags & FW_STATUS_MSK)>>FW_STATUS_SHIFT\n"
  "int32 FW_UPD_OK=0                  #Battery firmware update finished OK.\n"
  "int32 FW_UPD_RUNNING=1             #Battery firmware update running.\n"
  "int32 FW_UPD_FAILED_BOOT=2         #Battery firmware update failed in Bootloader (Robot must not drive)\n"
  "int32 FW_UPD_FAILED_APP=3          #Battery firmware update failed updating the application (Robot can drive with old FW)\n"
  "int32 FW_UPD_FAILED_PARAM=4        #Battery firmware update failed uploading parameters (Robot can drive with old fw and parameters.)\n"
  "int32 FW_STATUS_LOW_BATT=5         #Battery firmware update skipped battery too low or high (Robot can drive with old parameters.)\n"
  "int32 FW_STATUS_FILE_CORRUPTED=6   #Battery firmware file corrupted (Robot can drive with old parameters.)\n"
  "int32 FW_STATUS_CURRENT_TO_HIGH=7  #Battery firmware file corrupted (Robot can drive with old parameters.)\n"
  "int32 FW_STATUS_NO_CAN=8           #Battery firmware update skipped no CAN communication (Robot can drive with old fw and parameters.)\n"
  "int32 FW_BATTERY_IMBALANCE_HIGH=9  #Battery firmware update is enforced and the battery will be shut off by the new firmware\n"
  "int32 status_flags\n"
  "int32 temperature\n"
  "uint32[] cell_voltage # In Mk2 robots and above the BMS provides data for 8 battery cells. 2Gen robots have BMS for 13 battery cells\n"
  "uint32 cell_voltage_diff\n"
  "\n"
  "string wst_serial\n"
  "\n"
  "# Exteded diagnosticts for BMZ battery\n"
  "uint32 bmz_flag # Flag for enabling extended diagnosticts\n"
  "uint32 battery_type\n"
  "uint32 BATT_TYPE_UNKNOWN=0      #type is unknown / no communucation\n"
  "uint32 BATT_TYPE_BMZ=1          #BMZ battery\n"
  "uint32 BATT_TYPE_WST=2          #WST battery\n"
  "uint32 BATT_TYPE_SBS=3          #SBS battery\n"
  "uint32 BATT_TYPE_SBS_SLIDE=4    #SBS SLIDE battery\n"
  "uint32 BATT_TYPE_NO_BMS=255       #WST No BMS battery\n"
  "float64 full_voltage\n"
  "int32 full_capacity\n"
  "int32 temperature2\n"
  "int32 temperature_pcb\n"
  "int32 cycle_count\n"
  "int32 dsg_overcurrent_counter\n"
  "int32 chg_overcurrent_counter\n"
  "int32 hw_major\n"
  "int32 hw_minor\n"
  "int32 fw_major\n"
  "int32 fw_minor\n"
  "int32 fw_patch\n"
  "int32 fw_parameters_ok\n"
  "int32 rec_fw_major\n"
  "int32 rec_fw_minor\n"
  "int32 rec_fw_patch\n"
  "int32 bl_major\n"
  "int32 bl_minor\n"
  "uint32 status_enabled\n"
  "uint32 status_current_limitation\n"
  "uint32 status_switch_off_warn1\n"
  "uint32 status_switch_off_warn2\n"
  "uint32 status_fully_discharged\n"
  "uint32 status_nearly_discharged\n"
  "uint32 status_chargefet_on\n"
  "uint32 status_dischargefet_on\n"
  "uint32 status_discharging\n"
  "uint32 status_fully_charged\n"
  "uint32 status_charging\n"
  "uint32 status_temp_charging_err\n"
  "uint32 status_cell_over_voltage\n"
  "uint32 status_cell_under_voltage\n"
  "uint32 status_charge_over_current\n"
  "uint32 status_shortcircuit\n"
  "uint32 status_discharge_over_current\n"
  "float64 status_chargefet_voltage\n"
  "float64 status_dischargefet_voltage\n"
  "uint32 status_temp_discharging_err\n"
  "uint32 status_charger_detected\n"
  "uint32 mnfct_bms_revision\n"
  "uint32 mnfct_asn_revision\n"
  "uint32 mnfct_year\n"
  "uint32 mnfct_week\n"
  "uint32 mnfct_model\n"
  "uint32 mnfct_serial\n"
  "uint32 afe_i2c_error_count\n"
  "uint32 app_error_count\n"
  "uint32 fet_disable_state\n"
  "\n"
  "float64 last_battery_msg_time\n"
  "\n"
  "# SBS battery states\n"
  "uint32 sbs_battery_status\n"
  "uint32 sbs_battery_status_raw\n"
  "uint32 SBS_INIT_STATE1=1\n"
  "uint32 SBS_INIT_STATE2=2\n"
  "uint32 SBS_INIT_STATE3=3\n"
  "uint32 SBS_INIT_STATE4=4\n"
  "uint32 SBS_IDLE=5\n"
  "uint32 SBS_DISCHARGE=6\n"
  "uint32 SBS_CHARGE=7\n"
  "uint32 SBS_FAULT=10\n"
  "uint32 SBS_CRITICAL_ERROR=11\n"
  "uint32 SBS_PREPARE_DEEPSLEEP=99\n"
  "uint32 SBS_DEEPSLEEP=100\n"
  "\n"
  "string sbs_serial_1\n"
  "string sbs_serial_2\n"
  "\n"
  "uint32 sbs_arti_nr_1\n"
  "uint32 sbs_arti_nr_2\n"
  "uint32 sbs_arti_nr_3\n"
  "\n"
  "uint32 sbs_curr_flow_passive_state\n"
  "\n"
  "# Overcurrent counters\n"
  "uint8 chg_oc1_count\n"
  "uint8 chg_oc2_count\n"
  "uint8 dsg_oc1_count\n"
  "uint8 dsg_oc2_count\n"
  "uint8 dsg_oc3_count\n"
  "uint8 afe_oc1_count\n"
  "uint8 afe_oc2_count\n"
  "uint8 chg_latch_clear_count\n"
  "uint8 dsg_latch_clear_count\n"
  "\n"
  "uint8 chg_oc_warning\n"
  "uint8 dsg_oc_warning";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__BMSData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__BMSData__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 4553, 4553},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__BMSData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__BMSData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
