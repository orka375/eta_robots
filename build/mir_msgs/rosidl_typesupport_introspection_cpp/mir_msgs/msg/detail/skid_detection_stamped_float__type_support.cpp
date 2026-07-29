// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/SkidDetectionStampedFloat.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mir_msgs/msg/detail/skid_detection_stamped_float__functions.h"
#include "mir_msgs/msg/detail/skid_detection_stamped_float__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mir_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SkidDetectionStampedFloat_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mir_msgs::msg::SkidDetectionStampedFloat(_init);
}

void SkidDetectionStampedFloat_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mir_msgs::msg::SkidDetectionStampedFloat *>(message_memory);
  typed_message->~SkidDetectionStampedFloat();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SkidDetectionStampedFloat_message_member_array[2] = {
  {
    "time_stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::SkidDetectionStampedFloat, time_stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::SkidDetectionStampedFloat, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SkidDetectionStampedFloat_message_members = {
  "mir_msgs::msg",  // message namespace
  "SkidDetectionStampedFloat",  // message name
  2,  // number of fields
  sizeof(mir_msgs::msg::SkidDetectionStampedFloat),
  false,  // has_any_key_member_
  SkidDetectionStampedFloat_message_member_array,  // message members
  SkidDetectionStampedFloat_init_function,  // function to initialize message memory (memory has to be allocated)
  SkidDetectionStampedFloat_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SkidDetectionStampedFloat_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SkidDetectionStampedFloat_message_members,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__SkidDetectionStampedFloat__get_type_hash,
  &mir_msgs__msg__SkidDetectionStampedFloat__get_type_description,
  &mir_msgs__msg__SkidDetectionStampedFloat__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mir_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::SkidDetectionStampedFloat>()
{
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::SkidDetectionStampedFloat_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mir_msgs, msg, SkidDetectionStampedFloat)() {
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::SkidDetectionStampedFloat_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
