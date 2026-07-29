// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/ServiceResponseHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/service_response_header.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/service_response_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServiceResponseHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceResponseHeader & msg,
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

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceResponseHeader & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mir_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mir_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_msgs::msg::ServiceResponseHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::ServiceResponseHeader & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::ServiceResponseHeader>()
{
  return "mir_msgs::msg::ServiceResponseHeader";
}

template<>
inline const char * name<mir_msgs::msg::ServiceResponseHeader>()
{
  return "mir_msgs/msg/ServiceResponseHeader";
}

template<>
struct has_fixed_size<mir_msgs::msg::ServiceResponseHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::ServiceResponseHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::ServiceResponseHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__SERVICE_RESPONSE_HEADER__TRAITS_HPP_
