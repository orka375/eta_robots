// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/msg/friction_model_parameters.h"


#ifndef UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__STRUCT_H_
#define UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'viscous_scale'
// Member 'coulomb_scale'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FrictionModelParameters in the package ur_msgs.
/**
  * Per-joint viscous friction scale factors for direct torque control.
  * Range per joint. 0 = no compensation, 1 = full compensation.
  * Default: [0.9, 0.9, 0.8, 0.9, 0.9, 0.9]
 */
typedef struct ur_msgs__msg__FrictionModelParameters
{
  rosidl_runtime_c__double__Sequence viscous_scale;
  /// Per-joint Coulomb friction scale factors for direct torque control.
  /// Range per joint. 0 = no compensation, 1 = full compensation.
  /// Default: [0.8, 0.8, 0.7, 0.8, 0.8, 0.8]
  rosidl_runtime_c__double__Sequence coulomb_scale;
} ur_msgs__msg__FrictionModelParameters;

// Struct for a sequence of ur_msgs__msg__FrictionModelParameters.
typedef struct ur_msgs__msg__FrictionModelParameters__Sequence
{
  ur_msgs__msg__FrictionModelParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__msg__FrictionModelParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__STRUCT_H_
