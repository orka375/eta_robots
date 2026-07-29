// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/bms_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/bms_data__struct.h"
#include "mir_msgs/msg/detail/bms_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // cell_voltage
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cell_voltage
#include "rosidl_runtime_c/string.h"  // sbs_serial_1, sbs_serial_2, wst_serial
#include "rosidl_runtime_c/string_functions.h"  // sbs_serial_1, sbs_serial_2, wst_serial

// forward declare type support functions


using _BMSData__ros_msg_type = mir_msgs__msg__BMSData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_mir_msgs__msg__BMSData(
  const mir_msgs__msg__BMSData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pack_voltage
  {
    cdr << ros_message->pack_voltage;
  }

  // Field name: charge_current
  {
    cdr << ros_message->charge_current;
  }

  // Field name: discharge_current
  {
    cdr << ros_message->discharge_current;
  }

  // Field name: state_of_charge
  {
    cdr << ros_message->state_of_charge;
  }

  // Field name: remaining_time_to_full_charge
  {
    cdr << ros_message->remaining_time_to_full_charge;
  }

  // Field name: remaining_capacity
  {
    cdr << ros_message->remaining_capacity;
  }

  // Field name: state_of_health
  {
    cdr << ros_message->state_of_health;
  }

  // Field name: status_flags
  {
    cdr << ros_message->status_flags;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: cell_voltage
  {
    size_t size = ros_message->cell_voltage.size;
    auto array_ptr = ros_message->cell_voltage.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: cell_voltage_diff
  {
    cdr << ros_message->cell_voltage_diff;
  }

  // Field name: wst_serial
  {
    const rosidl_runtime_c__String * str = &ros_message->wst_serial;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bmz_flag
  {
    cdr << ros_message->bmz_flag;
  }

  // Field name: battery_type
  {
    cdr << ros_message->battery_type;
  }

  // Field name: full_voltage
  {
    cdr << ros_message->full_voltage;
  }

  // Field name: full_capacity
  {
    cdr << ros_message->full_capacity;
  }

  // Field name: temperature2
  {
    cdr << ros_message->temperature2;
  }

  // Field name: temperature_pcb
  {
    cdr << ros_message->temperature_pcb;
  }

  // Field name: cycle_count
  {
    cdr << ros_message->cycle_count;
  }

  // Field name: dsg_overcurrent_counter
  {
    cdr << ros_message->dsg_overcurrent_counter;
  }

  // Field name: chg_overcurrent_counter
  {
    cdr << ros_message->chg_overcurrent_counter;
  }

  // Field name: hw_major
  {
    cdr << ros_message->hw_major;
  }

  // Field name: hw_minor
  {
    cdr << ros_message->hw_minor;
  }

  // Field name: fw_major
  {
    cdr << ros_message->fw_major;
  }

  // Field name: fw_minor
  {
    cdr << ros_message->fw_minor;
  }

  // Field name: fw_patch
  {
    cdr << ros_message->fw_patch;
  }

  // Field name: fw_parameters_ok
  {
    cdr << ros_message->fw_parameters_ok;
  }

  // Field name: rec_fw_major
  {
    cdr << ros_message->rec_fw_major;
  }

  // Field name: rec_fw_minor
  {
    cdr << ros_message->rec_fw_minor;
  }

  // Field name: rec_fw_patch
  {
    cdr << ros_message->rec_fw_patch;
  }

  // Field name: bl_major
  {
    cdr << ros_message->bl_major;
  }

  // Field name: bl_minor
  {
    cdr << ros_message->bl_minor;
  }

  // Field name: status_enabled
  {
    cdr << ros_message->status_enabled;
  }

  // Field name: status_current_limitation
  {
    cdr << ros_message->status_current_limitation;
  }

  // Field name: status_switch_off_warn1
  {
    cdr << ros_message->status_switch_off_warn1;
  }

  // Field name: status_switch_off_warn2
  {
    cdr << ros_message->status_switch_off_warn2;
  }

  // Field name: status_fully_discharged
  {
    cdr << ros_message->status_fully_discharged;
  }

  // Field name: status_nearly_discharged
  {
    cdr << ros_message->status_nearly_discharged;
  }

  // Field name: status_chargefet_on
  {
    cdr << ros_message->status_chargefet_on;
  }

  // Field name: status_dischargefet_on
  {
    cdr << ros_message->status_dischargefet_on;
  }

  // Field name: status_discharging
  {
    cdr << ros_message->status_discharging;
  }

  // Field name: status_fully_charged
  {
    cdr << ros_message->status_fully_charged;
  }

  // Field name: status_charging
  {
    cdr << ros_message->status_charging;
  }

  // Field name: status_temp_charging_err
  {
    cdr << ros_message->status_temp_charging_err;
  }

  // Field name: status_cell_over_voltage
  {
    cdr << ros_message->status_cell_over_voltage;
  }

  // Field name: status_cell_under_voltage
  {
    cdr << ros_message->status_cell_under_voltage;
  }

  // Field name: status_charge_over_current
  {
    cdr << ros_message->status_charge_over_current;
  }

  // Field name: status_shortcircuit
  {
    cdr << ros_message->status_shortcircuit;
  }

  // Field name: status_discharge_over_current
  {
    cdr << ros_message->status_discharge_over_current;
  }

  // Field name: status_chargefet_voltage
  {
    cdr << ros_message->status_chargefet_voltage;
  }

  // Field name: status_dischargefet_voltage
  {
    cdr << ros_message->status_dischargefet_voltage;
  }

  // Field name: status_temp_discharging_err
  {
    cdr << ros_message->status_temp_discharging_err;
  }

  // Field name: status_charger_detected
  {
    cdr << ros_message->status_charger_detected;
  }

  // Field name: mnfct_bms_revision
  {
    cdr << ros_message->mnfct_bms_revision;
  }

  // Field name: mnfct_asn_revision
  {
    cdr << ros_message->mnfct_asn_revision;
  }

  // Field name: mnfct_year
  {
    cdr << ros_message->mnfct_year;
  }

  // Field name: mnfct_week
  {
    cdr << ros_message->mnfct_week;
  }

  // Field name: mnfct_model
  {
    cdr << ros_message->mnfct_model;
  }

  // Field name: mnfct_serial
  {
    cdr << ros_message->mnfct_serial;
  }

  // Field name: afe_i2c_error_count
  {
    cdr << ros_message->afe_i2c_error_count;
  }

  // Field name: app_error_count
  {
    cdr << ros_message->app_error_count;
  }

  // Field name: fet_disable_state
  {
    cdr << ros_message->fet_disable_state;
  }

  // Field name: last_battery_msg_time
  {
    cdr << ros_message->last_battery_msg_time;
  }

  // Field name: sbs_battery_status
  {
    cdr << ros_message->sbs_battery_status;
  }

  // Field name: sbs_battery_status_raw
  {
    cdr << ros_message->sbs_battery_status_raw;
  }

  // Field name: sbs_serial_1
  {
    const rosidl_runtime_c__String * str = &ros_message->sbs_serial_1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sbs_serial_2
  {
    const rosidl_runtime_c__String * str = &ros_message->sbs_serial_2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sbs_arti_nr_1
  {
    cdr << ros_message->sbs_arti_nr_1;
  }

  // Field name: sbs_arti_nr_2
  {
    cdr << ros_message->sbs_arti_nr_2;
  }

  // Field name: sbs_arti_nr_3
  {
    cdr << ros_message->sbs_arti_nr_3;
  }

  // Field name: sbs_curr_flow_passive_state
  {
    cdr << ros_message->sbs_curr_flow_passive_state;
  }

  // Field name: chg_oc1_count
  {
    cdr << ros_message->chg_oc1_count;
  }

  // Field name: chg_oc2_count
  {
    cdr << ros_message->chg_oc2_count;
  }

  // Field name: dsg_oc1_count
  {
    cdr << ros_message->dsg_oc1_count;
  }

  // Field name: dsg_oc2_count
  {
    cdr << ros_message->dsg_oc2_count;
  }

  // Field name: dsg_oc3_count
  {
    cdr << ros_message->dsg_oc3_count;
  }

  // Field name: afe_oc1_count
  {
    cdr << ros_message->afe_oc1_count;
  }

  // Field name: afe_oc2_count
  {
    cdr << ros_message->afe_oc2_count;
  }

  // Field name: chg_latch_clear_count
  {
    cdr << ros_message->chg_latch_clear_count;
  }

  // Field name: dsg_latch_clear_count
  {
    cdr << ros_message->dsg_latch_clear_count;
  }

  // Field name: chg_oc_warning
  {
    cdr << ros_message->chg_oc_warning;
  }

  // Field name: dsg_oc_warning
  {
    cdr << ros_message->dsg_oc_warning;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_deserialize_mir_msgs__msg__BMSData(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__BMSData * ros_message)
{
  // Field name: pack_voltage
  {
    cdr >> ros_message->pack_voltage;
  }

  // Field name: charge_current
  {
    cdr >> ros_message->charge_current;
  }

  // Field name: discharge_current
  {
    cdr >> ros_message->discharge_current;
  }

  // Field name: state_of_charge
  {
    cdr >> ros_message->state_of_charge;
  }

  // Field name: remaining_time_to_full_charge
  {
    cdr >> ros_message->remaining_time_to_full_charge;
  }

  // Field name: remaining_capacity
  {
    cdr >> ros_message->remaining_capacity;
  }

  // Field name: state_of_health
  {
    cdr >> ros_message->state_of_health;
  }

  // Field name: status_flags
  {
    cdr >> ros_message->status_flags;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: cell_voltage
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->cell_voltage.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->cell_voltage);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->cell_voltage, size)) {
      fprintf(stderr, "failed to create array for field 'cell_voltage'");
      return false;
    }
    auto array_ptr = ros_message->cell_voltage.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: cell_voltage_diff
  {
    cdr >> ros_message->cell_voltage_diff;
  }

  // Field name: wst_serial
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wst_serial.data) {
      rosidl_runtime_c__String__init(&ros_message->wst_serial);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wst_serial,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wst_serial'\n");
      return false;
    }
  }

  // Field name: bmz_flag
  {
    cdr >> ros_message->bmz_flag;
  }

  // Field name: battery_type
  {
    cdr >> ros_message->battery_type;
  }

  // Field name: full_voltage
  {
    cdr >> ros_message->full_voltage;
  }

  // Field name: full_capacity
  {
    cdr >> ros_message->full_capacity;
  }

  // Field name: temperature2
  {
    cdr >> ros_message->temperature2;
  }

  // Field name: temperature_pcb
  {
    cdr >> ros_message->temperature_pcb;
  }

  // Field name: cycle_count
  {
    cdr >> ros_message->cycle_count;
  }

  // Field name: dsg_overcurrent_counter
  {
    cdr >> ros_message->dsg_overcurrent_counter;
  }

  // Field name: chg_overcurrent_counter
  {
    cdr >> ros_message->chg_overcurrent_counter;
  }

  // Field name: hw_major
  {
    cdr >> ros_message->hw_major;
  }

  // Field name: hw_minor
  {
    cdr >> ros_message->hw_minor;
  }

  // Field name: fw_major
  {
    cdr >> ros_message->fw_major;
  }

  // Field name: fw_minor
  {
    cdr >> ros_message->fw_minor;
  }

  // Field name: fw_patch
  {
    cdr >> ros_message->fw_patch;
  }

  // Field name: fw_parameters_ok
  {
    cdr >> ros_message->fw_parameters_ok;
  }

  // Field name: rec_fw_major
  {
    cdr >> ros_message->rec_fw_major;
  }

  // Field name: rec_fw_minor
  {
    cdr >> ros_message->rec_fw_minor;
  }

  // Field name: rec_fw_patch
  {
    cdr >> ros_message->rec_fw_patch;
  }

  // Field name: bl_major
  {
    cdr >> ros_message->bl_major;
  }

  // Field name: bl_minor
  {
    cdr >> ros_message->bl_minor;
  }

  // Field name: status_enabled
  {
    cdr >> ros_message->status_enabled;
  }

  // Field name: status_current_limitation
  {
    cdr >> ros_message->status_current_limitation;
  }

  // Field name: status_switch_off_warn1
  {
    cdr >> ros_message->status_switch_off_warn1;
  }

  // Field name: status_switch_off_warn2
  {
    cdr >> ros_message->status_switch_off_warn2;
  }

  // Field name: status_fully_discharged
  {
    cdr >> ros_message->status_fully_discharged;
  }

  // Field name: status_nearly_discharged
  {
    cdr >> ros_message->status_nearly_discharged;
  }

  // Field name: status_chargefet_on
  {
    cdr >> ros_message->status_chargefet_on;
  }

  // Field name: status_dischargefet_on
  {
    cdr >> ros_message->status_dischargefet_on;
  }

  // Field name: status_discharging
  {
    cdr >> ros_message->status_discharging;
  }

  // Field name: status_fully_charged
  {
    cdr >> ros_message->status_fully_charged;
  }

  // Field name: status_charging
  {
    cdr >> ros_message->status_charging;
  }

  // Field name: status_temp_charging_err
  {
    cdr >> ros_message->status_temp_charging_err;
  }

  // Field name: status_cell_over_voltage
  {
    cdr >> ros_message->status_cell_over_voltage;
  }

  // Field name: status_cell_under_voltage
  {
    cdr >> ros_message->status_cell_under_voltage;
  }

  // Field name: status_charge_over_current
  {
    cdr >> ros_message->status_charge_over_current;
  }

  // Field name: status_shortcircuit
  {
    cdr >> ros_message->status_shortcircuit;
  }

  // Field name: status_discharge_over_current
  {
    cdr >> ros_message->status_discharge_over_current;
  }

  // Field name: status_chargefet_voltage
  {
    cdr >> ros_message->status_chargefet_voltage;
  }

  // Field name: status_dischargefet_voltage
  {
    cdr >> ros_message->status_dischargefet_voltage;
  }

  // Field name: status_temp_discharging_err
  {
    cdr >> ros_message->status_temp_discharging_err;
  }

  // Field name: status_charger_detected
  {
    cdr >> ros_message->status_charger_detected;
  }

  // Field name: mnfct_bms_revision
  {
    cdr >> ros_message->mnfct_bms_revision;
  }

  // Field name: mnfct_asn_revision
  {
    cdr >> ros_message->mnfct_asn_revision;
  }

  // Field name: mnfct_year
  {
    cdr >> ros_message->mnfct_year;
  }

  // Field name: mnfct_week
  {
    cdr >> ros_message->mnfct_week;
  }

  // Field name: mnfct_model
  {
    cdr >> ros_message->mnfct_model;
  }

  // Field name: mnfct_serial
  {
    cdr >> ros_message->mnfct_serial;
  }

  // Field name: afe_i2c_error_count
  {
    cdr >> ros_message->afe_i2c_error_count;
  }

  // Field name: app_error_count
  {
    cdr >> ros_message->app_error_count;
  }

  // Field name: fet_disable_state
  {
    cdr >> ros_message->fet_disable_state;
  }

  // Field name: last_battery_msg_time
  {
    cdr >> ros_message->last_battery_msg_time;
  }

  // Field name: sbs_battery_status
  {
    cdr >> ros_message->sbs_battery_status;
  }

  // Field name: sbs_battery_status_raw
  {
    cdr >> ros_message->sbs_battery_status_raw;
  }

  // Field name: sbs_serial_1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sbs_serial_1.data) {
      rosidl_runtime_c__String__init(&ros_message->sbs_serial_1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sbs_serial_1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sbs_serial_1'\n");
      return false;
    }
  }

  // Field name: sbs_serial_2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sbs_serial_2.data) {
      rosidl_runtime_c__String__init(&ros_message->sbs_serial_2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sbs_serial_2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sbs_serial_2'\n");
      return false;
    }
  }

  // Field name: sbs_arti_nr_1
  {
    cdr >> ros_message->sbs_arti_nr_1;
  }

  // Field name: sbs_arti_nr_2
  {
    cdr >> ros_message->sbs_arti_nr_2;
  }

  // Field name: sbs_arti_nr_3
  {
    cdr >> ros_message->sbs_arti_nr_3;
  }

  // Field name: sbs_curr_flow_passive_state
  {
    cdr >> ros_message->sbs_curr_flow_passive_state;
  }

  // Field name: chg_oc1_count
  {
    cdr >> ros_message->chg_oc1_count;
  }

  // Field name: chg_oc2_count
  {
    cdr >> ros_message->chg_oc2_count;
  }

  // Field name: dsg_oc1_count
  {
    cdr >> ros_message->dsg_oc1_count;
  }

  // Field name: dsg_oc2_count
  {
    cdr >> ros_message->dsg_oc2_count;
  }

  // Field name: dsg_oc3_count
  {
    cdr >> ros_message->dsg_oc3_count;
  }

  // Field name: afe_oc1_count
  {
    cdr >> ros_message->afe_oc1_count;
  }

  // Field name: afe_oc2_count
  {
    cdr >> ros_message->afe_oc2_count;
  }

  // Field name: chg_latch_clear_count
  {
    cdr >> ros_message->chg_latch_clear_count;
  }

  // Field name: dsg_latch_clear_count
  {
    cdr >> ros_message->dsg_latch_clear_count;
  }

  // Field name: chg_oc_warning
  {
    cdr >> ros_message->chg_oc_warning;
  }

  // Field name: dsg_oc_warning
  {
    cdr >> ros_message->dsg_oc_warning;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__BMSData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BMSData__ros_msg_type * ros_message = static_cast<const _BMSData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pack_voltage
  {
    size_t item_size = sizeof(ros_message->pack_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: charge_current
  {
    size_t item_size = sizeof(ros_message->charge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: discharge_current
  {
    size_t item_size = sizeof(ros_message->discharge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_of_charge
  {
    size_t item_size = sizeof(ros_message->state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remaining_time_to_full_charge
  {
    size_t item_size = sizeof(ros_message->remaining_time_to_full_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remaining_capacity
  {
    size_t item_size = sizeof(ros_message->remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_of_health
  {
    size_t item_size = sizeof(ros_message->state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_flags
  {
    size_t item_size = sizeof(ros_message->status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_voltage
  {
    size_t array_size = ros_message->cell_voltage.size;
    auto array_ptr = ros_message->cell_voltage.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_voltage_diff
  {
    size_t item_size = sizeof(ros_message->cell_voltage_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wst_serial
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wst_serial.size + 1);

  // Field name: bmz_flag
  {
    size_t item_size = sizeof(ros_message->bmz_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_type
  {
    size_t item_size = sizeof(ros_message->battery_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: full_voltage
  {
    size_t item_size = sizeof(ros_message->full_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: full_capacity
  {
    size_t item_size = sizeof(ros_message->full_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature2
  {
    size_t item_size = sizeof(ros_message->temperature2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature_pcb
  {
    size_t item_size = sizeof(ros_message->temperature_pcb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cycle_count
  {
    size_t item_size = sizeof(ros_message->cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message->dsg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message->chg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_major
  {
    size_t item_size = sizeof(ros_message->hw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_minor
  {
    size_t item_size = sizeof(ros_message->hw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_major
  {
    size_t item_size = sizeof(ros_message->fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_minor
  {
    size_t item_size = sizeof(ros_message->fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_patch
  {
    size_t item_size = sizeof(ros_message->fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_parameters_ok
  {
    size_t item_size = sizeof(ros_message->fw_parameters_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rec_fw_major
  {
    size_t item_size = sizeof(ros_message->rec_fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rec_fw_minor
  {
    size_t item_size = sizeof(ros_message->rec_fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rec_fw_patch
  {
    size_t item_size = sizeof(ros_message->rec_fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bl_major
  {
    size_t item_size = sizeof(ros_message->bl_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bl_minor
  {
    size_t item_size = sizeof(ros_message->bl_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_enabled
  {
    size_t item_size = sizeof(ros_message->status_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_current_limitation
  {
    size_t item_size = sizeof(ros_message->status_current_limitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_switch_off_warn1
  {
    size_t item_size = sizeof(ros_message->status_switch_off_warn1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_switch_off_warn2
  {
    size_t item_size = sizeof(ros_message->status_switch_off_warn2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_fully_discharged
  {
    size_t item_size = sizeof(ros_message->status_fully_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_nearly_discharged
  {
    size_t item_size = sizeof(ros_message->status_nearly_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_chargefet_on
  {
    size_t item_size = sizeof(ros_message->status_chargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_dischargefet_on
  {
    size_t item_size = sizeof(ros_message->status_dischargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_discharging
  {
    size_t item_size = sizeof(ros_message->status_discharging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_fully_charged
  {
    size_t item_size = sizeof(ros_message->status_fully_charged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_charging
  {
    size_t item_size = sizeof(ros_message->status_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_temp_charging_err
  {
    size_t item_size = sizeof(ros_message->status_temp_charging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_cell_over_voltage
  {
    size_t item_size = sizeof(ros_message->status_cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_cell_under_voltage
  {
    size_t item_size = sizeof(ros_message->status_cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_charge_over_current
  {
    size_t item_size = sizeof(ros_message->status_charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_shortcircuit
  {
    size_t item_size = sizeof(ros_message->status_shortcircuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_discharge_over_current
  {
    size_t item_size = sizeof(ros_message->status_discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_chargefet_voltage
  {
    size_t item_size = sizeof(ros_message->status_chargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_dischargefet_voltage
  {
    size_t item_size = sizeof(ros_message->status_dischargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_temp_discharging_err
  {
    size_t item_size = sizeof(ros_message->status_temp_discharging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_charger_detected
  {
    size_t item_size = sizeof(ros_message->status_charger_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_bms_revision
  {
    size_t item_size = sizeof(ros_message->mnfct_bms_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_asn_revision
  {
    size_t item_size = sizeof(ros_message->mnfct_asn_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_year
  {
    size_t item_size = sizeof(ros_message->mnfct_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_week
  {
    size_t item_size = sizeof(ros_message->mnfct_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_model
  {
    size_t item_size = sizeof(ros_message->mnfct_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_serial
  {
    size_t item_size = sizeof(ros_message->mnfct_serial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: afe_i2c_error_count
  {
    size_t item_size = sizeof(ros_message->afe_i2c_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: app_error_count
  {
    size_t item_size = sizeof(ros_message->app_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fet_disable_state
  {
    size_t item_size = sizeof(ros_message->fet_disable_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_battery_msg_time
  {
    size_t item_size = sizeof(ros_message->last_battery_msg_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_battery_status
  {
    size_t item_size = sizeof(ros_message->sbs_battery_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_battery_status_raw
  {
    size_t item_size = sizeof(ros_message->sbs_battery_status_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_serial_1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sbs_serial_1.size + 1);

  // Field name: sbs_serial_2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sbs_serial_2.size + 1);

  // Field name: sbs_arti_nr_1
  {
    size_t item_size = sizeof(ros_message->sbs_arti_nr_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_arti_nr_2
  {
    size_t item_size = sizeof(ros_message->sbs_arti_nr_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_arti_nr_3
  {
    size_t item_size = sizeof(ros_message->sbs_arti_nr_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_curr_flow_passive_state
  {
    size_t item_size = sizeof(ros_message->sbs_curr_flow_passive_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_oc1_count
  {
    size_t item_size = sizeof(ros_message->chg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_oc2_count
  {
    size_t item_size = sizeof(ros_message->chg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc1_count
  {
    size_t item_size = sizeof(ros_message->dsg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc2_count
  {
    size_t item_size = sizeof(ros_message->dsg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc3_count
  {
    size_t item_size = sizeof(ros_message->dsg_oc3_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: afe_oc1_count
  {
    size_t item_size = sizeof(ros_message->afe_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: afe_oc2_count
  {
    size_t item_size = sizeof(ros_message->afe_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message->chg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message->dsg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_oc_warning
  {
    size_t item_size = sizeof(ros_message->chg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc_warning
  {
    size_t item_size = sizeof(ros_message->dsg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__BMSData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: pack_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: charge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: discharge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: state_of_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: remaining_time_to_full_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: remaining_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: state_of_health
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cell_voltage
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cell_voltage_diff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wst_serial
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: bmz_flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: full_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: full_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature_pcb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cycle_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: dsg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: chg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_parameters_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rec_fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rec_fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rec_fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bl_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bl_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_current_limitation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_switch_off_warn1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_switch_off_warn2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_fully_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_nearly_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_chargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_dischargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_discharging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_fully_charged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_temp_charging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_cell_over_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_cell_under_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_charge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_shortcircuit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_discharge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_chargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: status_dischargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: status_temp_discharging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_charger_detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_bms_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_asn_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_year
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_model
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_serial
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: afe_i2c_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: app_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fet_disable_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: last_battery_msg_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sbs_battery_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_battery_status_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_serial_1
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: sbs_serial_2
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: sbs_arti_nr_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_arti_nr_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_arti_nr_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_curr_flow_passive_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: chg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: chg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc3_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: afe_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: afe_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: chg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: chg_oc_warning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc_warning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__BMSData;
    is_plain =
      (
      offsetof(DataType, dsg_oc_warning) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_key_mir_msgs__msg__BMSData(
  const mir_msgs__msg__BMSData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pack_voltage
  {
    cdr << ros_message->pack_voltage;
  }

  // Field name: charge_current
  {
    cdr << ros_message->charge_current;
  }

  // Field name: discharge_current
  {
    cdr << ros_message->discharge_current;
  }

  // Field name: state_of_charge
  {
    cdr << ros_message->state_of_charge;
  }

  // Field name: remaining_time_to_full_charge
  {
    cdr << ros_message->remaining_time_to_full_charge;
  }

  // Field name: remaining_capacity
  {
    cdr << ros_message->remaining_capacity;
  }

  // Field name: state_of_health
  {
    cdr << ros_message->state_of_health;
  }

  // Field name: status_flags
  {
    cdr << ros_message->status_flags;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: cell_voltage
  {
    size_t size = ros_message->cell_voltage.size;
    auto array_ptr = ros_message->cell_voltage.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: cell_voltage_diff
  {
    cdr << ros_message->cell_voltage_diff;
  }

  // Field name: wst_serial
  {
    const rosidl_runtime_c__String * str = &ros_message->wst_serial;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bmz_flag
  {
    cdr << ros_message->bmz_flag;
  }

  // Field name: battery_type
  {
    cdr << ros_message->battery_type;
  }

  // Field name: full_voltage
  {
    cdr << ros_message->full_voltage;
  }

  // Field name: full_capacity
  {
    cdr << ros_message->full_capacity;
  }

  // Field name: temperature2
  {
    cdr << ros_message->temperature2;
  }

  // Field name: temperature_pcb
  {
    cdr << ros_message->temperature_pcb;
  }

  // Field name: cycle_count
  {
    cdr << ros_message->cycle_count;
  }

  // Field name: dsg_overcurrent_counter
  {
    cdr << ros_message->dsg_overcurrent_counter;
  }

  // Field name: chg_overcurrent_counter
  {
    cdr << ros_message->chg_overcurrent_counter;
  }

  // Field name: hw_major
  {
    cdr << ros_message->hw_major;
  }

  // Field name: hw_minor
  {
    cdr << ros_message->hw_minor;
  }

  // Field name: fw_major
  {
    cdr << ros_message->fw_major;
  }

  // Field name: fw_minor
  {
    cdr << ros_message->fw_minor;
  }

  // Field name: fw_patch
  {
    cdr << ros_message->fw_patch;
  }

  // Field name: fw_parameters_ok
  {
    cdr << ros_message->fw_parameters_ok;
  }

  // Field name: rec_fw_major
  {
    cdr << ros_message->rec_fw_major;
  }

  // Field name: rec_fw_minor
  {
    cdr << ros_message->rec_fw_minor;
  }

  // Field name: rec_fw_patch
  {
    cdr << ros_message->rec_fw_patch;
  }

  // Field name: bl_major
  {
    cdr << ros_message->bl_major;
  }

  // Field name: bl_minor
  {
    cdr << ros_message->bl_minor;
  }

  // Field name: status_enabled
  {
    cdr << ros_message->status_enabled;
  }

  // Field name: status_current_limitation
  {
    cdr << ros_message->status_current_limitation;
  }

  // Field name: status_switch_off_warn1
  {
    cdr << ros_message->status_switch_off_warn1;
  }

  // Field name: status_switch_off_warn2
  {
    cdr << ros_message->status_switch_off_warn2;
  }

  // Field name: status_fully_discharged
  {
    cdr << ros_message->status_fully_discharged;
  }

  // Field name: status_nearly_discharged
  {
    cdr << ros_message->status_nearly_discharged;
  }

  // Field name: status_chargefet_on
  {
    cdr << ros_message->status_chargefet_on;
  }

  // Field name: status_dischargefet_on
  {
    cdr << ros_message->status_dischargefet_on;
  }

  // Field name: status_discharging
  {
    cdr << ros_message->status_discharging;
  }

  // Field name: status_fully_charged
  {
    cdr << ros_message->status_fully_charged;
  }

  // Field name: status_charging
  {
    cdr << ros_message->status_charging;
  }

  // Field name: status_temp_charging_err
  {
    cdr << ros_message->status_temp_charging_err;
  }

  // Field name: status_cell_over_voltage
  {
    cdr << ros_message->status_cell_over_voltage;
  }

  // Field name: status_cell_under_voltage
  {
    cdr << ros_message->status_cell_under_voltage;
  }

  // Field name: status_charge_over_current
  {
    cdr << ros_message->status_charge_over_current;
  }

  // Field name: status_shortcircuit
  {
    cdr << ros_message->status_shortcircuit;
  }

  // Field name: status_discharge_over_current
  {
    cdr << ros_message->status_discharge_over_current;
  }

  // Field name: status_chargefet_voltage
  {
    cdr << ros_message->status_chargefet_voltage;
  }

  // Field name: status_dischargefet_voltage
  {
    cdr << ros_message->status_dischargefet_voltage;
  }

  // Field name: status_temp_discharging_err
  {
    cdr << ros_message->status_temp_discharging_err;
  }

  // Field name: status_charger_detected
  {
    cdr << ros_message->status_charger_detected;
  }

  // Field name: mnfct_bms_revision
  {
    cdr << ros_message->mnfct_bms_revision;
  }

  // Field name: mnfct_asn_revision
  {
    cdr << ros_message->mnfct_asn_revision;
  }

  // Field name: mnfct_year
  {
    cdr << ros_message->mnfct_year;
  }

  // Field name: mnfct_week
  {
    cdr << ros_message->mnfct_week;
  }

  // Field name: mnfct_model
  {
    cdr << ros_message->mnfct_model;
  }

  // Field name: mnfct_serial
  {
    cdr << ros_message->mnfct_serial;
  }

  // Field name: afe_i2c_error_count
  {
    cdr << ros_message->afe_i2c_error_count;
  }

  // Field name: app_error_count
  {
    cdr << ros_message->app_error_count;
  }

  // Field name: fet_disable_state
  {
    cdr << ros_message->fet_disable_state;
  }

  // Field name: last_battery_msg_time
  {
    cdr << ros_message->last_battery_msg_time;
  }

  // Field name: sbs_battery_status
  {
    cdr << ros_message->sbs_battery_status;
  }

  // Field name: sbs_battery_status_raw
  {
    cdr << ros_message->sbs_battery_status_raw;
  }

  // Field name: sbs_serial_1
  {
    const rosidl_runtime_c__String * str = &ros_message->sbs_serial_1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sbs_serial_2
  {
    const rosidl_runtime_c__String * str = &ros_message->sbs_serial_2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sbs_arti_nr_1
  {
    cdr << ros_message->sbs_arti_nr_1;
  }

  // Field name: sbs_arti_nr_2
  {
    cdr << ros_message->sbs_arti_nr_2;
  }

  // Field name: sbs_arti_nr_3
  {
    cdr << ros_message->sbs_arti_nr_3;
  }

  // Field name: sbs_curr_flow_passive_state
  {
    cdr << ros_message->sbs_curr_flow_passive_state;
  }

  // Field name: chg_oc1_count
  {
    cdr << ros_message->chg_oc1_count;
  }

  // Field name: chg_oc2_count
  {
    cdr << ros_message->chg_oc2_count;
  }

  // Field name: dsg_oc1_count
  {
    cdr << ros_message->dsg_oc1_count;
  }

  // Field name: dsg_oc2_count
  {
    cdr << ros_message->dsg_oc2_count;
  }

  // Field name: dsg_oc3_count
  {
    cdr << ros_message->dsg_oc3_count;
  }

  // Field name: afe_oc1_count
  {
    cdr << ros_message->afe_oc1_count;
  }

  // Field name: afe_oc2_count
  {
    cdr << ros_message->afe_oc2_count;
  }

  // Field name: chg_latch_clear_count
  {
    cdr << ros_message->chg_latch_clear_count;
  }

  // Field name: dsg_latch_clear_count
  {
    cdr << ros_message->dsg_latch_clear_count;
  }

  // Field name: chg_oc_warning
  {
    cdr << ros_message->chg_oc_warning;
  }

  // Field name: dsg_oc_warning
  {
    cdr << ros_message->dsg_oc_warning;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_key_mir_msgs__msg__BMSData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BMSData__ros_msg_type * ros_message = static_cast<const _BMSData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pack_voltage
  {
    size_t item_size = sizeof(ros_message->pack_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: charge_current
  {
    size_t item_size = sizeof(ros_message->charge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: discharge_current
  {
    size_t item_size = sizeof(ros_message->discharge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_of_charge
  {
    size_t item_size = sizeof(ros_message->state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remaining_time_to_full_charge
  {
    size_t item_size = sizeof(ros_message->remaining_time_to_full_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remaining_capacity
  {
    size_t item_size = sizeof(ros_message->remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_of_health
  {
    size_t item_size = sizeof(ros_message->state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_flags
  {
    size_t item_size = sizeof(ros_message->status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_voltage
  {
    size_t array_size = ros_message->cell_voltage.size;
    auto array_ptr = ros_message->cell_voltage.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_voltage_diff
  {
    size_t item_size = sizeof(ros_message->cell_voltage_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wst_serial
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wst_serial.size + 1);

  // Field name: bmz_flag
  {
    size_t item_size = sizeof(ros_message->bmz_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_type
  {
    size_t item_size = sizeof(ros_message->battery_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: full_voltage
  {
    size_t item_size = sizeof(ros_message->full_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: full_capacity
  {
    size_t item_size = sizeof(ros_message->full_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature2
  {
    size_t item_size = sizeof(ros_message->temperature2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature_pcb
  {
    size_t item_size = sizeof(ros_message->temperature_pcb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cycle_count
  {
    size_t item_size = sizeof(ros_message->cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message->dsg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message->chg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_major
  {
    size_t item_size = sizeof(ros_message->hw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hw_minor
  {
    size_t item_size = sizeof(ros_message->hw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_major
  {
    size_t item_size = sizeof(ros_message->fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_minor
  {
    size_t item_size = sizeof(ros_message->fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_patch
  {
    size_t item_size = sizeof(ros_message->fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fw_parameters_ok
  {
    size_t item_size = sizeof(ros_message->fw_parameters_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rec_fw_major
  {
    size_t item_size = sizeof(ros_message->rec_fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rec_fw_minor
  {
    size_t item_size = sizeof(ros_message->rec_fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rec_fw_patch
  {
    size_t item_size = sizeof(ros_message->rec_fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bl_major
  {
    size_t item_size = sizeof(ros_message->bl_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bl_minor
  {
    size_t item_size = sizeof(ros_message->bl_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_enabled
  {
    size_t item_size = sizeof(ros_message->status_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_current_limitation
  {
    size_t item_size = sizeof(ros_message->status_current_limitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_switch_off_warn1
  {
    size_t item_size = sizeof(ros_message->status_switch_off_warn1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_switch_off_warn2
  {
    size_t item_size = sizeof(ros_message->status_switch_off_warn2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_fully_discharged
  {
    size_t item_size = sizeof(ros_message->status_fully_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_nearly_discharged
  {
    size_t item_size = sizeof(ros_message->status_nearly_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_chargefet_on
  {
    size_t item_size = sizeof(ros_message->status_chargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_dischargefet_on
  {
    size_t item_size = sizeof(ros_message->status_dischargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_discharging
  {
    size_t item_size = sizeof(ros_message->status_discharging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_fully_charged
  {
    size_t item_size = sizeof(ros_message->status_fully_charged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_charging
  {
    size_t item_size = sizeof(ros_message->status_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_temp_charging_err
  {
    size_t item_size = sizeof(ros_message->status_temp_charging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_cell_over_voltage
  {
    size_t item_size = sizeof(ros_message->status_cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_cell_under_voltage
  {
    size_t item_size = sizeof(ros_message->status_cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_charge_over_current
  {
    size_t item_size = sizeof(ros_message->status_charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_shortcircuit
  {
    size_t item_size = sizeof(ros_message->status_shortcircuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_discharge_over_current
  {
    size_t item_size = sizeof(ros_message->status_discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_chargefet_voltage
  {
    size_t item_size = sizeof(ros_message->status_chargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_dischargefet_voltage
  {
    size_t item_size = sizeof(ros_message->status_dischargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_temp_discharging_err
  {
    size_t item_size = sizeof(ros_message->status_temp_discharging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_charger_detected
  {
    size_t item_size = sizeof(ros_message->status_charger_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_bms_revision
  {
    size_t item_size = sizeof(ros_message->mnfct_bms_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_asn_revision
  {
    size_t item_size = sizeof(ros_message->mnfct_asn_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_year
  {
    size_t item_size = sizeof(ros_message->mnfct_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_week
  {
    size_t item_size = sizeof(ros_message->mnfct_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_model
  {
    size_t item_size = sizeof(ros_message->mnfct_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mnfct_serial
  {
    size_t item_size = sizeof(ros_message->mnfct_serial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: afe_i2c_error_count
  {
    size_t item_size = sizeof(ros_message->afe_i2c_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: app_error_count
  {
    size_t item_size = sizeof(ros_message->app_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fet_disable_state
  {
    size_t item_size = sizeof(ros_message->fet_disable_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_battery_msg_time
  {
    size_t item_size = sizeof(ros_message->last_battery_msg_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_battery_status
  {
    size_t item_size = sizeof(ros_message->sbs_battery_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_battery_status_raw
  {
    size_t item_size = sizeof(ros_message->sbs_battery_status_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_serial_1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sbs_serial_1.size + 1);

  // Field name: sbs_serial_2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sbs_serial_2.size + 1);

  // Field name: sbs_arti_nr_1
  {
    size_t item_size = sizeof(ros_message->sbs_arti_nr_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_arti_nr_2
  {
    size_t item_size = sizeof(ros_message->sbs_arti_nr_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_arti_nr_3
  {
    size_t item_size = sizeof(ros_message->sbs_arti_nr_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sbs_curr_flow_passive_state
  {
    size_t item_size = sizeof(ros_message->sbs_curr_flow_passive_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_oc1_count
  {
    size_t item_size = sizeof(ros_message->chg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_oc2_count
  {
    size_t item_size = sizeof(ros_message->chg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc1_count
  {
    size_t item_size = sizeof(ros_message->dsg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc2_count
  {
    size_t item_size = sizeof(ros_message->dsg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc3_count
  {
    size_t item_size = sizeof(ros_message->dsg_oc3_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: afe_oc1_count
  {
    size_t item_size = sizeof(ros_message->afe_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: afe_oc2_count
  {
    size_t item_size = sizeof(ros_message->afe_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message->chg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message->dsg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: chg_oc_warning
  {
    size_t item_size = sizeof(ros_message->chg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dsg_oc_warning
  {
    size_t item_size = sizeof(ros_message->dsg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_key_mir_msgs__msg__BMSData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: pack_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: charge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: discharge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: state_of_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: remaining_time_to_full_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: remaining_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: state_of_health
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cell_voltage
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cell_voltage_diff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wst_serial
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: bmz_flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: full_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: full_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: temperature_pcb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cycle_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: dsg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: chg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fw_parameters_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rec_fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rec_fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rec_fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bl_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bl_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_current_limitation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_switch_off_warn1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_switch_off_warn2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_fully_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_nearly_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_chargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_dischargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_discharging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_fully_charged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_temp_charging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_cell_over_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_cell_under_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_charge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_shortcircuit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_discharge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_chargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: status_dischargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: status_temp_discharging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: status_charger_detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_bms_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_asn_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_year
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_model
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mnfct_serial
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: afe_i2c_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: app_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fet_disable_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: last_battery_msg_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sbs_battery_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_battery_status_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_serial_1
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: sbs_serial_2
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: sbs_arti_nr_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_arti_nr_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_arti_nr_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sbs_curr_flow_passive_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: chg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: chg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc3_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: afe_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: afe_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: chg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: chg_oc_warning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dsg_oc_warning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__BMSData;
    is_plain =
      (
      offsetof(DataType, dsg_oc_warning) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BMSData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mir_msgs__msg__BMSData * ros_message = static_cast<const mir_msgs__msg__BMSData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mir_msgs__msg__BMSData(ros_message, cdr);
}

static bool _BMSData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mir_msgs__msg__BMSData * ros_message = static_cast<mir_msgs__msg__BMSData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mir_msgs__msg__BMSData(cdr, ros_message);
}

static uint32_t _BMSData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__BMSData(
      untyped_ros_message, 0));
}

static size_t _BMSData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__BMSData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BMSData = {
  "mir_msgs::msg",
  "BMSData",
  _BMSData__cdr_serialize,
  _BMSData__cdr_deserialize,
  _BMSData__get_serialized_size,
  _BMSData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BMSData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BMSData,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__BMSData__get_type_hash,
  &mir_msgs__msg__BMSData__get_type_description,
  &mir_msgs__msg__BMSData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, BMSData)() {
  return &_BMSData__type_support;
}

#if defined(__cplusplus)
}
#endif
