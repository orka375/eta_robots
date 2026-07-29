// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/ResourcesAcquisition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/resources_acquisition.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'path'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__ResourcesAcquisition __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__ResourcesAcquisition __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResourcesAcquisition_
{
  using Type = ResourcesAcquisition_<ContainerAllocator>;

  explicit ResourcesAcquisition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_guid = "";
      this->token = "";
    }
  }

  explicit ResourcesAcquisition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position_guid(_alloc),
    token(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_guid = "";
      this->token = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _path_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _path_type path;
  using _position_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_guid_type position_guid;
  using _token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_type token;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__position_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position_guid = _arg;
    return *this;
  }
  Type & set__token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__ResourcesAcquisition
    std::shared_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__ResourcesAcquisition
    std::shared_ptr<mir_msgs::msg::ResourcesAcquisition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResourcesAcquisition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->position_guid != other.position_guid) {
      return false;
    }
    if (this->token != other.token) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResourcesAcquisition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResourcesAcquisition_

// alias to use template instance with default allocator
using ResourcesAcquisition =
  mir_msgs::msg::ResourcesAcquisition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__STRUCT_HPP_
