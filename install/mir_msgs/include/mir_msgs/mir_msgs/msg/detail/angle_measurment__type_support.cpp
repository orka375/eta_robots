// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/AngleMeasurment.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mir_msgs/msg/detail/angle_measurment__functions.h"
#include "mir_msgs/msg/detail/angle_measurment__struct.hpp"
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

void AngleMeasurment_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mir_msgs::msg::AngleMeasurment(_init);
}

void AngleMeasurment_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mir_msgs::msg::AngleMeasurment *>(message_memory);
  typed_message->~AngleMeasurment();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AngleMeasurment_message_member_array[2] = {
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::AngleMeasurment, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::AngleMeasurment, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AngleMeasurment_message_members = {
  "mir_msgs::msg",  // message namespace
  "AngleMeasurment",  // message name
  2,  // number of fields
  sizeof(mir_msgs::msg::AngleMeasurment),
  false,  // has_any_key_member_
  AngleMeasurment_message_member_array,  // message members
  AngleMeasurment_init_function,  // function to initialize message memory (memory has to be allocated)
  AngleMeasurment_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AngleMeasurment_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AngleMeasurment_message_members,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__AngleMeasurment__get_type_hash,
  &mir_msgs__msg__AngleMeasurment__get_type_description,
  &mir_msgs__msg__AngleMeasurment__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mir_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::AngleMeasurment>()
{
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::AngleMeasurment_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mir_msgs, msg, AngleMeasurment)() {
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::AngleMeasurment_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
