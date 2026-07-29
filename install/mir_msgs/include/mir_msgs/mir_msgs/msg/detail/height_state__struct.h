// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/HeightState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/height_state.h"


#ifndef MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HEIGHT_UNKNOWN'.
enum
{
  mir_msgs__msg__HeightState__HEIGHT_UNKNOWN = 0
};

/// Constant 'HEIGHT_HOMING'.
enum
{
  mir_msgs__msg__HeightState__HEIGHT_HOMING = 1
};

/// Constant 'HEIGHT_IDLE'.
enum
{
  mir_msgs__msg__HeightState__HEIGHT_IDLE = 2
};

/// Constant 'HEIGHT_CHANGING'.
enum
{
  mir_msgs__msg__HeightState__HEIGHT_CHANGING = 3
};

/// Constant 'HEIGHT_ERROR'.
enum
{
  mir_msgs__msg__HeightState__HEIGHT_ERROR = 4
};

/// Struct defined in msg/HeightState in the package mir_msgs.
typedef struct mir_msgs__msg__HeightState
{
  uint8_t state;
} mir_msgs__msg__HeightState;

// Struct for a sequence of mir_msgs__msg__HeightState.
typedef struct mir_msgs__msg__HeightState__Sequence
{
  mir_msgs__msg__HeightState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__HeightState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_H_
