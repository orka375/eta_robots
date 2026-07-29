// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/HookData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/hook_data.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__HOOK_DATA__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/hook_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_HookData_height_state
{
public:
  explicit Init_HookData_height_state(::mir_msgs::msg::HookData & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::HookData height_state(::mir_msgs::msg::HookData::_height_state_type arg)
  {
    msg_.height_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::HookData msg_;
};

class Init_HookData_gripper_state
{
public:
  explicit Init_HookData_gripper_state(::mir_msgs::msg::HookData & msg)
  : msg_(msg)
  {}
  Init_HookData_height_state gripper_state(::mir_msgs::msg::HookData::_gripper_state_type arg)
  {
    msg_.gripper_state = std::move(arg);
    return Init_HookData_height_state(msg_);
  }

private:
  ::mir_msgs::msg::HookData msg_;
};

class Init_HookData_brake_state
{
public:
  explicit Init_HookData_brake_state(::mir_msgs::msg::HookData & msg)
  : msg_(msg)
  {}
  Init_HookData_gripper_state brake_state(::mir_msgs::msg::HookData::_brake_state_type arg)
  {
    msg_.brake_state = std::move(arg);
    return Init_HookData_gripper_state(msg_);
  }

private:
  ::mir_msgs::msg::HookData msg_;
};

class Init_HookData_length
{
public:
  explicit Init_HookData_length(::mir_msgs::msg::HookData & msg)
  : msg_(msg)
  {}
  Init_HookData_brake_state length(::mir_msgs::msg::HookData::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_HookData_brake_state(msg_);
  }

private:
  ::mir_msgs::msg::HookData msg_;
};

class Init_HookData_height
{
public:
  explicit Init_HookData_height(::mir_msgs::msg::HookData & msg)
  : msg_(msg)
  {}
  Init_HookData_length height(::mir_msgs::msg::HookData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HookData_length(msg_);
  }

private:
  ::mir_msgs::msg::HookData msg_;
};

class Init_HookData_angle
{
public:
  Init_HookData_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HookData_height angle(::mir_msgs::msg::HookData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_HookData_height(msg_);
  }

private:
  ::mir_msgs::msg::HookData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::HookData>()
{
  return mir_msgs::msg::builder::Init_HookData_angle();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_DATA__BUILDER_HPP_
