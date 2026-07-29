// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/time_debug.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__TIME_DEBUG__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__TIME_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__TimeDebug __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__TimeDebug __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeDebug_
{
  using Type = TimeDebug_<ContainerAllocator>;

  explicit TimeDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TimeDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _description_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _description_type description;
  using _time_elapsed_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _time_elapsed_type time_elapsed;

  // setters for named parameter idiom
  Type & set__description(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__time_elapsed(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::TimeDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::TimeDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::TimeDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::TimeDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__TimeDebug
    std::shared_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__TimeDebug
    std::shared_ptr<mir_msgs::msg::TimeDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeDebug_ & other) const
  {
    if (this->description != other.description) {
      return false;
    }
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeDebug_

// alias to use template instance with default allocator
using TimeDebug =
  mir_msgs::msg::TimeDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__TIME_DEBUG__STRUCT_HPP_
