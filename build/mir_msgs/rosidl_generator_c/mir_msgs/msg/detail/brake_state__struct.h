// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/BrakeState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/brake_state.h"


#ifndef MIR_MSGS__MSG__DETAIL__BRAKE_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__BRAKE_STATE__STRUCT_H_

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
  mir_msgs__msg__BrakeState__UNKNOWN = 0
};

/// Constant 'INITIALIZING'.
enum
{
  mir_msgs__msg__BrakeState__INITIALIZING = 1
};

/// Constant 'HOMING'.
enum
{
  mir_msgs__msg__BrakeState__HOMING = 2
};

/// Constant 'ACTIVE'.
enum
{
  mir_msgs__msg__BrakeState__ACTIVE = 3
};

/// Constant 'INACTIVE'.
enum
{
  mir_msgs__msg__BrakeState__INACTIVE = 4
};

/// Constant 'ACTIVATING'.
enum
{
  mir_msgs__msg__BrakeState__ACTIVATING = 5
};

/// Constant 'DEACTIVATING'.
enum
{
  mir_msgs__msg__BrakeState__DEACTIVATING = 6
};

/// Constant 'ERROR'.
enum
{
  mir_msgs__msg__BrakeState__ERROR = 7
};

/// Struct defined in msg/BrakeState in the package mir_msgs.
typedef struct mir_msgs__msg__BrakeState
{
  uint8_t state;
} mir_msgs__msg__BrakeState;

// Struct for a sequence of mir_msgs__msg__BrakeState.
typedef struct mir_msgs__msg__BrakeState__Sequence
{
  mir_msgs__msg__BrakeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__BrakeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__BRAKE_STATE__STRUCT_H_
