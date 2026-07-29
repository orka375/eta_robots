// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sdc21x0:msg/MotorCurrents.idl
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
#include "sdc21x0/msg/detail/motor_currents__struct.h"
#include "sdc21x0/msg/detail/motor_currents__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sdc21x0__msg__motor_currents__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sdc21x0.msg._motor_currents", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("MotorCurrents", (char *)PyUnicode_1BYTE_DATA(name_attr), 13) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  sdc21x0__msg__MotorCurrents * ros_message = _ros_message;
  {  // left_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_motor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_motor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sdc21x0__msg__motor_currents__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorCurrents */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sdc21x0.msg._motor_currents");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorCurrents");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sdc21x0__msg__MotorCurrents * ros_message = (sdc21x0__msg__MotorCurrents *)raw_ros_message;
  {  // left_motor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
