// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/gripper_state.h"


#ifndef MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LOCK_UNKNOWN'.
enum
{
  mir_msgs__msg__GripperState__LOCK_UNKNOWN = 0
};

/// Constant 'LOCK_HOMING'.
enum
{
  mir_msgs__msg__GripperState__LOCK_HOMING = 1
};

/// Constant 'LOCK_OPEN'.
enum
{
  mir_msgs__msg__GripperState__LOCK_OPEN = 2
};

/// Constant 'LOCK_OPENING'.
enum
{
  mir_msgs__msg__GripperState__LOCK_OPENING = 3
};

/// Constant 'LOCK_CLOSED'.
enum
{
  mir_msgs__msg__GripperState__LOCK_CLOSED = 4
};

/// Constant 'LOCK_CLOSING'.
enum
{
  mir_msgs__msg__GripperState__LOCK_CLOSING = 6
};

/// Constant 'LOCK_ERROR'.
enum
{
  mir_msgs__msg__GripperState__LOCK_ERROR = 9
};

/// Struct defined in msg/GripperState in the package mir_msgs.
typedef struct mir_msgs__msg__GripperState
{
  uint8_t state;
} mir_msgs__msg__GripperState;

// Struct for a sequence of mir_msgs__msg__GripperState.
typedef struct mir_msgs__msg__GripperState__Sequence
{
  mir_msgs__msg__GripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__GripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
