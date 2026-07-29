// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mir_msgs/msg/detail/bms_data__struct.h"
#include "mir_msgs/msg/detail/bms_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__bms_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("mir_msgs.msg._bms_data", (char *)PyUnicode_1BYTE_DATA(module_attr), 22) == 0);
    assert(strncmp("BMSData", (char *)PyUnicode_1BYTE_DATA(name_attr), 7) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mir_msgs__msg__BMSData * ros_message = _ros_message;
  {  // pack_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "pack_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pack_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charge_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charge_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // discharge_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->discharge_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state_of_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_of_charge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->state_of_charge = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_time_to_full_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_time_to_full_charge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_time_to_full_charge = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_capacity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // state_of_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_of_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_of_health = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_flags = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cell_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_voltage");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint32_t);
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->cell_voltage), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->cell_voltage.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cell_voltage'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->cell_voltage), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->cell_voltage.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint32_t tmp = PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // cell_voltage_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_voltage_diff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cell_voltage_diff = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wst_serial
    PyObject * field = PyObject_GetAttrString(_pymsg, "wst_serial");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->wst_serial, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bmz_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "bmz_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bmz_flag = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // battery_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // full_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->full_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // full_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->full_capacity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temperature2
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temperature_pcb
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_pcb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature_pcb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycle_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dsg_overcurrent_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_overcurrent_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsg_overcurrent_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // chg_overcurrent_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "chg_overcurrent_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chg_overcurrent_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hw_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_major = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hw_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_minor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fw_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "fw_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fw_major = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fw_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "fw_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fw_minor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fw_patch
    PyObject * field = PyObject_GetAttrString(_pymsg, "fw_patch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fw_patch = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fw_parameters_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "fw_parameters_ok");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fw_parameters_ok = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rec_fw_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "rec_fw_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rec_fw_major = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rec_fw_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "rec_fw_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rec_fw_minor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rec_fw_patch
    PyObject * field = PyObject_GetAttrString(_pymsg, "rec_fw_patch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rec_fw_patch = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bl_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bl_major = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bl_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bl_minor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_enabled");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_enabled = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_current_limitation
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_current_limitation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_current_limitation = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_switch_off_warn1
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_switch_off_warn1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_switch_off_warn1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_switch_off_warn2
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_switch_off_warn2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_switch_off_warn2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_fully_discharged
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_fully_discharged");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_fully_discharged = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_nearly_discharged
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_nearly_discharged");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_nearly_discharged = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_chargefet_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_chargefet_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_chargefet_on = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_dischargefet_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_dischargefet_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_dischargefet_on = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_discharging
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_discharging");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_discharging = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_fully_charged
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_fully_charged");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_fully_charged = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_charging");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_charging = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_temp_charging_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_temp_charging_err");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_temp_charging_err = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_cell_over_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_cell_over_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_cell_over_voltage = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_cell_under_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_cell_under_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_cell_under_voltage = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_charge_over_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_charge_over_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_charge_over_current = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_shortcircuit
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_shortcircuit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_shortcircuit = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_discharge_over_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_discharge_over_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_discharge_over_current = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_chargefet_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_chargefet_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->status_chargefet_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status_dischargefet_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_dischargefet_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->status_dischargefet_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status_temp_discharging_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_temp_discharging_err");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_temp_discharging_err = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_charger_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_charger_detected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_charger_detected = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnfct_bms_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnfct_bms_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnfct_bms_revision = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnfct_asn_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnfct_asn_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnfct_asn_revision = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnfct_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnfct_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnfct_year = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnfct_week
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnfct_week");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnfct_week = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnfct_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnfct_model");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnfct_model = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnfct_serial
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnfct_serial");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnfct_serial = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // afe_i2c_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "afe_i2c_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->afe_i2c_error_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // app_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "app_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->app_error_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fet_disable_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "fet_disable_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fet_disable_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_battery_msg_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_battery_msg_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_battery_msg_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sbs_battery_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_battery_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbs_battery_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbs_battery_status_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_battery_status_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbs_battery_status_raw = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbs_serial_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_serial_1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sbs_serial_1, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sbs_serial_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_serial_2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sbs_serial_2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sbs_arti_nr_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_arti_nr_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbs_arti_nr_1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbs_arti_nr_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_arti_nr_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbs_arti_nr_2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbs_arti_nr_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_arti_nr_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbs_arti_nr_3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbs_curr_flow_passive_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbs_curr_flow_passive_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbs_curr_flow_passive_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chg_oc1_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "chg_oc1_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chg_oc1_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chg_oc2_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "chg_oc2_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chg_oc2_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dsg_oc1_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_oc1_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsg_oc1_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dsg_oc2_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_oc2_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsg_oc2_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dsg_oc3_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_oc3_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsg_oc3_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // afe_oc1_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "afe_oc1_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->afe_oc1_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // afe_oc2_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "afe_oc2_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->afe_oc2_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chg_latch_clear_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "chg_latch_clear_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chg_latch_clear_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dsg_latch_clear_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_latch_clear_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsg_latch_clear_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chg_oc_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "chg_oc_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chg_oc_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dsg_oc_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsg_oc_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dsg_oc_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__bms_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BMSData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._bms_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BMSData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__BMSData * ros_message = (mir_msgs__msg__BMSData *)raw_ros_message;
  {  // pack_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pack_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pack_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charge_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->discharge_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_of_charge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->state_of_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_of_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_time_to_full_charge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_time_to_full_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_time_to_full_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_capacity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->remaining_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_of_health
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state_of_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_of_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_flags
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_voltage
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "cell_voltage");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->cell_voltage.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->cell_voltage.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->cell_voltage.size * sizeof(uint32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // cell_voltage_diff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cell_voltage_diff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_voltage_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wst_serial
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->wst_serial.data,
      strlen(ros_message->wst_serial.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wst_serial", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bmz_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bmz_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bmz_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->full_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_capacity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->full_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->temperature2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_pcb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->temperature_pcb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_pcb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_overcurrent_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dsg_overcurrent_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_overcurrent_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chg_overcurrent_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->chg_overcurrent_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chg_overcurrent_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_major
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hw_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_minor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hw_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fw_major
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fw_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fw_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fw_minor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fw_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fw_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fw_patch
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fw_patch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fw_patch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fw_parameters_ok
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fw_parameters_ok);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fw_parameters_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rec_fw_major
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rec_fw_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rec_fw_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rec_fw_minor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rec_fw_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rec_fw_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rec_fw_patch
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rec_fw_patch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rec_fw_patch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bl_major
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bl_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bl_minor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bl_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_enabled
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_enabled);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_current_limitation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_current_limitation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_current_limitation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_switch_off_warn1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_switch_off_warn1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_switch_off_warn1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_switch_off_warn2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_switch_off_warn2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_switch_off_warn2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_fully_discharged
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_fully_discharged);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_fully_discharged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_nearly_discharged
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_nearly_discharged);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_nearly_discharged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_chargefet_on
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_chargefet_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_chargefet_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_dischargefet_on
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_dischargefet_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_dischargefet_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_discharging
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_discharging);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_discharging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_fully_charged
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_fully_charged);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_fully_charged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_charging
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_charging);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_temp_charging_err
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_temp_charging_err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_temp_charging_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_cell_over_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_cell_over_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_cell_over_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_cell_under_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_cell_under_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_cell_under_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_charge_over_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_charge_over_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_charge_over_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_shortcircuit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_shortcircuit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_shortcircuit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_discharge_over_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_discharge_over_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_discharge_over_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_chargefet_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->status_chargefet_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_chargefet_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_dischargefet_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->status_dischargefet_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_dischargefet_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_temp_discharging_err
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_temp_discharging_err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_temp_discharging_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_charger_detected
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_charger_detected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_charger_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnfct_bms_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnfct_bms_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnfct_bms_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnfct_asn_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnfct_asn_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnfct_asn_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnfct_year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnfct_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnfct_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnfct_week
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnfct_week);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnfct_week", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnfct_model
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnfct_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnfct_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnfct_serial
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnfct_serial);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnfct_serial", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // afe_i2c_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->afe_i2c_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "afe_i2c_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // app_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->app_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "app_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fet_disable_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fet_disable_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fet_disable_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_battery_msg_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_battery_msg_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_battery_msg_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_battery_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbs_battery_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_battery_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_battery_status_raw
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbs_battery_status_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_battery_status_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_serial_1
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sbs_serial_1.data,
      strlen(ros_message->sbs_serial_1.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_serial_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_serial_2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sbs_serial_2.data,
      strlen(ros_message->sbs_serial_2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_serial_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_arti_nr_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbs_arti_nr_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_arti_nr_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_arti_nr_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbs_arti_nr_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_arti_nr_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_arti_nr_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbs_arti_nr_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_arti_nr_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbs_curr_flow_passive_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbs_curr_flow_passive_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbs_curr_flow_passive_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chg_oc1_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chg_oc1_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chg_oc1_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chg_oc2_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chg_oc2_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chg_oc2_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_oc1_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dsg_oc1_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_oc1_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_oc2_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dsg_oc2_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_oc2_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_oc3_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dsg_oc3_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_oc3_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // afe_oc1_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->afe_oc1_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "afe_oc1_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // afe_oc2_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->afe_oc2_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "afe_oc2_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chg_latch_clear_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chg_latch_clear_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chg_latch_clear_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_latch_clear_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dsg_latch_clear_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_latch_clear_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chg_oc_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chg_oc_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chg_oc_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsg_oc_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dsg_oc_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsg_oc_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
