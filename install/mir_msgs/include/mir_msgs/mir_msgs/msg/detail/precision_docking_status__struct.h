// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/precision_docking_status.h"


#ifndef MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PrecisionDockingStatus in the package mir_msgs.
typedef struct mir_msgs__msg__PrecisionDockingStatus
{
  bool connected;
  bool motor_forward;
  bool motor_back;
  bool left_docking;
  bool right_docking;
} mir_msgs__msg__PrecisionDockingStatus;

// Struct for a sequence of mir_msgs__msg__PrecisionDockingStatus.
typedef struct mir_msgs__msg__PrecisionDockingStatus__Sequence
{
  mir_msgs__msg__PrecisionDockingStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__PrecisionDockingStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__STRUCT_H_
