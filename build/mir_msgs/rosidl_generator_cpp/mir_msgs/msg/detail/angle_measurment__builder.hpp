// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/AngleMeasurment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/angle_measurment.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__ANGLE_MEASURMENT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ANGLE_MEASURMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/angle_measurment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_AngleMeasurment_timestamp
{
public:
  explicit Init_AngleMeasurment_timestamp(::mir_msgs::msg::AngleMeasurment & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::AngleMeasurment timestamp(::mir_msgs::msg::AngleMeasurment::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::AngleMeasurment msg_;
};

class Init_AngleMeasurment_angle
{
public:
  Init_AngleMeasurment_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMeasurment_timestamp angle(::mir_msgs::msg::AngleMeasurment::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_AngleMeasurment_timestamp(msg_);
  }

private:
  ::mir_msgs::msg::AngleMeasurment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::AngleMeasurment>()
{
  return mir_msgs::msg::builder::Init_AngleMeasurment_angle();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ANGLE_MEASURMENT__BUILDER_HPP_
