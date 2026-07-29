// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/SoundEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/sound_event.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SOUND_EVENT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__SOUND_EVENT__STRUCT_HPP_

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
# define DEPRECATED__mir_msgs__msg__SoundEvent __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__SoundEvent __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoundEvent_
{
  using Type = SoundEvent_<ContainerAllocator>;

  explicit SoundEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound_guid = "";
      this->message = "";
      this->event = 0;
    }
  }

  explicit SoundEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init),
    sound_guid(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound_guid = "";
      this->message = "";
      this->event = 0;
    }
  }

  // field types and members
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _sound_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sound_guid_type sound_guid;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _event_type =
    uint8_t;
  _event_type event;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__sound_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sound_guid = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__event(
    const uint8_t & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t START =
    0u;
  static constexpr uint8_t STOP =
    1u;
  static constexpr uint8_t MUTE =
    2u;
  static constexpr uint8_t UNMUTE =
    3u;
  static constexpr uint8_t PAUSE =
    4u;
  static constexpr uint8_t UNPAUSE =
    5u;
  static constexpr uint8_t FINISH =
    6u;
  static constexpr uint8_t MUTEABLE =
    7u;
  static constexpr uint8_t REQ_PLAY =
    10u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::SoundEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::SoundEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SoundEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SoundEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__SoundEvent
    std::shared_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__SoundEvent
    std::shared_ptr<mir_msgs::msg::SoundEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundEvent_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->sound_guid != other.sound_guid) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundEvent_

// alias to use template instance with default allocator
using SoundEvent =
  mir_msgs::msg::SoundEvent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::MUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::UNMUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::UNPAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::FINISH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::MUTEABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SoundEvent_<ContainerAllocator>::REQ_PLAY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SOUND_EVENT__STRUCT_HPP_
