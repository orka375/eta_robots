// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/HookData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/hook_data.h"


#ifndef MIR_MSGS__MSG__DETAIL__HOOK_DATA__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__HOOK_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'angle'
#include "mir_msgs/msg/detail/angle_measurment__struct.h"

/// Struct defined in msg/HookData in the package mir_msgs.
typedef struct mir_msgs__msg__HookData
{
  mir_msgs__msg__AngleMeasurment angle;
  double height;
  double length;
  uint8_t brake_state;
  uint8_t gripper_state;
  uint8_t height_state;
} mir_msgs__msg__HookData;

// Struct for a sequence of mir_msgs__msg__HookData.
typedef struct mir_msgs__msg__HookData__Sequence
{
  mir_msgs__msg__HookData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__HookData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_DATA__STRUCT_H_
