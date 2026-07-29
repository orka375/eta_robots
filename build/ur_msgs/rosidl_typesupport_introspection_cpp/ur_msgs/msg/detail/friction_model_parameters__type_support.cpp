// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_msgs/msg/detail/friction_model_parameters__functions.h"
#include "ur_msgs/msg/detail/friction_model_parameters__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FrictionModelParameters_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_msgs::msg::FrictionModelParameters(_init);
}

void FrictionModelParameters_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_msgs::msg::FrictionModelParameters *>(message_memory);
  typed_message->~FrictionModelParameters();
}

size_t size_function__FrictionModelParameters__viscous_scale(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FrictionModelParameters__viscous_scale(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FrictionModelParameters__viscous_scale(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrictionModelParameters__viscous_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrictionModelParameters__viscous_scale(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrictionModelParameters__viscous_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrictionModelParameters__viscous_scale(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FrictionModelParameters__viscous_scale(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FrictionModelParameters__coulomb_scale(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FrictionModelParameters__coulomb_scale(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FrictionModelParameters__coulomb_scale(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrictionModelParameters__coulomb_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrictionModelParameters__coulomb_scale(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrictionModelParameters__coulomb_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrictionModelParameters__coulomb_scale(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FrictionModelParameters__coulomb_scale(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FrictionModelParameters_message_member_array[2] = {
  {
    "viscous_scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs::msg::FrictionModelParameters, viscous_scale),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrictionModelParameters__viscous_scale,  // size() function pointer
    get_const_function__FrictionModelParameters__viscous_scale,  // get_const(index) function pointer
    get_function__FrictionModelParameters__viscous_scale,  // get(index) function pointer
    fetch_function__FrictionModelParameters__viscous_scale,  // fetch(index, &value) function pointer
    assign_function__FrictionModelParameters__viscous_scale,  // assign(index, value) function pointer
    resize_function__FrictionModelParameters__viscous_scale  // resize(index) function pointer
  },
  {
    "coulomb_scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs::msg::FrictionModelParameters, coulomb_scale),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrictionModelParameters__coulomb_scale,  // size() function pointer
    get_const_function__FrictionModelParameters__coulomb_scale,  // get_const(index) function pointer
    get_function__FrictionModelParameters__coulomb_scale,  // get(index) function pointer
    fetch_function__FrictionModelParameters__coulomb_scale,  // fetch(index, &value) function pointer
    assign_function__FrictionModelParameters__coulomb_scale,  // assign(index, value) function pointer
    resize_function__FrictionModelParameters__coulomb_scale  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FrictionModelParameters_message_members = {
  "ur_msgs::msg",  // message namespace
  "FrictionModelParameters",  // message name
  2,  // number of fields
  sizeof(ur_msgs::msg::FrictionModelParameters),
  false,  // has_any_key_member_
  FrictionModelParameters_message_member_array,  // message members
  FrictionModelParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  FrictionModelParameters_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FrictionModelParameters_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FrictionModelParameters_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__msg__FrictionModelParameters__get_type_hash,
  &ur_msgs__msg__FrictionModelParameters__get_type_description,
  &ur_msgs__msg__FrictionModelParameters__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ur_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::msg::FrictionModelParameters>()
{
  return &::ur_msgs::msg::rosidl_typesupport_introspection_cpp::FrictionModelParameters_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, msg, FrictionModelParameters)() {
  return &::ur_msgs::msg::rosidl_typesupport_introspection_cpp::FrictionModelParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
