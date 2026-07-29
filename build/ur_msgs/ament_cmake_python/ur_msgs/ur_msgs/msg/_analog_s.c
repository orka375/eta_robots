// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ur_msgs:msg/Analog.idl
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
#include "ur_msgs/msg/detail/analog__struct.h"
#include "ur_msgs/msg/detail/analog__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ur_msgs__msg__analog__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ur_msgs.msg._analog", (char *)PyUnicode_1BYTE_DATA(module_attr), 19) == 0);
    assert(strncmp("Analog", (char *)PyUnicode_1BYTE_DATA(name_attr), 6) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  ur_msgs__msg__Analog * ros_message = _ros_message;
  {  // pin
    PyObject * field = PyObject_GetAttrString(_pymsg, "pin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pin = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // domain
    PyObject * field = PyObject_GetAttrString(_pymsg, "domain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->domain = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->state = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ur_msgs__msg__analog__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Analog */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ur_msgs.msg._analog");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Analog");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ur_msgs__msg__Analog * ros_message = (ur_msgs__msg__Analog *)raw_ros_message;
  {  // pin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // domain
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->domain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "domain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
