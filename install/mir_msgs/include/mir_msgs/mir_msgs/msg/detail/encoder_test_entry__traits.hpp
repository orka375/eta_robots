// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/encoder_test_entry.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/encoder_test_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderTestEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_velocity
  {
    out << "command_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.command_velocity, out);
    out << ", ";
  }

  // member: command_distance
  {
    out << "command_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.command_distance, out);
    out << ", ";
  }

  // member: left_dist
  {
    out << "left_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_dist, out);
    out << ", ";
  }

  // member: right_dist
  {
    out << "right_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_dist, out);
    out << ", ";
  }

  // member: suggested_direction
  {
    out << "suggested_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.suggested_direction, out);
    out << ", ";
  }

  // member: user_direction
  {
    out << "user_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.user_direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderTestEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.command_velocity, out);
    out << "\n";
  }

  // member: command_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.command_distance, out);
    out << "\n";
  }

  // member: left_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_dist, out);
    out << "\n";
  }

  // member: right_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_dist, out);
    out << "\n";
  }

  // member: suggested_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suggested_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.suggested_direction, out);
    out << "\n";
  }

  // member: user_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.user_direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderTestEntry & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::EncoderTestEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::EncoderTestEntry & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::EncoderTestEntry>()
{
  return "mir_msgs::msg::EncoderTestEntry";
}

template<>
inline const char * name<mir_msgs::msg::EncoderTestEntry>()
{
  return "mir_msgs/msg/EncoderTestEntry";
}

template<>
struct has_fixed_size<mir_msgs::msg::EncoderTestEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::EncoderTestEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::EncoderTestEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__ENCODER_TEST_ENTRY__TRAITS_HPP_
