// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mir_msgs:msg/SkidDetectionStampedFloat.idl
// generated code does not contain a copyright notice
#ifndef MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/skid_detection_stamped_float__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_mir_msgs__msg__SkidDetectionStampedFloat(
  const mir_msgs__msg__SkidDetectionStampedFloat * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_deserialize_mir_msgs__msg__SkidDetectionStampedFloat(
  eprosima::fastcdr::Cdr &,
  mir_msgs__msg__SkidDetectionStampedFloat * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__SkidDetectionStampedFloat(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__SkidDetectionStampedFloat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_key_mir_msgs__msg__SkidDetectionStampedFloat(
  const mir_msgs__msg__SkidDetectionStampedFloat * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_key_mir_msgs__msg__SkidDetectionStampedFloat(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_key_mir_msgs__msg__SkidDetectionStampedFloat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, SkidDetectionStampedFloat)();

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__SKID_DETECTION_STAMPED_FLOAT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
