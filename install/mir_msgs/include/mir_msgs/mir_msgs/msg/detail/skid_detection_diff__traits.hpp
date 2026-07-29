// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/SkidDetectionDiff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/skid_detection_diff.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/skid_detection_diff__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkidDetectionDiff & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    to_flow_style_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: enc_acc_x
  {
    out << "enc_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.enc_acc_x, out);
    out << ", ";
  }

  // member: enc_acc_y
  {
    out << "enc_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.enc_acc_y, out);
    out << ", ";
  }

  // member: enc_rot_th
  {
    out << "enc_rot_th: ";
    rosidl_generator_traits::value_to_yaml(msg.enc_rot_th, out);
    out << ", ";
  }

  // member: imu_acc_x
  {
    out << "imu_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_acc_x, out);
    out << ", ";
  }

  // member: imu_acc_y
  {
    out << "imu_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_acc_y, out);
    out << ", ";
  }

  // member: imu_rot_th
  {
    out << "imu_rot_th: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_rot_th, out);
    out << ", ";
  }

  // member: diff_acc_x
  {
    out << "diff_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_acc_x, out);
    out << ", ";
  }

  // member: diff_acc_y
  {
    out << "diff_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_acc_y, out);
    out << ", ";
  }

  // member: diff_rot_th
  {
    out << "diff_rot_th: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_rot_th, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkidDetectionDiff & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp:\n";
    to_block_style_yaml(msg.time_stamp, out, indentation + 2);
  }

  // member: enc_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.enc_acc_x, out);
    out << "\n";
  }

  // member: enc_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.enc_acc_y, out);
    out << "\n";
  }

  // member: enc_rot_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc_rot_th: ";
    rosidl_generator_traits::value_to_yaml(msg.enc_rot_th, out);
    out << "\n";
  }

  // member: imu_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_acc_x, out);
    out << "\n";
  }

  // member: imu_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_acc_y, out);
    out << "\n";
  }

  // member: imu_rot_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_rot_th: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_rot_th, out);
    out << "\n";
  }

  // member: diff_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_acc_x, out);
    out << "\n";
  }

  // member: diff_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_acc_y, out);
    out << "\n";
  }

  // member: diff_rot_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_rot_th: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_rot_th, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkidDetectionDiff & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::SkidDetectionDiff & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::SkidDetectionDiff & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::SkidDetectionDiff>()
{
  return "mir_msgs::msg::SkidDetectionDiff";
}

template<>
inline const char * name<mir_msgs::msg::SkidDetectionDiff>()
{
  return "mir_msgs/msg/SkidDetectionDiff";
}

template<>
struct has_fixed_size<mir_msgs::msg::SkidDetectionDiff>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mir_msgs::msg::SkidDetectionDiff>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mir_msgs::msg::SkidDetectionDiff>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_DIFF__TRAITS_HPP_
