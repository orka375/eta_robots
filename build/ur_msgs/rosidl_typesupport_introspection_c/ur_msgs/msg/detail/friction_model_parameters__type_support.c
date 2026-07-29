// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/msg/detail/friction_model_parameters__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/msg/detail/friction_model_parameters__functions.h"
#include "ur_msgs/msg/detail/friction_model_parameters__struct.h"


// Include directives for member types
// Member `viscous_scale`
// Member `coulomb_scale`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__msg__FrictionModelParameters__init(message_memory);
}

void ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_fini_function(void * message_memory)
{
  ur_msgs__msg__FrictionModelParameters__fini(message_memory);
}

size_t ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__size_function__FrictionModelParameters__viscous_scale(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_const_function__FrictionModelParameters__viscous_scale(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_function__FrictionModelParameters__viscous_scale(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__fetch_function__FrictionModelParameters__viscous_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_const_function__FrictionModelParameters__viscous_scale(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__assign_function__FrictionModelParameters__viscous_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_function__FrictionModelParameters__viscous_scale(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__resize_function__FrictionModelParameters__viscous_scale(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__size_function__FrictionModelParameters__coulomb_scale(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_const_function__FrictionModelParameters__coulomb_scale(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_function__FrictionModelParameters__coulomb_scale(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__fetch_function__FrictionModelParameters__coulomb_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_const_function__FrictionModelParameters__coulomb_scale(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__assign_function__FrictionModelParameters__coulomb_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_function__FrictionModelParameters__coulomb_scale(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__resize_function__FrictionModelParameters__coulomb_scale(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_member_array[2] = {
  {
    "viscous_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__FrictionModelParameters, viscous_scale),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__size_function__FrictionModelParameters__viscous_scale,  // size() function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_const_function__FrictionModelParameters__viscous_scale,  // get_const(index) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_function__FrictionModelParameters__viscous_scale,  // get(index) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__fetch_function__FrictionModelParameters__viscous_scale,  // fetch(index, &value) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__assign_function__FrictionModelParameters__viscous_scale,  // assign(index, value) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__resize_function__FrictionModelParameters__viscous_scale  // resize(index) function pointer
  },
  {
    "coulomb_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__msg__FrictionModelParameters, coulomb_scale),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__size_function__FrictionModelParameters__coulomb_scale,  // size() function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_const_function__FrictionModelParameters__coulomb_scale,  // get_const(index) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__get_function__FrictionModelParameters__coulomb_scale,  // get(index) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__fetch_function__FrictionModelParameters__coulomb_scale,  // fetch(index, &value) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__assign_function__FrictionModelParameters__coulomb_scale,  // assign(index, value) function pointer
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__resize_function__FrictionModelParameters__coulomb_scale  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_members = {
  "ur_msgs__msg",  // message namespace
  "FrictionModelParameters",  // message name
  2,  // number of fields
  sizeof(ur_msgs__msg__FrictionModelParameters),
  false,  // has_any_key_member_
  ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_member_array,  // message members
  ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_type_support_handle = {
  0,
  &ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__msg__FrictionModelParameters__get_type_hash,
  &ur_msgs__msg__FrictionModelParameters__get_type_description,
  &ur_msgs__msg__FrictionModelParameters__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, msg, FrictionModelParameters)() {
  if (!ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_type_support_handle.typesupport_identifier) {
    ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__msg__FrictionModelParameters__rosidl_typesupport_introspection_c__FrictionModelParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
