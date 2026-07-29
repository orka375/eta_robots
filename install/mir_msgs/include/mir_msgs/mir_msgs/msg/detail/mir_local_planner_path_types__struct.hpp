// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/MirLocalPlannerPathTypes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/mir_local_planner_path_types.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__MirLocalPlannerPathTypes __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__MirLocalPlannerPathTypes __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MirLocalPlannerPathTypes_
{
  using Type = MirLocalPlannerPathTypes_<ContainerAllocator>;

  explicit MirLocalPlannerPathTypes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_type = 0;
    }
  }

  explicit MirLocalPlannerPathTypes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_type = 0;
    }
  }

  // field types and members
  using _path_type_type =
    uint8_t;
  _path_type_type path_type;

  // setters for named parameter idiom
  Type & set__path_type(
    const uint8_t & _arg)
  {
    this->path_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REVERSE_TROLLEY_STANDARD =
    1u;
  static constexpr uint8_t REVERSE_TROLLEY_FAST =
    2u;
  static constexpr uint8_t REVERSE_TROLLEY_COMPACT =
    3u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__MirLocalPlannerPathTypes
    std::shared_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__MirLocalPlannerPathTypes
    std::shared_ptr<mir_msgs::msg::MirLocalPlannerPathTypes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirLocalPlannerPathTypes_ & other) const
  {
    if (this->path_type != other.path_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirLocalPlannerPathTypes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirLocalPlannerPathTypes_

// alias to use template instance with default allocator
using MirLocalPlannerPathTypes =
  mir_msgs::msg::MirLocalPlannerPathTypes_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MirLocalPlannerPathTypes_<ContainerAllocator>::REVERSE_TROLLEY_STANDARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MirLocalPlannerPathTypes_<ContainerAllocator>::REVERSE_TROLLEY_FAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MirLocalPlannerPathTypes_<ContainerAllocator>::REVERSE_TROLLEY_COMPACT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__STRUCT_HPP_
