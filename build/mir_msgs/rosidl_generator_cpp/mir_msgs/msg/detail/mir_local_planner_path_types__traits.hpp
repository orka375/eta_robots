// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/MirLocalPlannerPathTypes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/mir_local_planner_path_types.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/mir_local_planner_path_types__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MirLocalPlannerPathTypes & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_type
  {
    out << "path_type: ";
    rosidl_generator_traits::value_to_yaml(msg.path_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirLocalPlannerPathTypes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_type: ";
    rosidl_generator_traits::value_to_yaml(msg.path_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirLocalPlannerPathTypes & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::MirLocalPlannerPathTypes & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::MirLocalPlannerPathTypes & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::MirLocalPlannerPathTypes>()
{
  return "mir_msgs::msg::MirLocalPlannerPathTypes";
}

template<>
inline const char * name<mir_msgs::msg::MirLocalPlannerPathTypes>()
{
  return "mir_msgs/msg/MirLocalPlannerPathTypes";
}

template<>
struct has_fixed_size<mir_msgs::msg::MirLocalPlannerPathTypes>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::MirLocalPlannerPathTypes>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::MirLocalPlannerPathTypes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__TRAITS_HPP_
