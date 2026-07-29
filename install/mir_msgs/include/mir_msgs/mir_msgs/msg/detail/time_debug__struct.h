// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/time_debug.h"


#ifndef MIR_MSGS__MSG__DETAIL__TIME_DEBUG__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__TIME_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'time_elapsed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TimeDebug in the package mir_msgs.
typedef struct mir_msgs__msg__TimeDebug
{
  rosidl_runtime_c__String__Sequence description;
  rosidl_runtime_c__double__Sequence time_elapsed;
} mir_msgs__msg__TimeDebug;

// Struct for a sequence of mir_msgs__msg__TimeDebug.
typedef struct mir_msgs__msg__TimeDebug__Sequence
{
  mir_msgs__msg__TimeDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__TimeDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__TIME_DEBUG__STRUCT_H_
