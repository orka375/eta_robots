// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/SkidDetectionStampedFloat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/skid_detection_stamped_float.h"


#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SkidDetectionStampedFloat in the package mir_msgs.
typedef struct mir_msgs__msg__SkidDetectionStampedFloat
{
  builtin_interfaces__msg__Time time_stamp;
  double value;
} mir_msgs__msg__SkidDetectionStampedFloat;

// Struct for a sequence of mir_msgs__msg__SkidDetectionStampedFloat.
typedef struct mir_msgs__msg__SkidDetectionStampedFloat__Sequence
{
  mir_msgs__msg__SkidDetectionStampedFloat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__SkidDetectionStampedFloat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__STRUCT_H_
