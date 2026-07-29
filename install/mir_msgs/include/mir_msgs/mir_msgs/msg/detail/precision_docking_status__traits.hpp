// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/precision_docking_status.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/precision_docking_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PrecisionDockingStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << ", ";
  }

  // member: motor_forward
  {
    out << "motor_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_forward, out);
    out << ", ";
  }

  // member: motor_back
  {
    out << "motor_back: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_back, out);
    out << ", ";
  }

  // member: left_docking
  {
    out << "left_docking: ";
    rosidl_generator_traits::value_to_yaml(msg.left_docking, out);
    out << ", ";
  }

  // member: right_docking
  {
    out << "right_docking: ";
    rosidl_generator_traits::value_to_yaml(msg.right_docking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrecisionDockingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << "\n";
  }

  // member: motor_forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_forward, out);
    out << "\n";
  }

  // member: motor_back
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_back: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_back, out);
    out << "\n";
  }

  // member: left_docking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_docking: ";
    rosidl_generator_traits::value_to_yaml(msg.left_docking, out);
    out << "\n";
  }

  // member: right_docking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_docking: ";
    rosidl_generator_traits::value_to_yaml(msg.right_docking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrecisionDockingStatus & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::PrecisionDockingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::PrecisionDockingStatus & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::PrecisionDockingStatus>()
{
  return "mir_msgs::msg::PrecisionDockingStatus";
}

template<>
inline const char * name<mir_msgs::msg::PrecisionDockingStatus>()
{
  return "mir_msgs/msg/PrecisionDockingStatus";
}

template<>
struct has_fixed_size<mir_msgs::msg::PrecisionDockingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::PrecisionDockingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::PrecisionDockingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__PRECISION_DOCKING_STATUS__TRAITS_HPP_
