// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:srv/GenerateSupportFile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_dashboard_msgs/srv/generate_support_file.hpp"


#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__GENERATE_SUPPORT_FILE__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__GENERATE_SUPPORT_FILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_dashboard_msgs/srv/detail/generate_support_file__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur_dashboard_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateSupportFile_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: dir_path
  {
    out << "dir_path: ";
    rosidl_generator_traits::value_to_yaml(msg.dir_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateSupportFile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dir_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir_path: ";
    rosidl_generator_traits::value_to_yaml(msg.dir_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateSupportFile_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_dashboard_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_dashboard_msgs::srv::GenerateSupportFile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_dashboard_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_dashboard_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_dashboard_msgs::srv::GenerateSupportFile_Request & msg)
{
  return ur_dashboard_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GenerateSupportFile_Request>()
{
  return "ur_dashboard_msgs::srv::GenerateSupportFile_Request";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GenerateSupportFile_Request>()
{
  return "ur_dashboard_msgs/srv/GenerateSupportFile_Request";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GenerateSupportFile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::srv::GenerateSupportFile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_dashboard_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateSupportFile_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << ", ";
  }

  // member: generated_file_name
  {
    out << "generated_file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.generated_file_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateSupportFile_Response & msg,
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

  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }

  // member: generated_file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generated_file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.generated_file_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateSupportFile_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_dashboard_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_dashboard_msgs::srv::GenerateSupportFile_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_dashboard_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_dashboard_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_dashboard_msgs::srv::GenerateSupportFile_Response & msg)
{
  return ur_dashboard_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GenerateSupportFile_Response>()
{
  return "ur_dashboard_msgs::srv::GenerateSupportFile_Response";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GenerateSupportFile_Response>()
{
  return "ur_dashboard_msgs/srv/GenerateSupportFile_Response";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GenerateSupportFile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::srv::GenerateSupportFile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ur_dashboard_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateSupportFile_Event & msg,
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
  const GenerateSupportFile_Event & msg,
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

inline std::string to_yaml(const GenerateSupportFile_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_dashboard_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_dashboard_msgs::srv::GenerateSupportFile_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_dashboard_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_dashboard_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_dashboard_msgs::srv::GenerateSupportFile_Event & msg)
{
  return ur_dashboard_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GenerateSupportFile_Event>()
{
  return "ur_dashboard_msgs::srv::GenerateSupportFile_Event";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GenerateSupportFile_Event>()
{
  return "ur_dashboard_msgs/srv/GenerateSupportFile_Event";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GenerateSupportFile_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Request>::value && has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Response>::value> {};

template<>
struct is_message<ur_dashboard_msgs::srv::GenerateSupportFile_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GenerateSupportFile>()
{
  return "ur_dashboard_msgs::srv::GenerateSupportFile";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GenerateSupportFile>()
{
  return "ur_dashboard_msgs/srv/GenerateSupportFile";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GenerateSupportFile>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_dashboard_msgs::srv::GenerateSupportFile_Request>::value &&
    has_fixed_size<ur_dashboard_msgs::srv::GenerateSupportFile_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Request>::value &&
    has_bounded_size<ur_dashboard_msgs::srv::GenerateSupportFile_Response>::value
  >
{
};

template<>
struct is_service<ur_dashboard_msgs::srv::GenerateSupportFile>
  : std::true_type
{
};

template<>
struct is_service_request<ur_dashboard_msgs::srv::GenerateSupportFile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_dashboard_msgs::srv::GenerateSupportFile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__GENERATE_SUPPORT_FILE__TRAITS_HPP_
