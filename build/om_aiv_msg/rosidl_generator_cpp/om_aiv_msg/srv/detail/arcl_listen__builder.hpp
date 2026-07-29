// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from om_aiv_msg:srv/ArclListen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "om_aiv_msg/srv/arcl_listen.hpp"


#ifndef OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__BUILDER_HPP_
#define OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "om_aiv_msg/srv/detail/arcl_listen__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace om_aiv_msg
{

namespace srv
{

namespace builder
{

class Init_ArclListen_Request_resp_header
{
public:
  Init_ArclListen_Request_resp_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::om_aiv_msg::srv::ArclListen_Request resp_header(::om_aiv_msg::srv::ArclListen_Request::_resp_header_type arg)
  {
    msg_.resp_header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::om_aiv_msg::srv::ArclListen_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::om_aiv_msg::srv::ArclListen_Request>()
{
  return om_aiv_msg::srv::builder::Init_ArclListen_Request_resp_header();
}

}  // namespace om_aiv_msg


namespace om_aiv_msg
{

namespace srv
{

namespace builder
{

class Init_ArclListen_Response_resp_text
{
public:
  Init_ArclListen_Response_resp_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::om_aiv_msg::srv::ArclListen_Response resp_text(::om_aiv_msg::srv::ArclListen_Response::_resp_text_type arg)
  {
    msg_.resp_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::om_aiv_msg::srv::ArclListen_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::om_aiv_msg::srv::ArclListen_Response>()
{
  return om_aiv_msg::srv::builder::Init_ArclListen_Response_resp_text();
}

}  // namespace om_aiv_msg


namespace om_aiv_msg
{

namespace srv
{

namespace builder
{

class Init_ArclListen_Event_response
{
public:
  explicit Init_ArclListen_Event_response(::om_aiv_msg::srv::ArclListen_Event & msg)
  : msg_(msg)
  {}
  ::om_aiv_msg::srv::ArclListen_Event response(::om_aiv_msg::srv::ArclListen_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::om_aiv_msg::srv::ArclListen_Event msg_;
};

class Init_ArclListen_Event_request
{
public:
  explicit Init_ArclListen_Event_request(::om_aiv_msg::srv::ArclListen_Event & msg)
  : msg_(msg)
  {}
  Init_ArclListen_Event_response request(::om_aiv_msg::srv::ArclListen_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ArclListen_Event_response(msg_);
  }

private:
  ::om_aiv_msg::srv::ArclListen_Event msg_;
};

class Init_ArclListen_Event_info
{
public:
  Init_ArclListen_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArclListen_Event_request info(::om_aiv_msg::srv::ArclListen_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ArclListen_Event_request(msg_);
  }

private:
  ::om_aiv_msg::srv::ArclListen_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::om_aiv_msg::srv::ArclListen_Event>()
{
  return om_aiv_msg::srv::builder::Init_ArclListen_Event_info();
}

}  // namespace om_aiv_msg

#endif  // OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__BUILDER_HPP_
