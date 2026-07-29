// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
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
#include "mir_msgs/msg/detail/precision_docking_status__struct.h"
#include "mir_msgs/msg/detail/precision_docking_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__precision_docking_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mir_msgs.msg._precision_docking_status", (char *)PyUnicode_1BYTE_DATA(module_attr), 38) == 0);
    assert(strncmp("PrecisionDockingStatus", (char *)PyUnicode_1BYTE_DATA(name_attr), 22) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mir_msgs__msg__PrecisionDockingStatus * ros_message = _ros_message;
  {  // connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motor_forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_forward");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motor_forward = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motor_back
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_back");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motor_back = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_docking
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_docking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_docking = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_docking
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_docking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_docking = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__precision_docking_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PrecisionDockingStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._precision_docking_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PrecisionDockingStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__PrecisionDockingStatus * ros_message = (mir_msgs__msg__PrecisionDockingStatus *)raw_ros_message;
  {  // connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_forward
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motor_forward ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_forward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_back
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motor_back ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_back", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_docking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_docking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_docking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_docking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_docking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_docking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
