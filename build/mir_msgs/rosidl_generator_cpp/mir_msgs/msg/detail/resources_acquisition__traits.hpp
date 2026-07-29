// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/ResourcesAcquisition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/resources_acquisition.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/resources_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'path'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResourcesAcquisition & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_guid
  {
    out << "position_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.position_guid, out);
    out << ", ";
  }

  // member: token
  {
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResourcesAcquisition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.position_guid, out);
    out << "\n";
  }

  // member: token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResourcesAcquisition & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::ResourcesAcquisition & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::ResourcesAcquisition & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::ResourcesAcquisition>()
{
  return "mir_msgs::msg::ResourcesAcquisition";
}

template<>
inline const char * name<mir_msgs::msg::ResourcesAcquisition>()
{
  return "mir_msgs/msg/ResourcesAcquisition";
}

template<>
struct has_fixed_size<mir_msgs::msg::ResourcesAcquisition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::ResourcesAcquisition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::ResourcesAcquisition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCES_ACQUISITION__TRAITS_HPP_
