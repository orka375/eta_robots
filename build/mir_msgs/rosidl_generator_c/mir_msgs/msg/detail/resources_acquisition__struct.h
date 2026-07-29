// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ResourcesAcquisition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/resources_acquisition.h"


#ifndef MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'path'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'position_guid'
// Member 'token'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ResourcesAcquisition in the package mir_msgs.
typedef struct mir_msgs__msg__ResourcesAcquisition
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__PoseStamped__Sequence path;
  rosidl_runtime_c__String position_guid;
  rosidl_runtime_c__String token;
} mir_msgs__msg__ResourcesAcquisition;

// Struct for a sequence of mir_msgs__msg__ResourcesAcquisition.
typedef struct mir_msgs__msg__ResourcesAcquisition__Sequence
{
  mir_msgs__msg__ResourcesAcquisition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ResourcesAcquisition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__STRUCT_H_
