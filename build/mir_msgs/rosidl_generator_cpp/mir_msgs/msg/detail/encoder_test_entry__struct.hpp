// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/encoder_test_entry.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__EncoderTestEntry __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__EncoderTestEntry __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderTestEntry_
{
  using Type = EncoderTestEntry_<ContainerAllocator>;

  explicit EncoderTestEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_velocity = 0.0;
      this->command_distance = 0.0;
      this->left_dist = 0.0;
      this->right_dist = 0.0;
      this->suggested_direction = "";
      this->user_direction = "";
    }
  }

  explicit EncoderTestEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : suggested_direction(_alloc),
    user_direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_velocity = 0.0;
      this->command_distance = 0.0;
      this->left_dist = 0.0;
      this->right_dist = 0.0;
      this->suggested_direction = "";
      this->user_direction = "";
    }
  }

  // field types and members
  using _command_velocity_type =
    double;
  _command_velocity_type command_velocity;
  using _command_distance_type =
    double;
  _command_distance_type command_distance;
  using _left_dist_type =
    double;
  _left_dist_type left_dist;
  using _right_dist_type =
    double;
  _right_dist_type right_dist;
  using _suggested_direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _suggested_direction_type suggested_direction;
  using _user_direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_direction_type user_direction;

  // setters for named parameter idiom
  Type & set__command_velocity(
    const double & _arg)
  {
    this->command_velocity = _arg;
    return *this;
  }
  Type & set__command_distance(
    const double & _arg)
  {
    this->command_distance = _arg;
    return *this;
  }
  Type & set__left_dist(
    const double & _arg)
  {
    this->left_dist = _arg;
    return *this;
  }
  Type & set__right_dist(
    const double & _arg)
  {
    this->right_dist = _arg;
    return *this;
  }
  Type & set__suggested_direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->suggested_direction = _arg;
    return *this;
  }
  Type & set__user_direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::EncoderTestEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::EncoderTestEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::EncoderTestEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::EncoderTestEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__EncoderTestEntry
    std::shared_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__EncoderTestEntry
    std::shared_ptr<mir_msgs::msg::EncoderTestEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderTestEntry_ & other) const
  {
    if (this->command_velocity != other.command_velocity) {
      return false;
    }
    if (this->command_distance != other.command_distance) {
      return false;
    }
    if (this->left_dist != other.left_dist) {
      return false;
    }
    if (this->right_dist != other.right_dist) {
      return false;
    }
    if (this->suggested_direction != other.suggested_direction) {
      return false;
    }
    if (this->user_direction != other.user_direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderTestEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderTestEntry_

// alias to use template instance with default allocator
using EncoderTestEntry =
  mir_msgs::msg::EncoderTestEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__STRUCT_HPP_
