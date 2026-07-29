// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/bms_data.h"


#ifndef MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DISCHARGING'.
/**
  * bit 0
 */
enum
{
  mir_msgs__msg__BMSData__DISCHARGING = 1l
};

/// Constant 'CHARGING'.
/**
  * bit 1
 */
enum
{
  mir_msgs__msg__BMSData__CHARGING = 2l
};

/// Constant 'OV'.
/**
  * bit 2 Over voltage
 */
enum
{
  mir_msgs__msg__BMSData__OV = 4l
};

/// Constant 'UV'.
/**
  * bit 3 Under voltage
 */
enum
{
  mir_msgs__msg__BMSData__UV = 8l
};

/// Constant 'COC'.
/**
  * bit 4 Charge over current
 */
enum
{
  mir_msgs__msg__BMSData__COC = 16l
};

/// Constant 'DOC'.
/**
  * bit 5 Discharge over current
 */
enum
{
  mir_msgs__msg__BMSData__DOC = 32l
};

/// Constant 'DOT'.
/**
  * bit 6 Discharge over temperature
 */
enum
{
  mir_msgs__msg__BMSData__DOT = 64l
};

/// Constant 'DUT'.
/**
  * bit 7 Discharge under temperature
 */
enum
{
  mir_msgs__msg__BMSData__DUT = 128l
};

/// Constant 'SC'.
/**
  * bit 9
 */
enum
{
  mir_msgs__msg__BMSData__SC = 512l
};

/// Constant 'COT'.
/**
  * bit 10 Charge over temperature
 */
enum
{
  mir_msgs__msg__BMSData__COT = 1024l
};

/// Constant 'CUT'.
/**
  * bit 11 Charge under temperature
 */
enum
{
  mir_msgs__msg__BMSData__CUT = 2048l
};

/// Constant 'FW_STATUS_MSK'.
/**
  * to get Battery_Firmware_Status  do the following:
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_MSK = 2031616l
};

/// Constant 'FW_STATUS_SHIFT'.
/**
  * batt_fw_stat=(status_flags & FW_STATUS_MSK)>>FW_STATUS_SHIFT
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_SHIFT = 16l
};

/// Constant 'FW_UPD_OK'.
/**
  * Battery firmware update finished OK.
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_OK = 0l
};

/// Constant 'FW_UPD_RUNNING'.
/**
  * Battery firmware update running.
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_RUNNING = 1l
};

/// Constant 'FW_UPD_FAILED_BOOT'.
/**
  * Battery firmware update failed in Bootloader (Robot must not drive)
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_FAILED_BOOT = 2l
};

/// Constant 'FW_UPD_FAILED_APP'.
/**
  * Battery firmware update failed updating the application (Robot can drive with old FW)
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_FAILED_APP = 3l
};

/// Constant 'FW_UPD_FAILED_PARAM'.
/**
  * Battery firmware update failed uploading parameters (Robot can drive with old fw and parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_UPD_FAILED_PARAM = 4l
};

/// Constant 'FW_STATUS_LOW_BATT'.
/**
  * Battery firmware update skipped battery too low or high (Robot can drive with old parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_LOW_BATT = 5l
};

/// Constant 'FW_STATUS_FILE_CORRUPTED'.
/**
  * Battery firmware file corrupted (Robot can drive with old parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_FILE_CORRUPTED = 6l
};

/// Constant 'FW_STATUS_CURRENT_TO_HIGH'.
/**
  * Battery firmware file corrupted (Robot can drive with old parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_CURRENT_TO_HIGH = 7l
};

/// Constant 'FW_STATUS_NO_CAN'.
/**
  * Battery firmware update skipped no CAN communication (Robot can drive with old fw and parameters.)
 */
enum
{
  mir_msgs__msg__BMSData__FW_STATUS_NO_CAN = 8l
};

/// Constant 'FW_BATTERY_IMBALANCE_HIGH'.
/**
  * Battery firmware update is enforced and the battery will be shut off by the new firmware
 */
enum
{
  mir_msgs__msg__BMSData__FW_BATTERY_IMBALANCE_HIGH = 9l
};

/// Constant 'BATT_TYPE_UNKNOWN'.
/**
  * type is unknown / no communucation
 */
enum
{
  mir_msgs__msg__BMSData__BATT_TYPE_UNKNOWN = 0ul
};

/// Constant 'BATT_TYPE_BMZ'.
/**
  * BMZ battery
 */
enum
{
  mir_msgs__msg__BMSData__BATT_TYPE_BMZ = 1ul
};

/// Constant 'BATT_TYPE_WST'.
/**
  * WST battery
 */
enum
{
  mir_msgs__msg__BMSData__BATT_TYPE_WST = 2ul
};

/// Constant 'BATT_TYPE_SBS'.
/**
  * SBS battery
 */
enum
{
  mir_msgs__msg__BMSData__BATT_TYPE_SBS = 3ul
};

/// Constant 'BATT_TYPE_SBS_SLIDE'.
/**
  * SBS SLIDE battery
 */
enum
{
  mir_msgs__msg__BMSData__BATT_TYPE_SBS_SLIDE = 4ul
};

/// Constant 'BATT_TYPE_NO_BMS'.
/**
  * WST No BMS battery
 */
enum
{
  mir_msgs__msg__BMSData__BATT_TYPE_NO_BMS = 255ul
};

/// Constant 'SBS_INIT_STATE1'.
enum
{
  mir_msgs__msg__BMSData__SBS_INIT_STATE1 = 1ul
};

/// Constant 'SBS_INIT_STATE2'.
enum
{
  mir_msgs__msg__BMSData__SBS_INIT_STATE2 = 2ul
};

/// Constant 'SBS_INIT_STATE3'.
enum
{
  mir_msgs__msg__BMSData__SBS_INIT_STATE3 = 3ul
};

/// Constant 'SBS_INIT_STATE4'.
enum
{
  mir_msgs__msg__BMSData__SBS_INIT_STATE4 = 4ul
};

/// Constant 'SBS_IDLE'.
enum
{
  mir_msgs__msg__BMSData__SBS_IDLE = 5ul
};

/// Constant 'SBS_DISCHARGE'.
enum
{
  mir_msgs__msg__BMSData__SBS_DISCHARGE = 6ul
};

/// Constant 'SBS_CHARGE'.
enum
{
  mir_msgs__msg__BMSData__SBS_CHARGE = 7ul
};

/// Constant 'SBS_FAULT'.
enum
{
  mir_msgs__msg__BMSData__SBS_FAULT = 10ul
};

/// Constant 'SBS_CRITICAL_ERROR'.
enum
{
  mir_msgs__msg__BMSData__SBS_CRITICAL_ERROR = 11ul
};

/// Constant 'SBS_PREPARE_DEEPSLEEP'.
enum
{
  mir_msgs__msg__BMSData__SBS_PREPARE_DEEPSLEEP = 99ul
};

/// Constant 'SBS_DEEPSLEEP'.
enum
{
  mir_msgs__msg__BMSData__SBS_DEEPSLEEP = 100ul
};

// Include directives for member types
// Member 'cell_voltage'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'wst_serial'
// Member 'sbs_serial_1'
// Member 'sbs_serial_2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BMSData in the package mir_msgs.
typedef struct mir_msgs__msg__BMSData
{
  double pack_voltage;
  double charge_current;
  double discharge_current;
  double state_of_charge;
  double remaining_time_to_full_charge;
  int32_t remaining_capacity;
  int32_t state_of_health;
  int32_t status_flags;
  int32_t temperature;
  /// In Mk2 robots and above the BMS provides data for 8 battery cells. 2Gen robots have BMS for 13 battery cells
  rosidl_runtime_c__uint32__Sequence cell_voltage;
  uint32_t cell_voltage_diff;
  rosidl_runtime_c__String wst_serial;
  /// Exteded diagnosticts for BMZ battery
  /// Flag for enabling extended diagnosticts
  uint32_t bmz_flag;
  uint32_t battery_type;
  double full_voltage;
  int32_t full_capacity;
  int32_t temperature2;
  int32_t temperature_pcb;
  int32_t cycle_count;
  int32_t dsg_overcurrent_counter;
  int32_t chg_overcurrent_counter;
  int32_t hw_major;
  int32_t hw_minor;
  int32_t fw_major;
  int32_t fw_minor;
  int32_t fw_patch;
  int32_t fw_parameters_ok;
  int32_t rec_fw_major;
  int32_t rec_fw_minor;
  int32_t rec_fw_patch;
  int32_t bl_major;
  int32_t bl_minor;
  uint32_t status_enabled;
  uint32_t status_current_limitation;
  uint32_t status_switch_off_warn1;
  uint32_t status_switch_off_warn2;
  uint32_t status_fully_discharged;
  uint32_t status_nearly_discharged;
  uint32_t status_chargefet_on;
  uint32_t status_dischargefet_on;
  uint32_t status_discharging;
  uint32_t status_fully_charged;
  uint32_t status_charging;
  uint32_t status_temp_charging_err;
  uint32_t status_cell_over_voltage;
  uint32_t status_cell_under_voltage;
  uint32_t status_charge_over_current;
  uint32_t status_shortcircuit;
  uint32_t status_discharge_over_current;
  double status_chargefet_voltage;
  double status_dischargefet_voltage;
  uint32_t status_temp_discharging_err;
  uint32_t status_charger_detected;
  uint32_t mnfct_bms_revision;
  uint32_t mnfct_asn_revision;
  uint32_t mnfct_year;
  uint32_t mnfct_week;
  uint32_t mnfct_model;
  uint32_t mnfct_serial;
  uint32_t afe_i2c_error_count;
  uint32_t app_error_count;
  uint32_t fet_disable_state;
  double last_battery_msg_time;
  /// SBS battery states
  uint32_t sbs_battery_status;
  uint32_t sbs_battery_status_raw;
  rosidl_runtime_c__String sbs_serial_1;
  rosidl_runtime_c__String sbs_serial_2;
  uint32_t sbs_arti_nr_1;
  uint32_t sbs_arti_nr_2;
  uint32_t sbs_arti_nr_3;
  uint32_t sbs_curr_flow_passive_state;
  /// Overcurrent counters
  uint8_t chg_oc1_count;
  uint8_t chg_oc2_count;
  uint8_t dsg_oc1_count;
  uint8_t dsg_oc2_count;
  uint8_t dsg_oc3_count;
  uint8_t afe_oc1_count;
  uint8_t afe_oc2_count;
  uint8_t chg_latch_clear_count;
  uint8_t dsg_latch_clear_count;
  uint8_t chg_oc_warning;
  uint8_t dsg_oc_warning;
} mir_msgs__msg__BMSData;

// Struct for a sequence of mir_msgs__msg__BMSData.
typedef struct mir_msgs__msg__BMSData__Sequence
{
  mir_msgs__msg__BMSData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__BMSData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_H_
