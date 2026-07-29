// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdc21x0/srv/flags.hpp"


#ifndef SDC21X0__SRV__DETAIL__FLAGS__TRAITS_HPP_
#define SDC21X0__SRV__DETAIL__FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdc21x0/srv/detail/flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sdc21x0
{

namespace srv
{

inline void to_flow_style_yaml(
  const Flags_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: digital_port
  {
    out << "digital_port: ";
    rosidl_generator_traits::value_to_yaml(msg.digital_port, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Flags_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: digital_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "digital_port: ";
    rosidl_generator_traits::value_to_yaml(msg.digital_port, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Flags_Request & msg, bool use_flow_style = false)
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

}  // namespace sdc21x0

namespace rosidl_generator_traits
{

[[deprecated("use sdc21x0::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdc21x0::srv::Flags_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdc21x0::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdc21x0::srv::to_yaml() instead")]]
inline std::string to_yaml(const sdc21x0::srv::Flags_Request & msg)
{
  return sdc21x0::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sdc21x0::srv::Flags_Request>()
{
  return "sdc21x0::srv::Flags_Request";
}

template<>
inline const char * name<sdc21x0::srv::Flags_Request>()
{
  return "sdc21x0/srv/Flags_Request";
}

template<>
struct has_fixed_size<sdc21x0::srv::Flags_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sdc21x0::srv::Flags_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sdc21x0::srv::Flags_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sdc21x0
{

namespace srv
{

inline void to_flow_style_yaml(
  const Flags_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Flags_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Flags_Response & msg, bool use_flow_style = false)
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

}  // namespace sdc21x0

namespace rosidl_generator_traits
{

[[deprecated("use sdc21x0::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdc21x0::srv::Flags_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdc21x0::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdc21x0::srv::to_yaml() instead")]]
inline std::string to_yaml(const sdc21x0::srv::Flags_Response & msg)
{
  return sdc21x0::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sdc21x0::srv::Flags_Response>()
{
  return "sdc21x0::srv::Flags_Response";
}

template<>
inline const char * name<sdc21x0::srv::Flags_Response>()
{
  return "sdc21x0/srv/Flags_Response";
}

template<>
struct has_fixed_size<sdc21x0::srv::Flags_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sdc21x0::srv::Flags_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sdc21x0::srv::Flags_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace sdc21x0
{

namespace srv
{

inline void to_flow_style_yaml(
  const Flags_Event & msg,
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
  const Flags_Event & msg,
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

inline std::string to_yaml(const Flags_Event & msg, bool use_flow_style = false)
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

}  // namespace sdc21x0

namespace rosidl_generator_traits
{

[[deprecated("use sdc21x0::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdc21x0::srv::Flags_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdc21x0::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdc21x0::srv::to_yaml() instead")]]
inline std::string to_yaml(const sdc21x0::srv::Flags_Event & msg)
{
  return sdc21x0::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sdc21x0::srv::Flags_Event>()
{
  return "sdc21x0::srv::Flags_Event";
}

template<>
inline const char * name<sdc21x0::srv::Flags_Event>()
{
  return "sdc21x0/srv/Flags_Event";
}

template<>
struct has_fixed_size<sdc21x0::srv::Flags_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdc21x0::srv::Flags_Event>
  : std::integral_constant<bool, has_bounded_size<sdc21x0::srv::Flags_Request>::value && has_bounded_size<sdc21x0::srv::Flags_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<sdc21x0::srv::Flags_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sdc21x0::srv::Flags>()
{
  return "sdc21x0::srv::Flags";
}

template<>
inline const char * name<sdc21x0::srv::Flags>()
{
  return "sdc21x0/srv/Flags";
}

template<>
struct has_fixed_size<sdc21x0::srv::Flags>
  : std::integral_constant<
    bool,
    has_fixed_size<sdc21x0::srv::Flags_Request>::value &&
    has_fixed_size<sdc21x0::srv::Flags_Response>::value
  >
{
};

template<>
struct has_bounded_size<sdc21x0::srv::Flags>
  : std::integral_constant<
    bool,
    has_bounded_size<sdc21x0::srv::Flags_Request>::value &&
    has_bounded_size<sdc21x0::srv::Flags_Response>::value
  >
{
};

template<>
struct is_service<sdc21x0::srv::Flags>
  : std::true_type
{
};

template<>
struct is_service_request<sdc21x0::srv::Flags_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sdc21x0::srv::Flags_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SDC21X0__SRV__DETAIL__FLAGS__TRAITS_HPP_
