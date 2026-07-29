// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/encoder_test_entry.h"


#ifndef MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'suggested_direction'
// Member 'user_direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EncoderTestEntry in the package mir_msgs.
typedef struct mir_msgs__msg__EncoderTestEntry
{
  double command_velocity;
  double command_distance;
  double left_dist;
  double right_dist;
  rosidl_runtime_c__String suggested_direction;
  rosidl_runtime_c__String user_direction;
} mir_msgs__msg__EncoderTestEntry;

// Struct for a sequence of mir_msgs__msg__EncoderTestEntry.
typedef struct mir_msgs__msg__EncoderTestEntry__Sequence
{
  mir_msgs__msg__EncoderTestEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__EncoderTestEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__STRUCT_H_
