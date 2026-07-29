// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/msg/friction_model_parameters.hpp"


#ifndef UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__STRUCT_HPP_
#define UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_msgs__msg__FrictionModelParameters __attribute__((deprecated))
#else
# define DEPRECATED__ur_msgs__msg__FrictionModelParameters __declspec(deprecated)
#endif

namespace ur_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrictionModelParameters_
{
  using Type = FrictionModelParameters_<ContainerAllocator>;

  explicit FrictionModelParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FrictionModelParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _viscous_scale_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _viscous_scale_type viscous_scale;
  using _coulomb_scale_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _coulomb_scale_type coulomb_scale;

  // setters for named parameter idiom
  Type & set__viscous_scale(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->viscous_scale = _arg;
    return *this;
  }
  Type & set__coulomb_scale(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->coulomb_scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_msgs::msg::FrictionModelParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_msgs::msg::FrictionModelParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_msgs::msg::FrictionModelParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_msgs::msg::FrictionModelParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_msgs__msg__FrictionModelParameters
    std::shared_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_msgs__msg__FrictionModelParameters
    std::shared_ptr<ur_msgs::msg::FrictionModelParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrictionModelParameters_ & other) const
  {
    if (this->viscous_scale != other.viscous_scale) {
      return false;
    }
    if (this->coulomb_scale != other.coulomb_scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrictionModelParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrictionModelParameters_

// alias to use template instance with default allocator
using FrictionModelParameters =
  ur_msgs::msg::FrictionModelParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_msgs

#endif  // UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__STRUCT_HPP_
