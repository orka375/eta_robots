// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/MovingState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/moving_state.h"


#ifndef MIR_MSGS__MSG__DETAIL__MOVING_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__MOVING_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  mir_msgs__msg__MovingState__UNKNOWN = 0
};

/// Constant 'MOVING'.
enum
{
  mir_msgs__msg__MovingState__MOVING = 1
};

/// Constant 'STOPPED'.
enum
{
  mir_msgs__msg__MovingState__STOPPED = 2
};

/// Constant 'STANDING_STILL'.
enum
{
  mir_msgs__msg__MovingState__STANDING_STILL = 3
};

/// Struct defined in msg/MovingState in the package mir_msgs.
typedef struct mir_msgs__msg__MovingState
{
  /// Current robot moving state
  uint8_t moving_state;
} mir_msgs__msg__MovingState;

// Struct for a sequence of mir_msgs__msg__MovingState.
typedef struct mir_msgs__msg__MovingState__Sequence
{
  mir_msgs__msg__MovingState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__MovingState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__MOVING_STATE__STRUCT_H_
