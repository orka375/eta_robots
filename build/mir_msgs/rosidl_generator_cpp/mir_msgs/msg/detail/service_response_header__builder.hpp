// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/ServiceResponseHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/service_response_header.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/service_response_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceResponseHeader_error
{
public:
  explicit Init_ServiceResponseHeader_error(::mir_msgs::msg::ServiceResponseHeader & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::ServiceResponseHeader error(::mir_msgs::msg::ServiceResponseHeader::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::ServiceResponseHeader msg_;
};

class Init_ServiceResponseHeader_success
{
public:
  Init_ServiceResponseHeader_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceResponseHeader_error success(::mir_msgs::msg::ServiceResponseHeader::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ServiceResponseHeader_error(msg_);
  }

private:
  ::mir_msgs::msg::ServiceResponseHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::ServiceResponseHeader>()
{
  return mir_msgs::msg::builder::Init_ServiceResponseHeader_success();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__BUILDER_HPP_
