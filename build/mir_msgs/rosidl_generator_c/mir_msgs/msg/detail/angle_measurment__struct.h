// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/AngleMeasurment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/angle_measurment.h"


#ifndef MIR_MSGS__MSG__DETAIL__ANGLE_MEASURMENT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__ANGLE_MEASURMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/AngleMeasurment in the package mir_msgs.
typedef struct mir_msgs__msg__AngleMeasurment
{
  /// radians
  double angle;
  builtin_interfaces__msg__Time timestamp;
} mir_msgs__msg__AngleMeasurment;

// Struct for a sequence of mir_msgs__msg__AngleMeasurment.
typedef struct mir_msgs__msg__AngleMeasurment__Sequence
{
  mir_msgs__msg__AngleMeasurment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__AngleMeasurment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__ANGLE_MEASURMENT__STRUCT_H_
