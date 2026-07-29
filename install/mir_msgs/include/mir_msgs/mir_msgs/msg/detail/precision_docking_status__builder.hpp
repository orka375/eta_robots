// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/precision_docking_status.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/precision_docking_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_PrecisionDockingStatus_right_docking
{
public:
  explicit Init_PrecisionDockingStatus_right_docking(::mir_msgs::msg::PrecisionDockingStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::PrecisionDockingStatus right_docking(::mir_msgs::msg::PrecisionDockingStatus::_right_docking_type arg)
  {
    msg_.right_docking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::PrecisionDockingStatus msg_;
};

class Init_PrecisionDockingStatus_left_docking
{
public:
  explicit Init_PrecisionDockingStatus_left_docking(::mir_msgs::msg::PrecisionDockingStatus & msg)
  : msg_(msg)
  {}
  Init_PrecisionDockingStatus_right_docking left_docking(::mir_msgs::msg::PrecisionDockingStatus::_left_docking_type arg)
  {
    msg_.left_docking = std::move(arg);
    return Init_PrecisionDockingStatus_right_docking(msg_);
  }

private:
  ::mir_msgs::msg::PrecisionDockingStatus msg_;
};

class Init_PrecisionDockingStatus_motor_back
{
public:
  explicit Init_PrecisionDockingStatus_motor_back(::mir_msgs::msg::PrecisionDockingStatus & msg)
  : msg_(msg)
  {}
  Init_PrecisionDockingStatus_left_docking motor_back(::mir_msgs::msg::PrecisionDockingStatus::_motor_back_type arg)
  {
    msg_.motor_back = std::move(arg);
    return Init_PrecisionDockingStatus_left_docking(msg_);
  }

private:
  ::mir_msgs::msg::PrecisionDockingStatus msg_;
};

class Init_PrecisionDockingStatus_motor_forward
{
public:
  explicit Init_PrecisionDockingStatus_motor_forward(::mir_msgs::msg::PrecisionDockingStatus & msg)
  : msg_(msg)
  {}
  Init_PrecisionDockingStatus_motor_back motor_forward(::mir_msgs::msg::PrecisionDockingStatus::_motor_forward_type arg)
  {
    msg_.motor_forward = std::move(arg);
    return Init_PrecisionDockingStatus_motor_back(msg_);
  }

private:
  ::mir_msgs::msg::PrecisionDockingStatus msg_;
};

class Init_PrecisionDockingStatus_connected
{
public:
  Init_PrecisionDockingStatus_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrecisionDockingStatus_motor_forward connected(::mir_msgs::msg::PrecisionDockingStatus::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_PrecisionDockingStatus_motor_forward(msg_);
  }

private:
  ::mir_msgs::msg::PrecisionDockingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::PrecisionDockingStatus>()
{
  return mir_msgs::msg::builder::Init_PrecisionDockingStatus_connected();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__BUILDER_HPP_
