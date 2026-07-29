// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
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
#include "mir_msgs/msg/detail/encoder_test_entry__struct.h"
#include "mir_msgs/msg/detail/encoder_test_entry__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__encoder_test_entry__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mir_msgs.msg._encoder_test_entry", (char *)PyUnicode_1BYTE_DATA(module_attr), 32) == 0);
    assert(strncmp("EncoderTestEntry", (char *)PyUnicode_1BYTE_DATA(name_attr), 16) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mir_msgs__msg__EncoderTestEntry * ros_message = _ros_message;
  {  // command_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->command_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // command_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->command_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // suggested_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "suggested_direction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->suggested_direction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // user_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_direction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->user_direction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__encoder_test_entry__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EncoderTestEntry */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._encoder_test_entry");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EncoderTestEntry");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__EncoderTestEntry * ros_message = (mir_msgs__msg__EncoderTestEntry *)raw_ros_message;
  {  // command_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->command_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->command_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // suggested_direction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->suggested_direction.data,
      strlen(ros_message->suggested_direction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "suggested_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_direction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->user_direction.data,
      strlen(ros_message->user_direction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
