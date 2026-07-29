// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:srv/SetFrictionModelParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_friction_model_parameters.hpp"


#ifndef UR_MSGS__SRV__DETAIL__SET_FRICTION_MODEL_PARAMETERS__BUILDER_HPP_
#define UR_MSGS__SRV__DETAIL__SET_FRICTION_MODEL_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/srv/detail/set_friction_model_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFrictionModelParameters_Request_parameters
{
public:
  Init_SetFrictionModelParameters_Request_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::srv::SetFrictionModelParameters_Request parameters(::ur_msgs::srv::SetFrictionModelParameters_Request::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetFrictionModelParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetFrictionModelParameters_Request>()
{
  return ur_msgs::srv::builder::Init_SetFrictionModelParameters_Request_parameters();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFrictionModelParameters_Response_success
{
public:
  Init_SetFrictionModelParameters_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::srv::SetFrictionModelParameters_Response success(::ur_msgs::srv::SetFrictionModelParameters_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetFrictionModelParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetFrictionModelParameters_Response>()
{
  return ur_msgs::srv::builder::Init_SetFrictionModelParameters_Response_success();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFrictionModelParameters_Event_response
{
public:
  explicit Init_SetFrictionModelParameters_Event_response(::ur_msgs::srv::SetFrictionModelParameters_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::srv::SetFrictionModelParameters_Event response(::ur_msgs::srv::SetFrictionModelParameters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetFrictionModelParameters_Event msg_;
};

class Init_SetFrictionModelParameters_Event_request
{
public:
  explicit Init_SetFrictionModelParameters_Event_request(::ur_msgs::srv::SetFrictionModelParameters_Event & msg)
  : msg_(msg)
  {}
  Init_SetFrictionModelParameters_Event_response request(::ur_msgs::srv::SetFrictionModelParameters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetFrictionModelParameters_Event_response(msg_);
  }

private:
  ::ur_msgs::srv::SetFrictionModelParameters_Event msg_;
};

class Init_SetFrictionModelParameters_Event_info
{
public:
  Init_SetFrictionModelParameters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFrictionModelParameters_Event_request info(::ur_msgs::srv::SetFrictionModelParameters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetFrictionModelParameters_Event_request(msg_);
  }

private:
  ::ur_msgs::srv::SetFrictionModelParameters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetFrictionModelParameters_Event>()
{
  return ur_msgs::srv::builder::Init_SetFrictionModelParameters_Event_info();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__SRV__DETAIL__SET_FRICTION_MODEL_PARAMETERS__BUILDER_HPP_
