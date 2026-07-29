// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/SoundEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/sound_event.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SOUND_EVENT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__SOUND_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/sound_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_SoundEvent_event
{
public:
  explicit Init_SoundEvent_event(::mir_msgs::msg::SoundEvent & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::SoundEvent event(::mir_msgs::msg::SoundEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::SoundEvent msg_;
};

class Init_SoundEvent_message
{
public:
  explicit Init_SoundEvent_message(::mir_msgs::msg::SoundEvent & msg)
  : msg_(msg)
  {}
  Init_SoundEvent_event message(::mir_msgs::msg::SoundEvent::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SoundEvent_event(msg_);
  }

private:
  ::mir_msgs::msg::SoundEvent msg_;
};

class Init_SoundEvent_sound_guid
{
public:
  explicit Init_SoundEvent_sound_guid(::mir_msgs::msg::SoundEvent & msg)
  : msg_(msg)
  {}
  Init_SoundEvent_message sound_guid(::mir_msgs::msg::SoundEvent::_sound_guid_type arg)
  {
    msg_.sound_guid = std::move(arg);
    return Init_SoundEvent_message(msg_);
  }

private:
  ::mir_msgs::msg::SoundEvent msg_;
};

class Init_SoundEvent_time_stamp
{
public:
  Init_SoundEvent_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundEvent_sound_guid time_stamp(::mir_msgs::msg::SoundEvent::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SoundEvent_sound_guid(msg_);
  }

private:
  ::mir_msgs::msg::SoundEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::SoundEvent>()
{
  return mir_msgs::msg::builder::Init_SoundEvent_time_stamp();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SOUND_EVENT__BUILDER_HPP_
