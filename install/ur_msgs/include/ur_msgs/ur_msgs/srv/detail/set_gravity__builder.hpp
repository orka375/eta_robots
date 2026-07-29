// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:srv/SetGravity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_gravity.hpp"


#ifndef UR_MSGS__SRV__DETAIL__SET_GRAVITY__BUILDER_HPP_
#define UR_MSGS__SRV__DETAIL__SET_GRAVITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/srv/detail/set_gravity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGravity_Request_gravity
{
public:
  Init_SetGravity_Request_gravity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::srv::SetGravity_Request gravity(::ur_msgs::srv::SetGravity_Request::_gravity_type arg)
  {
    msg_.gravity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetGravity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetGravity_Request>()
{
  return ur_msgs::srv::builder::Init_SetGravity_Request_gravity();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGravity_Response_status
{
public:
  explicit Init_SetGravity_Response_status(::ur_msgs::srv::SetGravity_Response & msg)
  : msg_(msg)
  {}
  ::ur_msgs::srv::SetGravity_Response status(::ur_msgs::srv::SetGravity_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetGravity_Response msg_;
};

class Init_SetGravity_Response_success
{
public:
  Init_SetGravity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGravity_Response_status success(::ur_msgs::srv::SetGravity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetGravity_Response_status(msg_);
  }

private:
  ::ur_msgs::srv::SetGravity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetGravity_Response>()
{
  return ur_msgs::srv::builder::Init_SetGravity_Response_success();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGravity_Event_response
{
public:
  explicit Init_SetGravity_Event_response(::ur_msgs::srv::SetGravity_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::srv::SetGravity_Event response(::ur_msgs::srv::SetGravity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetGravity_Event msg_;
};

class Init_SetGravity_Event_request
{
public:
  explicit Init_SetGravity_Event_request(::ur_msgs::srv::SetGravity_Event & msg)
  : msg_(msg)
  {}
  Init_SetGravity_Event_response request(::ur_msgs::srv::SetGravity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGravity_Event_response(msg_);
  }

private:
  ::ur_msgs::srv::SetGravity_Event msg_;
};

class Init_SetGravity_Event_info
{
public:
  Init_SetGravity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGravity_Event_request info(::ur_msgs::srv::SetGravity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGravity_Event_request(msg_);
  }

private:
  ::ur_msgs::srv::SetGravity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetGravity_Event>()
{
  return ur_msgs::srv::builder::Init_SetGravity_Event_info();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__SRV__DETAIL__SET_GRAVITY__BUILDER_HPP_
