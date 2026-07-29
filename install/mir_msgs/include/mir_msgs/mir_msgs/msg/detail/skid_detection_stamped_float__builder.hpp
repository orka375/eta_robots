// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/SkidDetectionStampedFloat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/skid_detection_stamped_float.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/skid_detection_stamped_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_SkidDetectionStampedFloat_value
{
public:
  explicit Init_SkidDetectionStampedFloat_value(::mir_msgs::msg::SkidDetectionStampedFloat & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::SkidDetectionStampedFloat value(::mir_msgs::msg::SkidDetectionStampedFloat::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionStampedFloat msg_;
};

class Init_SkidDetectionStampedFloat_time_stamp
{
public:
  Init_SkidDetectionStampedFloat_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkidDetectionStampedFloat_value time_stamp(::mir_msgs::msg::SkidDetectionStampedFloat::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SkidDetectionStampedFloat_value(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionStampedFloat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::SkidDetectionStampedFloat>()
{
  return mir_msgs::msg::builder::Init_SkidDetectionStampedFloat_time_stamp();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__BUILDER_HPP_
