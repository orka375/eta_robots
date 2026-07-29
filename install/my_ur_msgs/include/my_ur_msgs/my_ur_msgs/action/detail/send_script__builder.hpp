// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ur_msgs:action/SendScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ur_msgs/action/send_script.hpp"


#ifndef MY_UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__BUILDER_HPP_
#define MY_UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ur_msgs/action/detail/send_script__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_Goal_fail_on_warnings
{
public:
  explicit Init_SendScript_Goal_fail_on_warnings(::my_ur_msgs::action::SendScript_Goal & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_Goal fail_on_warnings(::my_ur_msgs::action::SendScript_Goal::_fail_on_warnings_type arg)
  {
    msg_.fail_on_warnings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Goal msg_;
};

class Init_SendScript_Goal_start_timeout
{
public:
  explicit Init_SendScript_Goal_start_timeout(::my_ur_msgs::action::SendScript_Goal & msg)
  : msg_(msg)
  {}
  Init_SendScript_Goal_fail_on_warnings start_timeout(::my_ur_msgs::action::SendScript_Goal::_start_timeout_type arg)
  {
    msg_.start_timeout = std::move(arg);
    return Init_SendScript_Goal_fail_on_warnings(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Goal msg_;
};

class Init_SendScript_Goal_script_name
{
public:
  explicit Init_SendScript_Goal_script_name(::my_ur_msgs::action::SendScript_Goal & msg)
  : msg_(msg)
  {}
  Init_SendScript_Goal_start_timeout script_name(::my_ur_msgs::action::SendScript_Goal::_script_name_type arg)
  {
    msg_.script_name = std::move(arg);
    return Init_SendScript_Goal_start_timeout(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Goal msg_;
};

class Init_SendScript_Goal_program
{
public:
  Init_SendScript_Goal_program()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Goal_script_name program(::my_ur_msgs::action::SendScript_Goal::_program_type arg)
  {
    msg_.program = std::move(arg);
    return Init_SendScript_Goal_script_name(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_Goal>()
{
  return my_ur_msgs::action::builder::Init_SendScript_Goal_program();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_Result_message
{
public:
  explicit Init_SendScript_Result_message(::my_ur_msgs::action::SendScript_Result & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_Result message(::my_ur_msgs::action::SendScript_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Result msg_;
};

class Init_SendScript_Result_success
{
public:
  Init_SendScript_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Result_message success(::my_ur_msgs::action::SendScript_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SendScript_Result_message(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_Result>()
{
  return my_ur_msgs::action::builder::Init_SendScript_Result_success();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_Feedback_progress
{
public:
  Init_SendScript_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ur_msgs::action::SendScript_Feedback progress(::my_ur_msgs::action::SendScript_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_Feedback>()
{
  return my_ur_msgs::action::builder::Init_SendScript_Feedback_progress();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_SendGoal_Request_goal
{
public:
  explicit Init_SendScript_SendGoal_Request_goal(::my_ur_msgs::action::SendScript_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_SendGoal_Request goal(::my_ur_msgs::action::SendScript_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Request msg_;
};

class Init_SendScript_SendGoal_Request_goal_id
{
public:
  Init_SendScript_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_SendGoal_Request_goal goal_id(::my_ur_msgs::action::SendScript_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendScript_SendGoal_Request_goal(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_SendGoal_Request>()
{
  return my_ur_msgs::action::builder::Init_SendScript_SendGoal_Request_goal_id();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_SendGoal_Response_stamp
{
public:
  explicit Init_SendScript_SendGoal_Response_stamp(::my_ur_msgs::action::SendScript_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_SendGoal_Response stamp(::my_ur_msgs::action::SendScript_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Response msg_;
};

class Init_SendScript_SendGoal_Response_accepted
{
public:
  Init_SendScript_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_SendGoal_Response_stamp accepted(::my_ur_msgs::action::SendScript_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SendScript_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_SendGoal_Response>()
{
  return my_ur_msgs::action::builder::Init_SendScript_SendGoal_Response_accepted();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_SendGoal_Event_response
{
public:
  explicit Init_SendScript_SendGoal_Event_response(::my_ur_msgs::action::SendScript_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_SendGoal_Event response(::my_ur_msgs::action::SendScript_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Event msg_;
};

class Init_SendScript_SendGoal_Event_request
{
public:
  explicit Init_SendScript_SendGoal_Event_request(::my_ur_msgs::action::SendScript_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SendScript_SendGoal_Event_response request(::my_ur_msgs::action::SendScript_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendScript_SendGoal_Event_response(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Event msg_;
};

class Init_SendScript_SendGoal_Event_info
{
public:
  Init_SendScript_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_SendGoal_Event_request info(::my_ur_msgs::action::SendScript_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendScript_SendGoal_Event_request(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_SendGoal_Event>()
{
  return my_ur_msgs::action::builder::Init_SendScript_SendGoal_Event_info();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
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
  ::my_ur_msgs::action::SendScript_GetResult_Request goal_id(::my_ur_msgs::action::SendScript_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_GetResult_Request>()
{
  return my_ur_msgs::action::builder::Init_SendScript_GetResult_Request_goal_id();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_GetResult_Response_result
{
public:
  explicit Init_SendScript_GetResult_Response_result(::my_ur_msgs::action::SendScript_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_GetResult_Response result(::my_ur_msgs::action::SendScript_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_GetResult_Response msg_;
};

class Init_SendScript_GetResult_Response_status
{
public:
  Init_SendScript_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_GetResult_Response_result status(::my_ur_msgs::action::SendScript_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SendScript_GetResult_Response_result(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_GetResult_Response>()
{
  return my_ur_msgs::action::builder::Init_SendScript_GetResult_Response_status();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_GetResult_Event_response
{
public:
  explicit Init_SendScript_GetResult_Event_response(::my_ur_msgs::action::SendScript_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_GetResult_Event response(::my_ur_msgs::action::SendScript_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_GetResult_Event msg_;
};

class Init_SendScript_GetResult_Event_request
{
public:
  explicit Init_SendScript_GetResult_Event_request(::my_ur_msgs::action::SendScript_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SendScript_GetResult_Event_response request(::my_ur_msgs::action::SendScript_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendScript_GetResult_Event_response(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_GetResult_Event msg_;
};

class Init_SendScript_GetResult_Event_info
{
public:
  Init_SendScript_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_GetResult_Event_request info(::my_ur_msgs::action::SendScript_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendScript_GetResult_Event_request(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_GetResult_Event>()
{
  return my_ur_msgs::action::builder::Init_SendScript_GetResult_Event_info();
}

}  // namespace my_ur_msgs


namespace my_ur_msgs
{

namespace action
{

namespace builder
{

class Init_SendScript_FeedbackMessage_feedback
{
public:
  explicit Init_SendScript_FeedbackMessage_feedback(::my_ur_msgs::action::SendScript_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_ur_msgs::action::SendScript_FeedbackMessage feedback(::my_ur_msgs::action::SendScript_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_FeedbackMessage msg_;
};

class Init_SendScript_FeedbackMessage_goal_id
{
public:
  Init_SendScript_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_FeedbackMessage_feedback goal_id(::my_ur_msgs::action::SendScript_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendScript_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_ur_msgs::action::SendScript_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ur_msgs::action::SendScript_FeedbackMessage>()
{
  return my_ur_msgs::action::builder::Init_SendScript_FeedbackMessage_goal_id();
}

}  // namespace my_ur_msgs

#endif  // MY_UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__BUILDER_HPP_
