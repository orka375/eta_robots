// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/time_debug__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/time_debug__functions.h"
#include "mir_msgs/msg/detail/time_debug__struct.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_elapsed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__TimeDebug__init(message_memory);
}

void mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_fini_function(void * message_memory)
{
  mir_msgs__msg__TimeDebug__fini(message_memory);
}

size_t mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__size_function__TimeDebug__description(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_const_function__TimeDebug__description(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_function__TimeDebug__description(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__fetch_function__TimeDebug__description(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_const_function__TimeDebug__description(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__assign_function__TimeDebug__description(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_function__TimeDebug__description(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__resize_function__TimeDebug__description(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__size_function__TimeDebug__time_elapsed(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_const_function__TimeDebug__time_elapsed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_function__TimeDebug__time_elapsed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__fetch_function__TimeDebug__time_elapsed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_const_function__TimeDebug__time_elapsed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__assign_function__TimeDebug__time_elapsed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_function__TimeDebug__time_elapsed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__resize_function__TimeDebug__time_elapsed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_member_array[2] = {
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__TimeDebug, description),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__size_function__TimeDebug__description,  // size() function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_const_function__TimeDebug__description,  // get_const(index) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_function__TimeDebug__description,  // get(index) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__fetch_function__TimeDebug__description,  // fetch(index, &value) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__assign_function__TimeDebug__description,  // assign(index, value) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__resize_function__TimeDebug__description  // resize(index) function pointer
  },
  {
    "time_elapsed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__TimeDebug, time_elapsed),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__size_function__TimeDebug__time_elapsed,  // size() function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_const_function__TimeDebug__time_elapsed,  // get_const(index) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__get_function__TimeDebug__time_elapsed,  // get(index) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__fetch_function__TimeDebug__time_elapsed,  // fetch(index, &value) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__assign_function__TimeDebug__time_elapsed,  // assign(index, value) function pointer
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__resize_function__TimeDebug__time_elapsed  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_members = {
  "mir_msgs__msg",  // message namespace
  "TimeDebug",  // message name
  2,  // number of fields
  sizeof(mir_msgs__msg__TimeDebug),
  false,  // has_any_key_member_
  mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_member_array,  // message members
  mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_type_support_handle = {
  0,
  &mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_members,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__TimeDebug__get_type_hash,
  &mir_msgs__msg__TimeDebug__get_type_description,
  &mir_msgs__msg__TimeDebug__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, TimeDebug)() {
  if (!mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__TimeDebug__rosidl_typesupport_introspection_c__TimeDebug_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
