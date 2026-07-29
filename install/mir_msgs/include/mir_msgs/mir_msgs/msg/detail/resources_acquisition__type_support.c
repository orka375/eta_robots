// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/ResourcesAcquisition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/resources_acquisition__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/resources_acquisition__functions.h"
#include "mir_msgs/msg/detail/resources_acquisition__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `path`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `path`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `position_guid`
// Member `token`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__ResourcesAcquisition__init(message_memory);
}

void mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_fini_function(void * message_memory)
{
  mir_msgs__msg__ResourcesAcquisition__fini(message_memory);
}

size_t mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__size_function__ResourcesAcquisition__path(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__get_const_function__ResourcesAcquisition__path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__get_function__ResourcesAcquisition__path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__fetch_function__ResourcesAcquisition__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__get_const_function__ResourcesAcquisition__path(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__assign_function__ResourcesAcquisition__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__get_function__ResourcesAcquisition__path(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__resize_function__ResourcesAcquisition__path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__ResourcesAcquisition, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__ResourcesAcquisition, path),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__size_function__ResourcesAcquisition__path,  // size() function pointer
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__get_const_function__ResourcesAcquisition__path,  // get_const(index) function pointer
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__get_function__ResourcesAcquisition__path,  // get(index) function pointer
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__fetch_function__ResourcesAcquisition__path,  // fetch(index, &value) function pointer
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__assign_function__ResourcesAcquisition__path,  // assign(index, value) function pointer
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__resize_function__ResourcesAcquisition__path  // resize(index) function pointer
  },
  {
    "position_guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__ResourcesAcquisition, position_guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__ResourcesAcquisition, token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_members = {
  "mir_msgs__msg",  // message namespace
  "ResourcesAcquisition",  // message name
  4,  // number of fields
  sizeof(mir_msgs__msg__ResourcesAcquisition),
  false,  // has_any_key_member_
  mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_member_array,  // message members
  mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_type_support_handle = {
  0,
  &mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_members,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__ResourcesAcquisition__get_type_hash,
  &mir_msgs__msg__ResourcesAcquisition__get_type_description,
  &mir_msgs__msg__ResourcesAcquisition__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, ResourcesAcquisition)() {
  mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__ResourcesAcquisition__rosidl_typesupport_introspection_c__ResourcesAcquisition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
