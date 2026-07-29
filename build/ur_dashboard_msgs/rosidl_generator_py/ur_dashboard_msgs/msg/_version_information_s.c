// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ur_dashboard_msgs:msg/VersionInformation.idl
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
#include "ur_dashboard_msgs/msg/detail/version_information__struct.h"
#include "ur_dashboard_msgs/msg/detail/version_information__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ur_dashboard_msgs__msg__version_information__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ur_dashboard_msgs.msg._version_information", (char *)PyUnicode_1BYTE_DATA(module_attr), 42) == 0);
    assert(strncmp("VersionInformation", (char *)PyUnicode_1BYTE_DATA(name_attr), 18) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  ur_dashboard_msgs__msg__VersionInformation * ros_message = _ros_message;
  {  // major
    PyObject * field = PyObject_GetAttrString(_pymsg, "major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->major = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->minor = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bugfix
    PyObject * field = PyObject_GetAttrString(_pymsg, "bugfix");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bugfix = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // build
    PyObject * field = PyObject_GetAttrString(_pymsg, "build");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->build = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ur_dashboard_msgs__msg__version_information__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VersionInformation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ur_dashboard_msgs.msg._version_information");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VersionInformation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ur_dashboard_msgs__msg__VersionInformation * ros_message = (ur_dashboard_msgs__msg__VersionInformation *)raw_ros_message;
  {  // major
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bugfix
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bugfix);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bugfix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // build
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->build);
    {
      int rc = PyObject_SetAttrString(_pymessage, "build", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
