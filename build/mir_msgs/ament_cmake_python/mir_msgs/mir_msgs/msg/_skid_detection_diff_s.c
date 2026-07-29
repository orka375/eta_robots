// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/SkidDetectionDiff.idl
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
#include "mir_msgs/msg/detail/skid_detection_diff__struct.h"
#include "mir_msgs/msg/detail/skid_detection_diff__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__skid_detection_diff__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mir_msgs.msg._skid_detection_diff", (char *)PyUnicode_1BYTE_DATA(module_attr), 33) == 0);
    assert(strncmp("SkidDetectionDiff", (char *)PyUnicode_1BYTE_DATA(name_attr), 17) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mir_msgs__msg__SkidDetectionDiff * ros_message = _ros_message;
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->time_stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // enc_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc_acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enc_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc_acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc_acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enc_rot_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc_rot_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc_rot_th = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_rot_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_rot_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_rot_th = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_rot_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_rot_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_rot_th = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__skid_detection_diff__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SkidDetectionDiff */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._skid_detection_diff");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SkidDetectionDiff");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__SkidDetectionDiff * ros_message = (mir_msgs__msg__SkidDetectionDiff *)raw_ros_message;
  {  // time_stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->time_stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc_acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc_rot_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc_rot_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc_rot_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_rot_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_rot_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_rot_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_rot_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_rot_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_rot_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
