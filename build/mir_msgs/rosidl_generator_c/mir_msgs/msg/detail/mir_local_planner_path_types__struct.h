// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/MirLocalPlannerPathTypes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/mir_local_planner_path_types.h"


#ifndef MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REVERSE_TROLLEY_STANDARD'.
enum
{
  mir_msgs__msg__MirLocalPlannerPathTypes__REVERSE_TROLLEY_STANDARD = 1
};

/// Constant 'REVERSE_TROLLEY_FAST'.
enum
{
  mir_msgs__msg__MirLocalPlannerPathTypes__REVERSE_TROLLEY_FAST = 2
};

/// Constant 'REVERSE_TROLLEY_COMPACT'.
enum
{
  mir_msgs__msg__MirLocalPlannerPathTypes__REVERSE_TROLLEY_COMPACT = 3
};

/// Struct defined in msg/MirLocalPlannerPathTypes in the package mir_msgs.
typedef struct mir_msgs__msg__MirLocalPlannerPathTypes
{
  uint8_t path_type;
} mir_msgs__msg__MirLocalPlannerPathTypes;

// Struct for a sequence of mir_msgs__msg__MirLocalPlannerPathTypes.
typedef struct mir_msgs__msg__MirLocalPlannerPathTypes__Sequence
{
  mir_msgs__msg__MirLocalPlannerPathTypes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__MirLocalPlannerPathTypes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__STRUCT_H_
