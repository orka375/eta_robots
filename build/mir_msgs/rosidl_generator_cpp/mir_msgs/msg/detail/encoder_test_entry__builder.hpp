// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/encoder_test_entry.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/encoder_test_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_EncoderTestEntry_user_direction
{
public:
  explicit Init_EncoderTestEntry_user_direction(::mir_msgs::msg::EncoderTestEntry & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::EncoderTestEntry user_direction(::mir_msgs::msg::EncoderTestEntry::_user_direction_type arg)
  {
    msg_.user_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::EncoderTestEntry msg_;
};

class Init_EncoderTestEntry_suggested_direction
{
public:
  explicit Init_EncoderTestEntry_suggested_direction(::mir_msgs::msg::EncoderTestEntry & msg)
  : msg_(msg)
  {}
  Init_EncoderTestEntry_user_direction suggested_direction(::mir_msgs::msg::EncoderTestEntry::_suggested_direction_type arg)
  {
    msg_.suggested_direction = std::move(arg);
    return Init_EncoderTestEntry_user_direction(msg_);
  }

private:
  ::mir_msgs::msg::EncoderTestEntry msg_;
};

class Init_EncoderTestEntry_right_dist
{
public:
  explicit Init_EncoderTestEntry_right_dist(::mir_msgs::msg::EncoderTestEntry & msg)
  : msg_(msg)
  {}
  Init_EncoderTestEntry_suggested_direction right_dist(::mir_msgs::msg::EncoderTestEntry::_right_dist_type arg)
  {
    msg_.right_dist = std::move(arg);
    return Init_EncoderTestEntry_suggested_direction(msg_);
  }

private:
  ::mir_msgs::msg::EncoderTestEntry msg_;
};

class Init_EncoderTestEntry_left_dist
{
public:
  explicit Init_EncoderTestEntry_left_dist(::mir_msgs::msg::EncoderTestEntry & msg)
  : msg_(msg)
  {}
  Init_EncoderTestEntry_right_dist left_dist(::mir_msgs::msg::EncoderTestEntry::_left_dist_type arg)
  {
    msg_.left_dist = std::move(arg);
    return Init_EncoderTestEntry_right_dist(msg_);
  }

private:
  ::mir_msgs::msg::EncoderTestEntry msg_;
};

class Init_EncoderTestEntry_command_distance
{
public:
  explicit Init_EncoderTestEntry_command_distance(::mir_msgs::msg::EncoderTestEntry & msg)
  : msg_(msg)
  {}
  Init_EncoderTestEntry_left_dist command_distance(::mir_msgs::msg::EncoderTestEntry::_command_distance_type arg)
  {
    msg_.command_distance = std::move(arg);
    return Init_EncoderTestEntry_left_dist(msg_);
  }

private:
  ::mir_msgs::msg::EncoderTestEntry msg_;
};

class Init_EncoderTestEntry_command_velocity
{
public:
  Init_EncoderTestEntry_command_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderTestEntry_command_distance command_velocity(::mir_msgs::msg::EncoderTestEntry::_command_velocity_type arg)
  {
    msg_.command_velocity = std::move(arg);
    return Init_EncoderTestEntry_command_distance(msg_);
  }

private:
  ::mir_msgs::msg::EncoderTestEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::EncoderTestEntry>()
{
  return mir_msgs::msg::builder::Init_EncoderTestEntry_command_velocity();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__BUILDER_HPP_
