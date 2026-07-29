// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/precision_docking_status.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__PrecisionDockingStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__PrecisionDockingStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrecisionDockingStatus_
{
  using Type = PrecisionDockingStatus_<ContainerAllocator>;

  explicit PrecisionDockingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->motor_forward = false;
      this->motor_back = false;
      this->left_docking = false;
      this->right_docking = false;
    }
  }

  explicit PrecisionDockingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->motor_forward = false;
      this->motor_back = false;
      this->left_docking = false;
      this->right_docking = false;
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;
  using _motor_forward_type =
    bool;
  _motor_forward_type motor_forward;
  using _motor_back_type =
    bool;
  _motor_back_type motor_back;
  using _left_docking_type =
    bool;
  _left_docking_type left_docking;
  using _right_docking_type =
    bool;
  _right_docking_type right_docking;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__motor_forward(
    const bool & _arg)
  {
    this->motor_forward = _arg;
    return *this;
  }
  Type & set__motor_back(
    const bool & _arg)
  {
    this->motor_back = _arg;
    return *this;
  }
  Type & set__left_docking(
    const bool & _arg)
  {
    this->left_docking = _arg;
    return *this;
  }
  Type & set__right_docking(
    const bool & _arg)
  {
    this->right_docking = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__PrecisionDockingStatus
    std::shared_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__PrecisionDockingStatus
    std::shared_ptr<mir_msgs::msg::PrecisionDockingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrecisionDockingStatus_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    if (this->motor_forward != other.motor_forward) {
      return false;
    }
    if (this->motor_back != other.motor_back) {
      return false;
    }
    if (this->left_docking != other.left_docking) {
      return false;
    }
    if (this->right_docking != other.right_docking) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrecisionDockingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrecisionDockingStatus_

// alias to use template instance with default allocator
using PrecisionDockingStatus =
  mir_msgs::msg::PrecisionDockingStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__STRUCT_HPP_
