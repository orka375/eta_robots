// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/SkidDetectionDiff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/skid_detection_diff.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__SkidDetectionDiff __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__SkidDetectionDiff __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkidDetectionDiff_
{
  using Type = SkidDetectionDiff_<ContainerAllocator>;

  explicit SkidDetectionDiff_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enc_acc_x = 0.0;
      this->enc_acc_y = 0.0;
      this->enc_rot_th = 0.0;
      this->imu_acc_x = 0.0;
      this->imu_acc_y = 0.0;
      this->imu_rot_th = 0.0;
      this->diff_acc_x = 0.0;
      this->diff_acc_y = 0.0;
      this->diff_rot_th = 0.0;
    }
  }

  explicit SkidDetectionDiff_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enc_acc_x = 0.0;
      this->enc_acc_y = 0.0;
      this->enc_rot_th = 0.0;
      this->imu_acc_x = 0.0;
      this->imu_acc_y = 0.0;
      this->imu_rot_th = 0.0;
      this->diff_acc_x = 0.0;
      this->diff_acc_y = 0.0;
      this->diff_rot_th = 0.0;
    }
  }

  // field types and members
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _enc_acc_x_type =
    double;
  _enc_acc_x_type enc_acc_x;
  using _enc_acc_y_type =
    double;
  _enc_acc_y_type enc_acc_y;
  using _enc_rot_th_type =
    double;
  _enc_rot_th_type enc_rot_th;
  using _imu_acc_x_type =
    double;
  _imu_acc_x_type imu_acc_x;
  using _imu_acc_y_type =
    double;
  _imu_acc_y_type imu_acc_y;
  using _imu_rot_th_type =
    double;
  _imu_rot_th_type imu_rot_th;
  using _diff_acc_x_type =
    double;
  _diff_acc_x_type diff_acc_x;
  using _diff_acc_y_type =
    double;
  _diff_acc_y_type diff_acc_y;
  using _diff_rot_th_type =
    double;
  _diff_rot_th_type diff_rot_th;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__enc_acc_x(
    const double & _arg)
  {
    this->enc_acc_x = _arg;
    return *this;
  }
  Type & set__enc_acc_y(
    const double & _arg)
  {
    this->enc_acc_y = _arg;
    return *this;
  }
  Type & set__enc_rot_th(
    const double & _arg)
  {
    this->enc_rot_th = _arg;
    return *this;
  }
  Type & set__imu_acc_x(
    const double & _arg)
  {
    this->imu_acc_x = _arg;
    return *this;
  }
  Type & set__imu_acc_y(
    const double & _arg)
  {
    this->imu_acc_y = _arg;
    return *this;
  }
  Type & set__imu_rot_th(
    const double & _arg)
  {
    this->imu_rot_th = _arg;
    return *this;
  }
  Type & set__diff_acc_x(
    const double & _arg)
  {
    this->diff_acc_x = _arg;
    return *this;
  }
  Type & set__diff_acc_y(
    const double & _arg)
  {
    this->diff_acc_y = _arg;
    return *this;
  }
  Type & set__diff_rot_th(
    const double & _arg)
  {
    this->diff_rot_th = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__SkidDetectionDiff
    std::shared_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__SkidDetectionDiff
    std::shared_ptr<mir_msgs::msg::SkidDetectionDiff_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkidDetectionDiff_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->enc_acc_x != other.enc_acc_x) {
      return false;
    }
    if (this->enc_acc_y != other.enc_acc_y) {
      return false;
    }
    if (this->enc_rot_th != other.enc_rot_th) {
      return false;
    }
    if (this->imu_acc_x != other.imu_acc_x) {
      return false;
    }
    if (this->imu_acc_y != other.imu_acc_y) {
      return false;
    }
    if (this->imu_rot_th != other.imu_rot_th) {
      return false;
    }
    if (this->diff_acc_x != other.diff_acc_x) {
      return false;
    }
    if (this->diff_acc_y != other.diff_acc_y) {
      return false;
    }
    if (this->diff_rot_th != other.diff_rot_th) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkidDetectionDiff_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkidDetectionDiff_

// alias to use template instance with default allocator
using SkidDetectionDiff =
  mir_msgs::msg::SkidDetectionDiff_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__STRUCT_HPP_
