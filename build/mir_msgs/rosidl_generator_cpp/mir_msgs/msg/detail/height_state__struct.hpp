// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/HeightState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/height_state.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__HeightState __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__HeightState __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeightState_
{
  using Type = HeightState_<ContainerAllocator>;

  explicit HeightState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit HeightState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HEIGHT_UNKNOWN =
    0u;
  static constexpr uint8_t HEIGHT_HOMING =
    1u;
  static constexpr uint8_t HEIGHT_IDLE =
    2u;
  static constexpr uint8_t HEIGHT_CHANGING =
    3u;
  static constexpr uint8_t HEIGHT_ERROR =
    4u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::HeightState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::HeightState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::HeightState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::HeightState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HeightState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HeightState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HeightState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HeightState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::HeightState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::HeightState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__HeightState
    std::shared_ptr<mir_msgs::msg::HeightState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__HeightState
    std::shared_ptr<mir_msgs::msg::HeightState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeightState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeightState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeightState_

// alias to use template instance with default allocator
using HeightState =
  mir_msgs::msg::HeightState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeightState_<ContainerAllocator>::HEIGHT_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeightState_<ContainerAllocator>::HEIGHT_HOMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeightState_<ContainerAllocator>::HEIGHT_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeightState_<ContainerAllocator>::HEIGHT_CHANGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeightState_<ContainerAllocator>::HEIGHT_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_HPP_
