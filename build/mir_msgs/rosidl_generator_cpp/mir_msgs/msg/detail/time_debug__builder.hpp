// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/time_debug.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__TIME_DEBUG__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__TIME_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/time_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeDebug_time_elapsed
{
public:
  explicit Init_TimeDebug_time_elapsed(::mir_msgs::msg::TimeDebug & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::TimeDebug time_elapsed(::mir_msgs::msg::TimeDebug::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::TimeDebug msg_;
};

class Init_TimeDebug_description
{
public:
  Init_TimeDebug_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeDebug_time_elapsed description(::mir_msgs::msg::TimeDebug::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_TimeDebug_time_elapsed(msg_);
  }

private:
  ::mir_msgs::msg::TimeDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::TimeDebug>()
{
  return mir_msgs::msg::builder::Init_TimeDebug_description();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__TIME_DEBUG__BUILDER_HPP_
