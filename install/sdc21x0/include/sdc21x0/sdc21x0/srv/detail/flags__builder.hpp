// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdc21x0/srv/flags.hpp"


#ifndef SDC21X0__SRV__DETAIL__FLAGS__BUILDER_HPP_
#define SDC21X0__SRV__DETAIL__FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdc21x0/srv/detail/flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdc21x0
{

namespace srv
{

namespace builder
{

class Init_Flags_Request_digital_port
{
public:
  Init_Flags_Request_digital_port()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sdc21x0::srv::Flags_Request digital_port(::sdc21x0::srv::Flags_Request::_digital_port_type arg)
  {
    msg_.digital_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdc21x0::srv::Flags_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdc21x0::srv::Flags_Request>()
{
  return sdc21x0::srv::builder::Init_Flags_Request_digital_port();
}

}  // namespace sdc21x0


namespace sdc21x0
{

namespace srv
{

namespace builder
{

class Init_Flags_Response_response
{
public:
  Init_Flags_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sdc21x0::srv::Flags_Response response(::sdc21x0::srv::Flags_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdc21x0::srv::Flags_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdc21x0::srv::Flags_Response>()
{
  return sdc21x0::srv::builder::Init_Flags_Response_response();
}

}  // namespace sdc21x0


namespace sdc21x0
{

namespace srv
{

namespace builder
{

class Init_Flags_Event_response
{
public:
  explicit Init_Flags_Event_response(::sdc21x0::srv::Flags_Event & msg)
  : msg_(msg)
  {}
  ::sdc21x0::srv::Flags_Event response(::sdc21x0::srv::Flags_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdc21x0::srv::Flags_Event msg_;
};

class Init_Flags_Event_request
{
public:
  explicit Init_Flags_Event_request(::sdc21x0::srv::Flags_Event & msg)
  : msg_(msg)
  {}
  Init_Flags_Event_response request(::sdc21x0::srv::Flags_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Flags_Event_response(msg_);
  }

private:
  ::sdc21x0::srv::Flags_Event msg_;
};

class Init_Flags_Event_info
{
public:
  Init_Flags_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flags_Event_request info(::sdc21x0::srv::Flags_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Flags_Event_request(msg_);
  }

private:
  ::sdc21x0::srv::Flags_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdc21x0::srv::Flags_Event>()
{
  return sdc21x0::srv::builder::Init_Flags_Event_info();
}

}  // namespace sdc21x0

#endif  // SDC21X0__SRV__DETAIL__FLAGS__BUILDER_HPP_
