// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/HeightState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/height_state.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/height_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_HeightState_state
{
public:
  Init_HeightState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mir_msgs::msg::HeightState state(::mir_msgs::msg::HeightState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::HeightState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::HeightState>()
{
  return mir_msgs::msg::builder::Init_HeightState_state();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__BUILDER_HPP_
