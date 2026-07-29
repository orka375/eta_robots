// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/msg/friction_model_parameters.hpp"


#ifndef UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__TRAITS_HPP_
#define UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_msgs/msg/detail/friction_model_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FrictionModelParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: viscous_scale
  {
    if (msg.viscous_scale.size() == 0) {
      out << "viscous_scale: []";
    } else {
      out << "viscous_scale: [";
      size_t pending_items = msg.viscous_scale.size();
      for (auto item : msg.viscous_scale) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coulomb_scale
  {
    if (msg.coulomb_scale.size() == 0) {
      out << "coulomb_scale: []";
    } else {
      out << "coulomb_scale: [";
      size_t pending_items = msg.coulomb_scale.size();
      for (auto item : msg.coulomb_scale) {
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
  const FrictionModelParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: viscous_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.viscous_scale.size() == 0) {
      out << "viscous_scale: []\n";
    } else {
      out << "viscous_scale:\n";
      for (auto item : msg.viscous_scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coulomb_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coulomb_scale.size() == 0) {
      out << "coulomb_scale: []\n";
    } else {
      out << "coulomb_scale:\n";
      for (auto item : msg.coulomb_scale) {
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

inline std::string to_yaml(const FrictionModelParameters & msg, bool use_flow_style = false)
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

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::msg::FrictionModelParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::msg::FrictionModelParameters & msg)
{
  return ur_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::msg::FrictionModelParameters>()
{
  return "ur_msgs::msg::FrictionModelParameters";
}

template<>
inline const char * name<ur_msgs::msg::FrictionModelParameters>()
{
  return "ur_msgs/msg/FrictionModelParameters";
}

template<>
struct has_fixed_size<ur_msgs::msg::FrictionModelParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::msg::FrictionModelParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_msgs::msg::FrictionModelParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__TRAITS_HPP_
