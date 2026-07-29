// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mir_msgs/msg/detail/time_debug__functions.h"
#include "mir_msgs/msg/detail/time_debug__struct.hpp"
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

void TimeDebug_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mir_msgs::msg::TimeDebug(_init);
}

void TimeDebug_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mir_msgs::msg::TimeDebug *>(message_memory);
  typed_message->~TimeDebug();
}

size_t size_function__TimeDebug__description(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TimeDebug__description(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TimeDebug__description(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TimeDebug__description(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TimeDebug__description(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TimeDebug__description(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TimeDebug__description(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TimeDebug__description(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TimeDebug__time_elapsed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TimeDebug__time_elapsed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TimeDebug__time_elapsed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TimeDebug__time_elapsed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TimeDebug__time_elapsed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TimeDebug__time_elapsed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TimeDebug__time_elapsed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TimeDebug__time_elapsed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TimeDebug_message_member_array[2] = {
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::TimeDebug, description),  // bytes offset in struct
    nullptr,  // default value
    size_function__TimeDebug__description,  // size() function pointer
    get_const_function__TimeDebug__description,  // get_const(index) function pointer
    get_function__TimeDebug__description,  // get(index) function pointer
    fetch_function__TimeDebug__description,  // fetch(index, &value) function pointer
    assign_function__TimeDebug__description,  // assign(index, value) function pointer
    resize_function__TimeDebug__description  // resize(index) function pointer
  },
  {
    "time_elapsed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs::msg::TimeDebug, time_elapsed),  // bytes offset in struct
    nullptr,  // default value
    size_function__TimeDebug__time_elapsed,  // size() function pointer
    get_const_function__TimeDebug__time_elapsed,  // get_const(index) function pointer
    get_function__TimeDebug__time_elapsed,  // get(index) function pointer
    fetch_function__TimeDebug__time_elapsed,  // fetch(index, &value) function pointer
    assign_function__TimeDebug__time_elapsed,  // assign(index, value) function pointer
    resize_function__TimeDebug__time_elapsed  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TimeDebug_message_members = {
  "mir_msgs::msg",  // message namespace
  "TimeDebug",  // message name
  2,  // number of fields
  sizeof(mir_msgs::msg::TimeDebug),
  false,  // has_any_key_member_
  TimeDebug_message_member_array,  // message members
  TimeDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  TimeDebug_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TimeDebug_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TimeDebug_message_members,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__TimeDebug__get_type_hash,
  &mir_msgs__msg__TimeDebug__get_type_description,
  &mir_msgs__msg__TimeDebug__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mir_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::TimeDebug>()
{
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::TimeDebug_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mir_msgs, msg, TimeDebug)() {
  return &::mir_msgs::msg::rosidl_typesupport_introspection_cpp::TimeDebug_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
