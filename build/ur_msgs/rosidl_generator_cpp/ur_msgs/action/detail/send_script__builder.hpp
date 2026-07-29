// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:action/SendScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/action/send_script.hpp"


#ifndef UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__BUILDER_HPP_
#define UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/action/detail/send_script__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_Goal_fail_on_warnings
{
public:
  explicit Init_SendScript_Goal_fail_on_warnings(::ur_msgs::action::SendScript_Goal & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_Goal fail_on_warnings(::ur_msgs::action::SendScript_Goal::_fail_on_warnings_type arg)
  {
    msg_.fail_on_warnings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_Goal msg_;
};

class Init_SendScript_Goal_start_timeout
{
public:
  explicit Init_SendScript_Goal_start_timeout(::ur_msgs::action::SendScript_Goal & msg)
  : msg_(msg)
  {}
  Init_SendScript_Goal_fail_on_warnings start_timeout(::ur_msgs::action::SendScript_Goal::_start_timeout_type arg)
  {
    msg_.start_timeout = std::move(arg);
    return Init_SendScript_Goal_fail_on_warnings(msg_);
  }

private:
  ::ur_msgs::action::SendScript_Goal msg_;
};

class Init_SendScript_Goal_script_name
{
public:
  explicit Init_SendScript_Goal_script_name(::ur_msgs::action::SendScript_Goal & msg)
  : msg_(msg)
  {}
  Init_SendScript_Goal_start_timeout script_name(::ur_msgs::action::SendScript_Goal::_script_name_type arg)
  {
    msg_.script_name = std::move(arg);
    return Init_SendScript_Goal_start_timeout(msg_);
  }

private:
  ::ur_msgs::action::SendScript_Goal msg_;
};

class Init_SendScript_Goal_program
{
public:
  Init_SendScript_Goal_program()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Goal_script_name program(::ur_msgs::action::SendScript_Goal::_program_type arg)
  {
    msg_.program = std::move(arg);
    return Init_SendScript_Goal_script_name(msg_);
  }

private:
  ::ur_msgs::action::SendScript_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_Goal>()
{
  return ur_msgs::action::builder::Init_SendScript_Goal_program();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_Result_message
{
public:
  explicit Init_SendScript_Result_message(::ur_msgs::action::SendScript_Result & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_Result message(::ur_msgs::action::SendScript_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_Result msg_;
};

class Init_SendScript_Result_success
{
public:
  Init_SendScript_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Result_message success(::ur_msgs::action::SendScript_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SendScript_Result_message(msg_);
  }

private:
  ::ur_msgs::action::SendScript_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_Result>()
{
  return ur_msgs::action::builder::Init_SendScript_Result_success();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_Feedback>()
{
  return ::ur_msgs::action::SendScript_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_SendGoal_Request_goal
{
public:
  explicit Init_SendScript_SendGoal_Request_goal(::ur_msgs::action::SendScript_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_SendGoal_Request goal(::ur_msgs::action::SendScript_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Request msg_;
};

class Init_SendScript_SendGoal_Request_goal_id
{
public:
  Init_SendScript_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_SendGoal_Request_goal goal_id(::ur_msgs::action::SendScript_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendScript_SendGoal_Request_goal(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_SendGoal_Request>()
{
  return ur_msgs::action::builder::Init_SendScript_SendGoal_Request_goal_id();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_SendGoal_Response_stamp
{
public:
  explicit Init_SendScript_SendGoal_Response_stamp(::ur_msgs::action::SendScript_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_SendGoal_Response stamp(::ur_msgs::action::SendScript_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Response msg_;
};

class Init_SendScript_SendGoal_Response_accepted
{
public:
  Init_SendScript_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_SendGoal_Response_stamp accepted(::ur_msgs::action::SendScript_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SendScript_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_SendGoal_Response>()
{
  return ur_msgs::action::builder::Init_SendScript_SendGoal_Response_accepted();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_SendGoal_Event_response
{
public:
  explicit Init_SendScript_SendGoal_Event_response(::ur_msgs::action::SendScript_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_SendGoal_Event response(::ur_msgs::action::SendScript_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Event msg_;
};

class Init_SendScript_SendGoal_Event_request
{
public:
  explicit Init_SendScript_SendGoal_Event_request(::ur_msgs::action::SendScript_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SendScript_SendGoal_Event_response request(::ur_msgs::action::SendScript_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendScript_SendGoal_Event_response(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Event msg_;
};

class Init_SendScript_SendGoal_Event_info
{
public:
  Init_SendScript_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_SendGoal_Event_request info(::ur_msgs::action::SendScript_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendScript_SendGoal_Event_request(msg_);
  }

private:
  ::ur_msgs::action::SendScript_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_SendGoal_Event>()
{
  return ur_msgs::action::builder::Init_SendScript_SendGoal_Event_info();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_GetResult_Request_goal_id
{
public:
  Init_SendScript_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::action::SendScript_GetResult_Request goal_id(::ur_msgs::action::SendScript_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_GetResult_Request>()
{
  return ur_msgs::action::builder::Init_SendScript_GetResult_Request_goal_id();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_GetResult_Response_result
{
public:
  explicit Init_SendScript_GetResult_Response_result(::ur_msgs::action::SendScript_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_GetResult_Response result(::ur_msgs::action::SendScript_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_GetResult_Response msg_;
};

class Init_SendScript_GetResult_Response_status
{
public:
  Init_SendScript_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_GetResult_Response_result status(::ur_msgs::action::SendScript_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SendScript_GetResult_Response_result(msg_);
  }

private:
  ::ur_msgs::action::SendScript_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_GetResult_Response>()
{
  return ur_msgs::action::builder::Init_SendScript_GetResult_Response_status();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_GetResult_Event_response
{
public:
  explicit Init_SendScript_GetResult_Event_response(::ur_msgs::action::SendScript_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_GetResult_Event response(::ur_msgs::action::SendScript_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_GetResult_Event msg_;
};

class Init_SendScript_GetResult_Event_request
{
public:
  explicit Init_SendScript_GetResult_Event_request(::ur_msgs::action::SendScript_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SendScript_GetResult_Event_response request(::ur_msgs::action::SendScript_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendScript_GetResult_Event_response(msg_);
  }

private:
  ::ur_msgs::action::SendScript_GetResult_Event msg_;
};

class Init_SendScript_GetResult_Event_info
{
public:
  Init_SendScript_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_GetResult_Event_request info(::ur_msgs::action::SendScript_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendScript_GetResult_Event_request(msg_);
  }

private:
  ::ur_msgs::action::SendScript_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_GetResult_Event>()
{
  return ur_msgs::action::builder::Init_SendScript_GetResult_Event_info();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_FeedbackMessage_feedback
{
public:
  explicit Init_SendScript_FeedbackMessage_feedback(::ur_msgs::action::SendScript_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::SendScript_FeedbackMessage feedback(::ur_msgs::action::SendScript_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::SendScript_FeedbackMessage msg_;
};

class Init_SendScript_FeedbackMessage_goal_id
{
public:
  Init_SendScript_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_FeedbackMessage_feedback goal_id(::ur_msgs::action::SendScript_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendScript_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur_msgs::action::SendScript_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::SendScript_FeedbackMessage>()
{
  return ur_msgs::action::builder::Init_SendScript_FeedbackMessage_goal_id();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__BUILDER_HPP_
