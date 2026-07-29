// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/bms_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/bms_data__functions.h"
#include "mir_msgs/msg/detail/bms_data__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mir_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_serialize(
  const mir_msgs::msg::BMSData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pack_voltage
  cdr << ros_message.pack_voltage;

  // Member: charge_current
  cdr << ros_message.charge_current;

  // Member: discharge_current
  cdr << ros_message.discharge_current;

  // Member: state_of_charge
  cdr << ros_message.state_of_charge;

  // Member: remaining_time_to_full_charge
  cdr << ros_message.remaining_time_to_full_charge;

  // Member: remaining_capacity
  cdr << ros_message.remaining_capacity;

  // Member: state_of_health
  cdr << ros_message.state_of_health;

  // Member: status_flags
  cdr << ros_message.status_flags;

  // Member: temperature
  cdr << ros_message.temperature;

  // Member: cell_voltage
  {
    cdr << ros_message.cell_voltage;
  }

  // Member: cell_voltage_diff
  cdr << ros_message.cell_voltage_diff;

  // Member: wst_serial
  cdr << ros_message.wst_serial;

  // Member: bmz_flag
  cdr << ros_message.bmz_flag;

  // Member: battery_type
  cdr << ros_message.battery_type;

  // Member: full_voltage
  cdr << ros_message.full_voltage;

  // Member: full_capacity
  cdr << ros_message.full_capacity;

  // Member: temperature2
  cdr << ros_message.temperature2;

  // Member: temperature_pcb
  cdr << ros_message.temperature_pcb;

  // Member: cycle_count
  cdr << ros_message.cycle_count;

  // Member: dsg_overcurrent_counter
  cdr << ros_message.dsg_overcurrent_counter;

  // Member: chg_overcurrent_counter
  cdr << ros_message.chg_overcurrent_counter;

  // Member: hw_major
  cdr << ros_message.hw_major;

  // Member: hw_minor
  cdr << ros_message.hw_minor;

  // Member: fw_major
  cdr << ros_message.fw_major;

  // Member: fw_minor
  cdr << ros_message.fw_minor;

  // Member: fw_patch
  cdr << ros_message.fw_patch;

  // Member: fw_parameters_ok
  cdr << ros_message.fw_parameters_ok;

  // Member: rec_fw_major
  cdr << ros_message.rec_fw_major;

  // Member: rec_fw_minor
  cdr << ros_message.rec_fw_minor;

  // Member: rec_fw_patch
  cdr << ros_message.rec_fw_patch;

  // Member: bl_major
  cdr << ros_message.bl_major;

  // Member: bl_minor
  cdr << ros_message.bl_minor;

  // Member: status_enabled
  cdr << ros_message.status_enabled;

  // Member: status_current_limitation
  cdr << ros_message.status_current_limitation;

  // Member: status_switch_off_warn1
  cdr << ros_message.status_switch_off_warn1;

  // Member: status_switch_off_warn2
  cdr << ros_message.status_switch_off_warn2;

  // Member: status_fully_discharged
  cdr << ros_message.status_fully_discharged;

  // Member: status_nearly_discharged
  cdr << ros_message.status_nearly_discharged;

  // Member: status_chargefet_on
  cdr << ros_message.status_chargefet_on;

  // Member: status_dischargefet_on
  cdr << ros_message.status_dischargefet_on;

  // Member: status_discharging
  cdr << ros_message.status_discharging;

  // Member: status_fully_charged
  cdr << ros_message.status_fully_charged;

  // Member: status_charging
  cdr << ros_message.status_charging;

  // Member: status_temp_charging_err
  cdr << ros_message.status_temp_charging_err;

  // Member: status_cell_over_voltage
  cdr << ros_message.status_cell_over_voltage;

  // Member: status_cell_under_voltage
  cdr << ros_message.status_cell_under_voltage;

  // Member: status_charge_over_current
  cdr << ros_message.status_charge_over_current;

  // Member: status_shortcircuit
  cdr << ros_message.status_shortcircuit;

  // Member: status_discharge_over_current
  cdr << ros_message.status_discharge_over_current;

  // Member: status_chargefet_voltage
  cdr << ros_message.status_chargefet_voltage;

  // Member: status_dischargefet_voltage
  cdr << ros_message.status_dischargefet_voltage;

  // Member: status_temp_discharging_err
  cdr << ros_message.status_temp_discharging_err;

  // Member: status_charger_detected
  cdr << ros_message.status_charger_detected;

  // Member: mnfct_bms_revision
  cdr << ros_message.mnfct_bms_revision;

  // Member: mnfct_asn_revision
  cdr << ros_message.mnfct_asn_revision;

  // Member: mnfct_year
  cdr << ros_message.mnfct_year;

  // Member: mnfct_week
  cdr << ros_message.mnfct_week;

  // Member: mnfct_model
  cdr << ros_message.mnfct_model;

  // Member: mnfct_serial
  cdr << ros_message.mnfct_serial;

  // Member: afe_i2c_error_count
  cdr << ros_message.afe_i2c_error_count;

  // Member: app_error_count
  cdr << ros_message.app_error_count;

  // Member: fet_disable_state
  cdr << ros_message.fet_disable_state;

  // Member: last_battery_msg_time
  cdr << ros_message.last_battery_msg_time;

  // Member: sbs_battery_status
  cdr << ros_message.sbs_battery_status;

  // Member: sbs_battery_status_raw
  cdr << ros_message.sbs_battery_status_raw;

  // Member: sbs_serial_1
  cdr << ros_message.sbs_serial_1;

  // Member: sbs_serial_2
  cdr << ros_message.sbs_serial_2;

  // Member: sbs_arti_nr_1
  cdr << ros_message.sbs_arti_nr_1;

  // Member: sbs_arti_nr_2
  cdr << ros_message.sbs_arti_nr_2;

  // Member: sbs_arti_nr_3
  cdr << ros_message.sbs_arti_nr_3;

  // Member: sbs_curr_flow_passive_state
  cdr << ros_message.sbs_curr_flow_passive_state;

  // Member: chg_oc1_count
  cdr << ros_message.chg_oc1_count;

  // Member: chg_oc2_count
  cdr << ros_message.chg_oc2_count;

  // Member: dsg_oc1_count
  cdr << ros_message.dsg_oc1_count;

  // Member: dsg_oc2_count
  cdr << ros_message.dsg_oc2_count;

  // Member: dsg_oc3_count
  cdr << ros_message.dsg_oc3_count;

  // Member: afe_oc1_count
  cdr << ros_message.afe_oc1_count;

  // Member: afe_oc2_count
  cdr << ros_message.afe_oc2_count;

  // Member: chg_latch_clear_count
  cdr << ros_message.chg_latch_clear_count;

  // Member: dsg_latch_clear_count
  cdr << ros_message.dsg_latch_clear_count;

  // Member: chg_oc_warning
  cdr << ros_message.chg_oc_warning;

  // Member: dsg_oc_warning
  cdr << ros_message.dsg_oc_warning;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::BMSData & ros_message)
{
  // Member: pack_voltage
  cdr >> ros_message.pack_voltage;

  // Member: charge_current
  cdr >> ros_message.charge_current;

  // Member: discharge_current
  cdr >> ros_message.discharge_current;

  // Member: state_of_charge
  cdr >> ros_message.state_of_charge;

  // Member: remaining_time_to_full_charge
  cdr >> ros_message.remaining_time_to_full_charge;

  // Member: remaining_capacity
  cdr >> ros_message.remaining_capacity;

  // Member: state_of_health
  cdr >> ros_message.state_of_health;

  // Member: status_flags
  cdr >> ros_message.status_flags;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: cell_voltage
  {
    cdr >> ros_message.cell_voltage;
  }

  // Member: cell_voltage_diff
  cdr >> ros_message.cell_voltage_diff;

  // Member: wst_serial
  cdr >> ros_message.wst_serial;

  // Member: bmz_flag
  cdr >> ros_message.bmz_flag;

  // Member: battery_type
  cdr >> ros_message.battery_type;

  // Member: full_voltage
  cdr >> ros_message.full_voltage;

  // Member: full_capacity
  cdr >> ros_message.full_capacity;

  // Member: temperature2
  cdr >> ros_message.temperature2;

  // Member: temperature_pcb
  cdr >> ros_message.temperature_pcb;

  // Member: cycle_count
  cdr >> ros_message.cycle_count;

  // Member: dsg_overcurrent_counter
  cdr >> ros_message.dsg_overcurrent_counter;

  // Member: chg_overcurrent_counter
  cdr >> ros_message.chg_overcurrent_counter;

  // Member: hw_major
  cdr >> ros_message.hw_major;

  // Member: hw_minor
  cdr >> ros_message.hw_minor;

  // Member: fw_major
  cdr >> ros_message.fw_major;

  // Member: fw_minor
  cdr >> ros_message.fw_minor;

  // Member: fw_patch
  cdr >> ros_message.fw_patch;

  // Member: fw_parameters_ok
  cdr >> ros_message.fw_parameters_ok;

  // Member: rec_fw_major
  cdr >> ros_message.rec_fw_major;

  // Member: rec_fw_minor
  cdr >> ros_message.rec_fw_minor;

  // Member: rec_fw_patch
  cdr >> ros_message.rec_fw_patch;

  // Member: bl_major
  cdr >> ros_message.bl_major;

  // Member: bl_minor
  cdr >> ros_message.bl_minor;

  // Member: status_enabled
  cdr >> ros_message.status_enabled;

  // Member: status_current_limitation
  cdr >> ros_message.status_current_limitation;

  // Member: status_switch_off_warn1
  cdr >> ros_message.status_switch_off_warn1;

  // Member: status_switch_off_warn2
  cdr >> ros_message.status_switch_off_warn2;

  // Member: status_fully_discharged
  cdr >> ros_message.status_fully_discharged;

  // Member: status_nearly_discharged
  cdr >> ros_message.status_nearly_discharged;

  // Member: status_chargefet_on
  cdr >> ros_message.status_chargefet_on;

  // Member: status_dischargefet_on
  cdr >> ros_message.status_dischargefet_on;

  // Member: status_discharging
  cdr >> ros_message.status_discharging;

  // Member: status_fully_charged
  cdr >> ros_message.status_fully_charged;

  // Member: status_charging
  cdr >> ros_message.status_charging;

  // Member: status_temp_charging_err
  cdr >> ros_message.status_temp_charging_err;

  // Member: status_cell_over_voltage
  cdr >> ros_message.status_cell_over_voltage;

  // Member: status_cell_under_voltage
  cdr >> ros_message.status_cell_under_voltage;

  // Member: status_charge_over_current
  cdr >> ros_message.status_charge_over_current;

  // Member: status_shortcircuit
  cdr >> ros_message.status_shortcircuit;

  // Member: status_discharge_over_current
  cdr >> ros_message.status_discharge_over_current;

  // Member: status_chargefet_voltage
  cdr >> ros_message.status_chargefet_voltage;

  // Member: status_dischargefet_voltage
  cdr >> ros_message.status_dischargefet_voltage;

  // Member: status_temp_discharging_err
  cdr >> ros_message.status_temp_discharging_err;

  // Member: status_charger_detected
  cdr >> ros_message.status_charger_detected;

  // Member: mnfct_bms_revision
  cdr >> ros_message.mnfct_bms_revision;

  // Member: mnfct_asn_revision
  cdr >> ros_message.mnfct_asn_revision;

  // Member: mnfct_year
  cdr >> ros_message.mnfct_year;

  // Member: mnfct_week
  cdr >> ros_message.mnfct_week;

  // Member: mnfct_model
  cdr >> ros_message.mnfct_model;

  // Member: mnfct_serial
  cdr >> ros_message.mnfct_serial;

  // Member: afe_i2c_error_count
  cdr >> ros_message.afe_i2c_error_count;

  // Member: app_error_count
  cdr >> ros_message.app_error_count;

  // Member: fet_disable_state
  cdr >> ros_message.fet_disable_state;

  // Member: last_battery_msg_time
  cdr >> ros_message.last_battery_msg_time;

  // Member: sbs_battery_status
  cdr >> ros_message.sbs_battery_status;

  // Member: sbs_battery_status_raw
  cdr >> ros_message.sbs_battery_status_raw;

  // Member: sbs_serial_1
  cdr >> ros_message.sbs_serial_1;

  // Member: sbs_serial_2
  cdr >> ros_message.sbs_serial_2;

  // Member: sbs_arti_nr_1
  cdr >> ros_message.sbs_arti_nr_1;

  // Member: sbs_arti_nr_2
  cdr >> ros_message.sbs_arti_nr_2;

  // Member: sbs_arti_nr_3
  cdr >> ros_message.sbs_arti_nr_3;

  // Member: sbs_curr_flow_passive_state
  cdr >> ros_message.sbs_curr_flow_passive_state;

  // Member: chg_oc1_count
  cdr >> ros_message.chg_oc1_count;

  // Member: chg_oc2_count
  cdr >> ros_message.chg_oc2_count;

  // Member: dsg_oc1_count
  cdr >> ros_message.dsg_oc1_count;

  // Member: dsg_oc2_count
  cdr >> ros_message.dsg_oc2_count;

  // Member: dsg_oc3_count
  cdr >> ros_message.dsg_oc3_count;

  // Member: afe_oc1_count
  cdr >> ros_message.afe_oc1_count;

  // Member: afe_oc2_count
  cdr >> ros_message.afe_oc2_count;

  // Member: chg_latch_clear_count
  cdr >> ros_message.chg_latch_clear_count;

  // Member: dsg_latch_clear_count
  cdr >> ros_message.dsg_latch_clear_count;

  // Member: chg_oc_warning
  cdr >> ros_message.chg_oc_warning;

  // Member: dsg_oc_warning
  cdr >> ros_message.dsg_oc_warning;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::BMSData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pack_voltage
  {
    size_t item_size = sizeof(ros_message.pack_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: charge_current
  {
    size_t item_size = sizeof(ros_message.charge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: discharge_current
  {
    size_t item_size = sizeof(ros_message.discharge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: state_of_charge
  {
    size_t item_size = sizeof(ros_message.state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: remaining_time_to_full_charge
  {
    size_t item_size = sizeof(ros_message.remaining_time_to_full_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: remaining_capacity
  {
    size_t item_size = sizeof(ros_message.remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: state_of_health
  {
    size_t item_size = sizeof(ros_message.state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_flags
  {
    size_t item_size = sizeof(ros_message.status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cell_voltage
  {
    size_t array_size = ros_message.cell_voltage.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cell_voltage[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cell_voltage_diff
  {
    size_t item_size = sizeof(ros_message.cell_voltage_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wst_serial
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.wst_serial.size() + 1);

  // Member: bmz_flag
  {
    size_t item_size = sizeof(ros_message.bmz_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_type
  {
    size_t item_size = sizeof(ros_message.battery_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: full_voltage
  {
    size_t item_size = sizeof(ros_message.full_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: full_capacity
  {
    size_t item_size = sizeof(ros_message.full_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature2
  {
    size_t item_size = sizeof(ros_message.temperature2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature_pcb
  {
    size_t item_size = sizeof(ros_message.temperature_pcb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cycle_count
  {
    size_t item_size = sizeof(ros_message.cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message.dsg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message.chg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_major
  {
    size_t item_size = sizeof(ros_message.hw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_minor
  {
    size_t item_size = sizeof(ros_message.hw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_major
  {
    size_t item_size = sizeof(ros_message.fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_minor
  {
    size_t item_size = sizeof(ros_message.fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_patch
  {
    size_t item_size = sizeof(ros_message.fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_parameters_ok
  {
    size_t item_size = sizeof(ros_message.fw_parameters_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rec_fw_major
  {
    size_t item_size = sizeof(ros_message.rec_fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rec_fw_minor
  {
    size_t item_size = sizeof(ros_message.rec_fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rec_fw_patch
  {
    size_t item_size = sizeof(ros_message.rec_fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bl_major
  {
    size_t item_size = sizeof(ros_message.bl_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bl_minor
  {
    size_t item_size = sizeof(ros_message.bl_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_enabled
  {
    size_t item_size = sizeof(ros_message.status_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_current_limitation
  {
    size_t item_size = sizeof(ros_message.status_current_limitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_switch_off_warn1
  {
    size_t item_size = sizeof(ros_message.status_switch_off_warn1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_switch_off_warn2
  {
    size_t item_size = sizeof(ros_message.status_switch_off_warn2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_fully_discharged
  {
    size_t item_size = sizeof(ros_message.status_fully_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_nearly_discharged
  {
    size_t item_size = sizeof(ros_message.status_nearly_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_chargefet_on
  {
    size_t item_size = sizeof(ros_message.status_chargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_dischargefet_on
  {
    size_t item_size = sizeof(ros_message.status_dischargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_discharging
  {
    size_t item_size = sizeof(ros_message.status_discharging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_fully_charged
  {
    size_t item_size = sizeof(ros_message.status_fully_charged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_charging
  {
    size_t item_size = sizeof(ros_message.status_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_temp_charging_err
  {
    size_t item_size = sizeof(ros_message.status_temp_charging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_cell_over_voltage
  {
    size_t item_size = sizeof(ros_message.status_cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_cell_under_voltage
  {
    size_t item_size = sizeof(ros_message.status_cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_charge_over_current
  {
    size_t item_size = sizeof(ros_message.status_charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_shortcircuit
  {
    size_t item_size = sizeof(ros_message.status_shortcircuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_discharge_over_current
  {
    size_t item_size = sizeof(ros_message.status_discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_chargefet_voltage
  {
    size_t item_size = sizeof(ros_message.status_chargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_dischargefet_voltage
  {
    size_t item_size = sizeof(ros_message.status_dischargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_temp_discharging_err
  {
    size_t item_size = sizeof(ros_message.status_temp_discharging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_charger_detected
  {
    size_t item_size = sizeof(ros_message.status_charger_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_bms_revision
  {
    size_t item_size = sizeof(ros_message.mnfct_bms_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_asn_revision
  {
    size_t item_size = sizeof(ros_message.mnfct_asn_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_year
  {
    size_t item_size = sizeof(ros_message.mnfct_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_week
  {
    size_t item_size = sizeof(ros_message.mnfct_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_model
  {
    size_t item_size = sizeof(ros_message.mnfct_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_serial
  {
    size_t item_size = sizeof(ros_message.mnfct_serial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: afe_i2c_error_count
  {
    size_t item_size = sizeof(ros_message.afe_i2c_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: app_error_count
  {
    size_t item_size = sizeof(ros_message.app_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fet_disable_state
  {
    size_t item_size = sizeof(ros_message.fet_disable_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_battery_msg_time
  {
    size_t item_size = sizeof(ros_message.last_battery_msg_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_battery_status
  {
    size_t item_size = sizeof(ros_message.sbs_battery_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_battery_status_raw
  {
    size_t item_size = sizeof(ros_message.sbs_battery_status_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_serial_1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sbs_serial_1.size() + 1);

  // Member: sbs_serial_2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sbs_serial_2.size() + 1);

  // Member: sbs_arti_nr_1
  {
    size_t item_size = sizeof(ros_message.sbs_arti_nr_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_arti_nr_2
  {
    size_t item_size = sizeof(ros_message.sbs_arti_nr_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_arti_nr_3
  {
    size_t item_size = sizeof(ros_message.sbs_arti_nr_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_curr_flow_passive_state
  {
    size_t item_size = sizeof(ros_message.sbs_curr_flow_passive_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_oc1_count
  {
    size_t item_size = sizeof(ros_message.chg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_oc2_count
  {
    size_t item_size = sizeof(ros_message.chg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc1_count
  {
    size_t item_size = sizeof(ros_message.dsg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc2_count
  {
    size_t item_size = sizeof(ros_message.dsg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc3_count
  {
    size_t item_size = sizeof(ros_message.dsg_oc3_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: afe_oc1_count
  {
    size_t item_size = sizeof(ros_message.afe_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: afe_oc2_count
  {
    size_t item_size = sizeof(ros_message.afe_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message.chg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message.dsg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_oc_warning
  {
    size_t item_size = sizeof(ros_message.chg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc_warning
  {
    size_t item_size = sizeof(ros_message.dsg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_BMSData(
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

  // Member: pack_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: charge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: discharge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: state_of_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: remaining_time_to_full_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: remaining_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: state_of_health
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cell_voltage
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
  // Member: cell_voltage_diff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: wst_serial
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
  // Member: bmz_flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: battery_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: full_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: full_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: temperature2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: temperature_pcb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: cycle_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: dsg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: chg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fw_parameters_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: rec_fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: rec_fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: rec_fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: bl_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: bl_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_current_limitation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_switch_off_warn1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_switch_off_warn2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_fully_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_nearly_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_chargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_dischargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_discharging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_fully_charged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_temp_charging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_cell_over_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_cell_under_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_charge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_shortcircuit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_discharge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_chargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: status_dischargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: status_temp_discharging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: status_charger_detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mnfct_bms_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mnfct_asn_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mnfct_year
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mnfct_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mnfct_model
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mnfct_serial
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: afe_i2c_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: app_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fet_disable_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: last_battery_msg_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: sbs_battery_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sbs_battery_status_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sbs_serial_1
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
  // Member: sbs_serial_2
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
  // Member: sbs_arti_nr_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sbs_arti_nr_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sbs_arti_nr_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sbs_curr_flow_passive_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: chg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: chg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dsg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dsg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dsg_oc3_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: afe_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: afe_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: chg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dsg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: chg_oc_warning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dsg_oc_warning
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
    using DataType = mir_msgs::msg::BMSData;
    is_plain =
      (
      offsetof(DataType, dsg_oc_warning) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_serialize_key(
  const mir_msgs::msg::BMSData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pack_voltage
  cdr << ros_message.pack_voltage;

  // Member: charge_current
  cdr << ros_message.charge_current;

  // Member: discharge_current
  cdr << ros_message.discharge_current;

  // Member: state_of_charge
  cdr << ros_message.state_of_charge;

  // Member: remaining_time_to_full_charge
  cdr << ros_message.remaining_time_to_full_charge;

  // Member: remaining_capacity
  cdr << ros_message.remaining_capacity;

  // Member: state_of_health
  cdr << ros_message.state_of_health;

  // Member: status_flags
  cdr << ros_message.status_flags;

  // Member: temperature
  cdr << ros_message.temperature;

  // Member: cell_voltage
  {
    cdr << ros_message.cell_voltage;
  }

  // Member: cell_voltage_diff
  cdr << ros_message.cell_voltage_diff;

  // Member: wst_serial
  cdr << ros_message.wst_serial;

  // Member: bmz_flag
  cdr << ros_message.bmz_flag;

  // Member: battery_type
  cdr << ros_message.battery_type;

  // Member: full_voltage
  cdr << ros_message.full_voltage;

  // Member: full_capacity
  cdr << ros_message.full_capacity;

  // Member: temperature2
  cdr << ros_message.temperature2;

  // Member: temperature_pcb
  cdr << ros_message.temperature_pcb;

  // Member: cycle_count
  cdr << ros_message.cycle_count;

  // Member: dsg_overcurrent_counter
  cdr << ros_message.dsg_overcurrent_counter;

  // Member: chg_overcurrent_counter
  cdr << ros_message.chg_overcurrent_counter;

  // Member: hw_major
  cdr << ros_message.hw_major;

  // Member: hw_minor
  cdr << ros_message.hw_minor;

  // Member: fw_major
  cdr << ros_message.fw_major;

  // Member: fw_minor
  cdr << ros_message.fw_minor;

  // Member: fw_patch
  cdr << ros_message.fw_patch;

  // Member: fw_parameters_ok
  cdr << ros_message.fw_parameters_ok;

  // Member: rec_fw_major
  cdr << ros_message.rec_fw_major;

  // Member: rec_fw_minor
  cdr << ros_message.rec_fw_minor;

  // Member: rec_fw_patch
  cdr << ros_message.rec_fw_patch;

  // Member: bl_major
  cdr << ros_message.bl_major;

  // Member: bl_minor
  cdr << ros_message.bl_minor;

  // Member: status_enabled
  cdr << ros_message.status_enabled;

  // Member: status_current_limitation
  cdr << ros_message.status_current_limitation;

  // Member: status_switch_off_warn1
  cdr << ros_message.status_switch_off_warn1;

  // Member: status_switch_off_warn2
  cdr << ros_message.status_switch_off_warn2;

  // Member: status_fully_discharged
  cdr << ros_message.status_fully_discharged;

  // Member: status_nearly_discharged
  cdr << ros_message.status_nearly_discharged;

  // Member: status_chargefet_on
  cdr << ros_message.status_chargefet_on;

  // Member: status_dischargefet_on
  cdr << ros_message.status_dischargefet_on;

  // Member: status_discharging
  cdr << ros_message.status_discharging;

  // Member: status_fully_charged
  cdr << ros_message.status_fully_charged;

  // Member: status_charging
  cdr << ros_message.status_charging;

  // Member: status_temp_charging_err
  cdr << ros_message.status_temp_charging_err;

  // Member: status_cell_over_voltage
  cdr << ros_message.status_cell_over_voltage;

  // Member: status_cell_under_voltage
  cdr << ros_message.status_cell_under_voltage;

  // Member: status_charge_over_current
  cdr << ros_message.status_charge_over_current;

  // Member: status_shortcircuit
  cdr << ros_message.status_shortcircuit;

  // Member: status_discharge_over_current
  cdr << ros_message.status_discharge_over_current;

  // Member: status_chargefet_voltage
  cdr << ros_message.status_chargefet_voltage;

  // Member: status_dischargefet_voltage
  cdr << ros_message.status_dischargefet_voltage;

  // Member: status_temp_discharging_err
  cdr << ros_message.status_temp_discharging_err;

  // Member: status_charger_detected
  cdr << ros_message.status_charger_detected;

  // Member: mnfct_bms_revision
  cdr << ros_message.mnfct_bms_revision;

  // Member: mnfct_asn_revision
  cdr << ros_message.mnfct_asn_revision;

  // Member: mnfct_year
  cdr << ros_message.mnfct_year;

  // Member: mnfct_week
  cdr << ros_message.mnfct_week;

  // Member: mnfct_model
  cdr << ros_message.mnfct_model;

  // Member: mnfct_serial
  cdr << ros_message.mnfct_serial;

  // Member: afe_i2c_error_count
  cdr << ros_message.afe_i2c_error_count;

  // Member: app_error_count
  cdr << ros_message.app_error_count;

  // Member: fet_disable_state
  cdr << ros_message.fet_disable_state;

  // Member: last_battery_msg_time
  cdr << ros_message.last_battery_msg_time;

  // Member: sbs_battery_status
  cdr << ros_message.sbs_battery_status;

  // Member: sbs_battery_status_raw
  cdr << ros_message.sbs_battery_status_raw;

  // Member: sbs_serial_1
  cdr << ros_message.sbs_serial_1;

  // Member: sbs_serial_2
  cdr << ros_message.sbs_serial_2;

  // Member: sbs_arti_nr_1
  cdr << ros_message.sbs_arti_nr_1;

  // Member: sbs_arti_nr_2
  cdr << ros_message.sbs_arti_nr_2;

  // Member: sbs_arti_nr_3
  cdr << ros_message.sbs_arti_nr_3;

  // Member: sbs_curr_flow_passive_state
  cdr << ros_message.sbs_curr_flow_passive_state;

  // Member: chg_oc1_count
  cdr << ros_message.chg_oc1_count;

  // Member: chg_oc2_count
  cdr << ros_message.chg_oc2_count;

  // Member: dsg_oc1_count
  cdr << ros_message.dsg_oc1_count;

  // Member: dsg_oc2_count
  cdr << ros_message.dsg_oc2_count;

  // Member: dsg_oc3_count
  cdr << ros_message.dsg_oc3_count;

  // Member: afe_oc1_count
  cdr << ros_message.afe_oc1_count;

  // Member: afe_oc2_count
  cdr << ros_message.afe_oc2_count;

  // Member: chg_latch_clear_count
  cdr << ros_message.chg_latch_clear_count;

  // Member: dsg_latch_clear_count
  cdr << ros_message.dsg_latch_clear_count;

  // Member: chg_oc_warning
  cdr << ros_message.chg_oc_warning;

  // Member: dsg_oc_warning
  cdr << ros_message.dsg_oc_warning;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size_key(
  const mir_msgs::msg::BMSData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pack_voltage
  {
    size_t item_size = sizeof(ros_message.pack_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: charge_current
  {
    size_t item_size = sizeof(ros_message.charge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: discharge_current
  {
    size_t item_size = sizeof(ros_message.discharge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: state_of_charge
  {
    size_t item_size = sizeof(ros_message.state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: remaining_time_to_full_charge
  {
    size_t item_size = sizeof(ros_message.remaining_time_to_full_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: remaining_capacity
  {
    size_t item_size = sizeof(ros_message.remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: state_of_health
  {
    size_t item_size = sizeof(ros_message.state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_flags
  {
    size_t item_size = sizeof(ros_message.status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cell_voltage
  {
    size_t array_size = ros_message.cell_voltage.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cell_voltage[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cell_voltage_diff
  {
    size_t item_size = sizeof(ros_message.cell_voltage_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wst_serial
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.wst_serial.size() + 1);

  // Member: bmz_flag
  {
    size_t item_size = sizeof(ros_message.bmz_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_type
  {
    size_t item_size = sizeof(ros_message.battery_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: full_voltage
  {
    size_t item_size = sizeof(ros_message.full_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: full_capacity
  {
    size_t item_size = sizeof(ros_message.full_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature2
  {
    size_t item_size = sizeof(ros_message.temperature2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperature_pcb
  {
    size_t item_size = sizeof(ros_message.temperature_pcb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cycle_count
  {
    size_t item_size = sizeof(ros_message.cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message.dsg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message.chg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_major
  {
    size_t item_size = sizeof(ros_message.hw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hw_minor
  {
    size_t item_size = sizeof(ros_message.hw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_major
  {
    size_t item_size = sizeof(ros_message.fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_minor
  {
    size_t item_size = sizeof(ros_message.fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_patch
  {
    size_t item_size = sizeof(ros_message.fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fw_parameters_ok
  {
    size_t item_size = sizeof(ros_message.fw_parameters_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rec_fw_major
  {
    size_t item_size = sizeof(ros_message.rec_fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rec_fw_minor
  {
    size_t item_size = sizeof(ros_message.rec_fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rec_fw_patch
  {
    size_t item_size = sizeof(ros_message.rec_fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bl_major
  {
    size_t item_size = sizeof(ros_message.bl_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bl_minor
  {
    size_t item_size = sizeof(ros_message.bl_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_enabled
  {
    size_t item_size = sizeof(ros_message.status_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_current_limitation
  {
    size_t item_size = sizeof(ros_message.status_current_limitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_switch_off_warn1
  {
    size_t item_size = sizeof(ros_message.status_switch_off_warn1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_switch_off_warn2
  {
    size_t item_size = sizeof(ros_message.status_switch_off_warn2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_fully_discharged
  {
    size_t item_size = sizeof(ros_message.status_fully_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_nearly_discharged
  {
    size_t item_size = sizeof(ros_message.status_nearly_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_chargefet_on
  {
    size_t item_size = sizeof(ros_message.status_chargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_dischargefet_on
  {
    size_t item_size = sizeof(ros_message.status_dischargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_discharging
  {
    size_t item_size = sizeof(ros_message.status_discharging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_fully_charged
  {
    size_t item_size = sizeof(ros_message.status_fully_charged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_charging
  {
    size_t item_size = sizeof(ros_message.status_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_temp_charging_err
  {
    size_t item_size = sizeof(ros_message.status_temp_charging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_cell_over_voltage
  {
    size_t item_size = sizeof(ros_message.status_cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_cell_under_voltage
  {
    size_t item_size = sizeof(ros_message.status_cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_charge_over_current
  {
    size_t item_size = sizeof(ros_message.status_charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_shortcircuit
  {
    size_t item_size = sizeof(ros_message.status_shortcircuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_discharge_over_current
  {
    size_t item_size = sizeof(ros_message.status_discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_chargefet_voltage
  {
    size_t item_size = sizeof(ros_message.status_chargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_dischargefet_voltage
  {
    size_t item_size = sizeof(ros_message.status_dischargefet_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_temp_discharging_err
  {
    size_t item_size = sizeof(ros_message.status_temp_discharging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_charger_detected
  {
    size_t item_size = sizeof(ros_message.status_charger_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_bms_revision
  {
    size_t item_size = sizeof(ros_message.mnfct_bms_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_asn_revision
  {
    size_t item_size = sizeof(ros_message.mnfct_asn_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_year
  {
    size_t item_size = sizeof(ros_message.mnfct_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_week
  {
    size_t item_size = sizeof(ros_message.mnfct_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_model
  {
    size_t item_size = sizeof(ros_message.mnfct_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mnfct_serial
  {
    size_t item_size = sizeof(ros_message.mnfct_serial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: afe_i2c_error_count
  {
    size_t item_size = sizeof(ros_message.afe_i2c_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: app_error_count
  {
    size_t item_size = sizeof(ros_message.app_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fet_disable_state
  {
    size_t item_size = sizeof(ros_message.fet_disable_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_battery_msg_time
  {
    size_t item_size = sizeof(ros_message.last_battery_msg_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_battery_status
  {
    size_t item_size = sizeof(ros_message.sbs_battery_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_battery_status_raw
  {
    size_t item_size = sizeof(ros_message.sbs_battery_status_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_serial_1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sbs_serial_1.size() + 1);

  // Member: sbs_serial_2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sbs_serial_2.size() + 1);

  // Member: sbs_arti_nr_1
  {
    size_t item_size = sizeof(ros_message.sbs_arti_nr_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_arti_nr_2
  {
    size_t item_size = sizeof(ros_message.sbs_arti_nr_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_arti_nr_3
  {
    size_t item_size = sizeof(ros_message.sbs_arti_nr_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sbs_curr_flow_passive_state
  {
    size_t item_size = sizeof(ros_message.sbs_curr_flow_passive_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_oc1_count
  {
    size_t item_size = sizeof(ros_message.chg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_oc2_count
  {
    size_t item_size = sizeof(ros_message.chg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc1_count
  {
    size_t item_size = sizeof(ros_message.dsg_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc2_count
  {
    size_t item_size = sizeof(ros_message.dsg_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc3_count
  {
    size_t item_size = sizeof(ros_message.dsg_oc3_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: afe_oc1_count
  {
    size_t item_size = sizeof(ros_message.afe_oc1_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: afe_oc2_count
  {
    size_t item_size = sizeof(ros_message.afe_oc2_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message.chg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_latch_clear_count
  {
    size_t item_size = sizeof(ros_message.dsg_latch_clear_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: chg_oc_warning
  {
    size_t item_size = sizeof(ros_message.chg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dsg_oc_warning
  {
    size_t item_size = sizeof(ros_message.dsg_oc_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_key_BMSData(
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

  // Member: pack_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: charge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: discharge_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state_of_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: remaining_time_to_full_charge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: remaining_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: state_of_health
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cell_voltage
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

  // Member: cell_voltage_diff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wst_serial
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

  // Member: bmz_flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: full_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: full_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature_pcb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cycle_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dsg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: chg_overcurrent_counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fw_parameters_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rec_fw_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rec_fw_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rec_fw_patch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bl_major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bl_minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_current_limitation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_switch_off_warn1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_switch_off_warn2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_fully_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_nearly_discharged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_chargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_dischargefet_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_discharging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_fully_charged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_temp_charging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_cell_over_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_cell_under_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_charge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_shortcircuit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_discharge_over_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_chargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: status_dischargefet_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: status_temp_discharging_err
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_charger_detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mnfct_bms_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mnfct_asn_revision
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mnfct_year
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mnfct_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mnfct_model
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mnfct_serial
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: afe_i2c_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: app_error_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fet_disable_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: last_battery_msg_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sbs_battery_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sbs_battery_status_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sbs_serial_1
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

  // Member: sbs_serial_2
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

  // Member: sbs_arti_nr_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sbs_arti_nr_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sbs_arti_nr_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sbs_curr_flow_passive_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: chg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsg_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsg_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsg_oc3_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: afe_oc1_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: afe_oc2_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsg_latch_clear_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chg_oc_warning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsg_oc_warning
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
    using DataType = mir_msgs::msg::BMSData;
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
  auto typed_message =
    static_cast<const mir_msgs::msg::BMSData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BMSData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::BMSData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BMSData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::BMSData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BMSData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BMSData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BMSData__callbacks = {
  "mir_msgs::msg",
  "BMSData",
  _BMSData__cdr_serialize,
  _BMSData__cdr_deserialize,
  _BMSData__get_serialized_size,
  _BMSData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BMSData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BMSData__callbacks,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__BMSData__get_type_hash,
  &mir_msgs__msg__BMSData__get_type_description,
  &mir_msgs__msg__BMSData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mir_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mir_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::BMSData>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_BMSData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, BMSData)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_BMSData__handle;
}

#ifdef __cplusplus
}
#endif
