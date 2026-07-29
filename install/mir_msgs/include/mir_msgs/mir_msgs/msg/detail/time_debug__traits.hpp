// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/time_debug.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__TIME_DEBUG__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__TIME_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/time_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: description
  {
    if (msg.description.size() == 0) {
      out << "description: []";
    } else {
      out << "description: [";
      size_t pending_items = msg.description.size();
      for (auto item : msg.description) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_elapsed
  {
    if (msg.time_elapsed.size() == 0) {
      out << "time_elapsed: []";
    } else {
      out << "time_elapsed: [";
      size_t pending_items = msg.time_elapsed.size();
      for (auto item : msg.time_elapsed) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const TimeDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.description.size() == 0) {
      out << "description: []\n";
    } else {
      out << "description:\n";
      for (auto item : msg.description) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_elapsed.size() == 0) {
      out << "time_elapsed: []\n";
    } else {
      out << "time_elapsed:\n";
      for (auto item : msg.time_elapsed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeDebug & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::TimeDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::TimeDebug & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::TimeDebug>()
{
  return "mir_msgs::msg::TimeDebug";
}

template<>
inline const char * name<mir_msgs::msg::TimeDebug>()
{
  return "mir_msgs/msg/TimeDebug";
}

template<>
struct has_fixed_size<mir_msgs::msg::TimeDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::TimeDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::TimeDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__TIME_DEBUG__TRAITS_HPP_
