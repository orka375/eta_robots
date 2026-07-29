// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/SkidDetectionDiff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/skid_detection_diff.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/skid_detection_diff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_SkidDetectionDiff_diff_rot_th
{
public:
  explicit Init_SkidDetectionDiff_diff_rot_th(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::SkidDetectionDiff diff_rot_th(::mir_msgs::msg::SkidDetectionDiff::_diff_rot_th_type arg)
  {
    msg_.diff_rot_th = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_diff_acc_y
{
public:
  explicit Init_SkidDetectionDiff_diff_acc_y(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_diff_rot_th diff_acc_y(::mir_msgs::msg::SkidDetectionDiff::_diff_acc_y_type arg)
  {
    msg_.diff_acc_y = std::move(arg);
    return Init_SkidDetectionDiff_diff_rot_th(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_diff_acc_x
{
public:
  explicit Init_SkidDetectionDiff_diff_acc_x(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_diff_acc_y diff_acc_x(::mir_msgs::msg::SkidDetectionDiff::_diff_acc_x_type arg)
  {
    msg_.diff_acc_x = std::move(arg);
    return Init_SkidDetectionDiff_diff_acc_y(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_imu_rot_th
{
public:
  explicit Init_SkidDetectionDiff_imu_rot_th(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_diff_acc_x imu_rot_th(::mir_msgs::msg::SkidDetectionDiff::_imu_rot_th_type arg)
  {
    msg_.imu_rot_th = std::move(arg);
    return Init_SkidDetectionDiff_diff_acc_x(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_imu_acc_y
{
public:
  explicit Init_SkidDetectionDiff_imu_acc_y(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_imu_rot_th imu_acc_y(::mir_msgs::msg::SkidDetectionDiff::_imu_acc_y_type arg)
  {
    msg_.imu_acc_y = std::move(arg);
    return Init_SkidDetectionDiff_imu_rot_th(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_imu_acc_x
{
public:
  explicit Init_SkidDetectionDiff_imu_acc_x(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_imu_acc_y imu_acc_x(::mir_msgs::msg::SkidDetectionDiff::_imu_acc_x_type arg)
  {
    msg_.imu_acc_x = std::move(arg);
    return Init_SkidDetectionDiff_imu_acc_y(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_enc_rot_th
{
public:
  explicit Init_SkidDetectionDiff_enc_rot_th(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_imu_acc_x enc_rot_th(::mir_msgs::msg::SkidDetectionDiff::_enc_rot_th_type arg)
  {
    msg_.enc_rot_th = std::move(arg);
    return Init_SkidDetectionDiff_imu_acc_x(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_enc_acc_y
{
public:
  explicit Init_SkidDetectionDiff_enc_acc_y(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_enc_rot_th enc_acc_y(::mir_msgs::msg::SkidDetectionDiff::_enc_acc_y_type arg)
  {
    msg_.enc_acc_y = std::move(arg);
    return Init_SkidDetectionDiff_enc_rot_th(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_enc_acc_x
{
public:
  explicit Init_SkidDetectionDiff_enc_acc_x(::mir_msgs::msg::SkidDetectionDiff & msg)
  : msg_(msg)
  {}
  Init_SkidDetectionDiff_enc_acc_y enc_acc_x(::mir_msgs::msg::SkidDetectionDiff::_enc_acc_x_type arg)
  {
    msg_.enc_acc_x = std::move(arg);
    return Init_SkidDetectionDiff_enc_acc_y(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

class Init_SkidDetectionDiff_time_stamp
{
public:
  Init_SkidDetectionDiff_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkidDetectionDiff_enc_acc_x time_stamp(::mir_msgs::msg::SkidDetectionDiff::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SkidDetectionDiff_enc_acc_x(msg_);
  }

private:
  ::mir_msgs::msg::SkidDetectionDiff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::SkidDetectionDiff>()
{
  return mir_msgs::msg::builder::Init_SkidDetectionDiff_time_stamp();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__BUILDER_HPP_
