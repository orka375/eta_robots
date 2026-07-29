// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ServiceResponseHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/service_response_header.h"


#ifndef MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServiceResponseHeader in the package mir_msgs.
typedef struct mir_msgs__msg__ServiceResponseHeader
{
  bool success;
  rosidl_runtime_c__String error;
} mir_msgs__msg__ServiceResponseHeader;

// Struct for a sequence of mir_msgs__msg__ServiceResponseHeader.
typedef struct mir_msgs__msg__ServiceResponseHeader__Sequence
{
  mir_msgs__msg__ServiceResponseHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ServiceResponseHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__STRUCT_H_
