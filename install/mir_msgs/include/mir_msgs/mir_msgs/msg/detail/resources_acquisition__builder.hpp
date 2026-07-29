// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ResourcesAcquisition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/resources_acquisition.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/resources_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ResourcesAcquisition_token
{
public:
  explicit Init_ResourcesAcquisition_token(::mir_msgs::msg::ResourcesAcquisition & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ResourcesAcquisition token(::mir_msgs::msg::ResourcesAcquisition::_token_type arg)
  {
    msg_.token = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ResourcesAcquisition msg_;
};

class Init_ResourcesAcquisition_position_guid
{
public:
  explicit Init_ResourcesAcquisition_position_guid(::mir_msgs::msg::ResourcesAcquisition & msg)
  : msg_(msg)
  {}
  Init_ResourcesAcquisition_token position_guid(::mir_msgs::msg::ResourcesAcquisition::_position_guid_type arg)
  {
    msg_.position_guid = std::move(arg);
    return Init_ResourcesAcquisition_token(msg_);
  }

private:
  ::mir_msgs::msg::ResourcesAcquisition msg_;
};

class Init_ResourcesAcquisition_path
{
public:
  explicit Init_ResourcesAcquisition_path(::mir_msgs::msg::ResourcesAcquisition & msg)
  : msg_(msg)
  {}
  Init_ResourcesAcquisition_position_guid path(::mir_msgs::msg::ResourcesAcquisition::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_ResourcesAcquisition_position_guid(msg_);
  }

private:
  ::mir_msgs::msg::ResourcesAcquisition msg_;
};

class Init_ResourcesAcquisition_header
{
public:
  Init_ResourcesAcquisition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResourcesAcquisition_path header(::mir_msgs::msg::ResourcesAcquisition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ResourcesAcquisition_path(msg_);
  }

private:
  ::mir_msgs::msg::ResourcesAcquisition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ResourcesAcquisition>()
{
  return mir_msgs::msg::builder::Init_ResourcesAcquisition_header();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__BUILDER_HPP_
