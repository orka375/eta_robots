// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/ServiceResponseHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/service_response_header.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__ServiceResponseHeader __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__ServiceResponseHeader __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceResponseHeader_
{
  using Type = ServiceResponseHeader_<ContainerAllocator>;

  explicit ServiceResponseHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit ServiceResponseHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__ServiceResponseHeader
    std::shared_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__ServiceResponseHeader
    std::shared_ptr<mir_msgs::msg::ServiceResponseHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceResponseHeader_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceResponseHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceResponseHeader_

// alias to use template instance with default allocator
using ServiceResponseHeader =
  mir_msgs::msg::ServiceResponseHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__STRUCT_HPP_
