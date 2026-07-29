// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_msgs:action/SendScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/action/send_script.hpp"


#ifndef UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__TRAITS_HPP_
#define UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_msgs/action/detail/send_script__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: program
  {
    out << "program: ";
    rosidl_generator_traits::value_to_yaml(msg.program, out);
    out << ", ";
  }

  // member: script_name
  {
    out << "script_name: ";
    rosidl_generator_traits::value_to_yaml(msg.script_name, out);
    out << ", ";
  }

  // member: start_timeout
  {
    out << "start_timeout: ";
    to_flow_style_yaml(msg.start_timeout, out);
    out << ", ";
  }

  // member: fail_on_warnings
  {
    out << "fail_on_warnings: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_on_warnings, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: program
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "program: ";
    rosidl_generator_traits::value_to_yaml(msg.program, out);
    out << "\n";
  }

  // member: script_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "script_name: ";
    rosidl_generator_traits::value_to_yaml(msg.script_name, out);
    out << "\n";
  }

  // member: start_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_timeout:\n";
    to_block_style_yaml(msg.start_timeout, out, indentation + 2);
  }

  // member: fail_on_warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_on_warnings: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_on_warnings, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_Goal & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_Goal>()
{
  return "ur_msgs::action::SendScript_Goal";
}

template<>
inline const char * name<ur_msgs::action::SendScript_Goal>()
{
  return "ur_msgs/action/SendScript_Goal";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_msgs::action::SendScript_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_Result & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_Result>()
{
  return "ur_msgs::action::SendScript_Result";
}

template<>
inline const char * name<ur_msgs::action::SendScript_Result>()
{
  return "ur_msgs/action/SendScript_Result";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_msgs::action::SendScript_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_Feedback & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_Feedback>()
{
  return "ur_msgs::action::SendScript_Feedback";
}

template<>
inline const char * name<ur_msgs::action::SendScript_Feedback>()
{
  return "ur_msgs/action/SendScript_Feedback";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_msgs::action::SendScript_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ur_msgs/action/detail/send_script__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_SendGoal_Request & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_SendGoal_Request>()
{
  return "ur_msgs::action::SendScript_SendGoal_Request";
}

template<>
inline const char * name<ur_msgs::action::SendScript_SendGoal_Request>()
{
  return "ur_msgs/action/SendScript_SendGoal_Request";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_msgs::action::SendScript_Goal>::value> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_msgs::action::SendScript_Goal>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_SendGoal_Response & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_SendGoal_Response>()
{
  return "ur_msgs::action::SendScript_SendGoal_Response";
}

template<>
inline const char * name<ur_msgs::action::SendScript_SendGoal_Response>()
{
  return "ur_msgs/action/SendScript_SendGoal_Response";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_SendGoal_Event & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_SendGoal_Event>()
{
  return "ur_msgs::action::SendScript_SendGoal_Event";
}

template<>
inline const char * name<ur_msgs::action::SendScript_SendGoal_Event>()
{
  return "ur_msgs/action/SendScript_SendGoal_Event";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur_msgs::action::SendScript_SendGoal_Request>::value && has_bounded_size<ur_msgs::action::SendScript_SendGoal_Response>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::action::SendScript_SendGoal>()
{
  return "ur_msgs::action::SendScript_SendGoal";
}

template<>
inline const char * name<ur_msgs::action::SendScript_SendGoal>()
{
  return "ur_msgs/action/SendScript_SendGoal";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_msgs::action::SendScript_SendGoal_Request>::value &&
    has_fixed_size<ur_msgs::action::SendScript_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_msgs::action::SendScript_SendGoal_Request>::value &&
    has_bounded_size<ur_msgs::action::SendScript_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ur_msgs::action::SendScript_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ur_msgs::action::SendScript_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_msgs::action::SendScript_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_GetResult_Request & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_GetResult_Request>()
{
  return "ur_msgs::action::SendScript_GetResult_Request";
}

template<>
inline const char * name<ur_msgs::action::SendScript_GetResult_Request>()
{
  return "ur_msgs/action/SendScript_GetResult_Request";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_msgs/action/detail/send_script__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_GetResult_Response & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_GetResult_Response>()
{
  return "ur_msgs::action::SendScript_GetResult_Response";
}

template<>
inline const char * name<ur_msgs::action::SendScript_GetResult_Response>()
{
  return "ur_msgs/action/SendScript_GetResult_Response";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ur_msgs::action::SendScript_Result>::value> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ur_msgs::action::SendScript_Result>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_GetResult_Event & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_GetResult_Event>()
{
  return "ur_msgs::action::SendScript_GetResult_Event";
}

template<>
inline const char * name<ur_msgs::action::SendScript_GetResult_Event>()
{
  return "ur_msgs/action/SendScript_GetResult_Event";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur_msgs::action::SendScript_GetResult_Request>::value && has_bounded_size<ur_msgs::action::SendScript_GetResult_Response>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::action::SendScript_GetResult>()
{
  return "ur_msgs::action::SendScript_GetResult";
}

template<>
inline const char * name<ur_msgs::action::SendScript_GetResult>()
{
  return "ur_msgs/action/SendScript_GetResult";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_msgs::action::SendScript_GetResult_Request>::value &&
    has_fixed_size<ur_msgs::action::SendScript_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_msgs::action::SendScript_GetResult_Request>::value &&
    has_bounded_size<ur_msgs::action::SendScript_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ur_msgs::action::SendScript_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ur_msgs::action::SendScript_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_msgs::action::SendScript_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ur_msgs/action/detail/send_script__traits.hpp"

namespace ur_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SendScript_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendScript_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendScript_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::action::SendScript_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::action::SendScript_FeedbackMessage & msg)
{
  return ur_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::action::SendScript_FeedbackMessage>()
{
  return "ur_msgs::action::SendScript_FeedbackMessage";
}

template<>
inline const char * name<ur_msgs::action::SendScript_FeedbackMessage>()
{
  return "ur_msgs/action/SendScript_FeedbackMessage";
}

template<>
struct has_fixed_size<ur_msgs::action::SendScript_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_msgs::action::SendScript_Feedback>::value> {};

template<>
struct has_bounded_size<ur_msgs::action::SendScript_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_msgs::action::SendScript_Feedback>::value> {};

template<>
struct is_message<ur_msgs::action::SendScript_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::action::SendScript>()
{
  return "ur_msgs::action::SendScript";
}

template<>
inline const char * name<ur_msgs::action::SendScript>()
{
  return "ur_msgs/action/SendScript";
}

template<>
struct is_action<ur_msgs::action::SendScript>
  : std::true_type
{
};

template<>
struct is_action_goal<ur_msgs::action::SendScript_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ur_msgs::action::SendScript_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ur_msgs::action::SendScript_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__TRAITS_HPP_
