// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/HookData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/hook_data.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__HOOK_DATA__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'angle'
#include "mir_msgs/msg/detail/angle_measurment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__HookData __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__HookData __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HookData_
{
  using Type = HookData_<ContainerAllocator>;

  explicit HookData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0;
      this->length = 0.0;
      this->brake_state = 0;
      this->gripper_state = 0;
      this->height_state = 0;
    }
  }

  explicit HookData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0;
      this->length = 0.0;
      this->brake_state = 0;
      this->gripper_state = 0;
      this->height_state = 0;
    }
  }

  // field types and members
  using _angle_type =
    mir_msgs::msg::AngleMeasurment_<ContainerAllocator>;
  _angle_type angle;
  using _height_type =
    double;
  _height_type height;
  using _length_type =
    double;
  _length_type length;
  using _brake_state_type =
    uint8_t;
  _brake_state_type brake_state;
  using _gripper_state_type =
    uint8_t;
  _gripper_state_type gripper_state;
  using _height_state_type =
    uint8_t;
  _height_state_type height_state;

  // setters for named parameter idiom
  Type & set__angle(
    const mir_msgs::msg::AngleMeasurment_<ContainerAllocator> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__brake_state(
    const uint8_t & _arg)
  {
    this->brake_state = _arg;
    return *this;
  }
  Type & set__gripper_state(
    const uint8_t & _arg)
  {
    this->gripper_state = _arg;
    return *this;
  }
  Type & set__height_state(
    const uint8_t & _arg)
  {
    this->height_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::HookData_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::HookData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::HookData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::HookData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HookData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HookData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HookData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HookData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::HookData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::HookData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__HookData
    std::shared_ptr<mir_msgs::msg::HookData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__HookData
    std::shared_ptr<mir_msgs::msg::HookData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HookData_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->brake_state != other.brake_state) {
      return false;
    }
    if (this->gripper_state != other.gripper_state) {
      return false;
    }
    if (this->height_state != other.height_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HookData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HookData_

// alias to use template instance with default allocator
using HookData =
  mir_msgs::msg::HookData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_DATA__STRUCT_HPP_
