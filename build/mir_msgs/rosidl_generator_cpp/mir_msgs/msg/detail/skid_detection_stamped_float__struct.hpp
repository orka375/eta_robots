// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/SkidDetectionStampedFloat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/skid_detection_stamped_float.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__STRUCT_HPP_

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
# define DEPRECATED__mir_msgs__msg__SkidDetectionStampedFloat __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__SkidDetectionStampedFloat __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkidDetectionStampedFloat_
{
  using Type = SkidDetectionStampedFloat_<ContainerAllocator>;

  explicit SkidDetectionStampedFloat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
    }
  }

  explicit SkidDetectionStampedFloat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
    }
  }

  // field types and members
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__SkidDetectionStampedFloat
    std::shared_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__SkidDetectionStampedFloat
    std::shared_ptr<mir_msgs::msg::SkidDetectionStampedFloat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkidDetectionStampedFloat_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkidDetectionStampedFloat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkidDetectionStampedFloat_

// alias to use template instance with default allocator
using SkidDetectionStampedFloat =
  mir_msgs::msg::SkidDetectionStampedFloat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__STRUCT_HPP_
