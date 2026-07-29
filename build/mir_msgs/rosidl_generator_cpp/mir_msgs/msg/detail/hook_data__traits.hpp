// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/HookData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/hook_data.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__HOOK_DATA__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/hook_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'angle'
#include "mir_msgs/msg/detail/angle_measurment__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HookData & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    to_flow_style_yaml(msg.angle, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: brake_state
  {
    out << "brake_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_state, out);
    out << ", ";
  }

  // member: gripper_state
  {
    out << "gripper_state: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_state, out);
    out << ", ";
  }

  // member: height_state
  {
    out << "height_state: ";
    rosidl_generator_traits::value_to_yaml(msg.height_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HookData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle:\n";
    to_block_style_yaml(msg.angle, out, indentation + 2);
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: brake_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_state, out);
    out << "\n";
  }

  // member: gripper_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_state: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_state, out);
    out << "\n";
  }

  // member: height_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_state: ";
    rosidl_generator_traits::value_to_yaml(msg.height_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HookData & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::HookData & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::HookData & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::HookData>()
{
  return "mir_msgs::msg::HookData";
}

template<>
inline const char * name<mir_msgs::msg::HookData>()
{
  return "mir_msgs/msg/HookData";
}

template<>
struct has_fixed_size<mir_msgs::msg::HookData>
  : std::integral_constant<bool, has_fixed_size<mir_msgs::msg::AngleMeasurment>::value> {};

template<>
struct has_bounded_size<mir_msgs::msg::HookData>
  : std::integral_constant<bool, has_bounded_size<mir_msgs::msg::AngleMeasurment>::value> {};

template<>
struct is_message<mir_msgs::msg::HookData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_DATA__TRAITS_HPP_
