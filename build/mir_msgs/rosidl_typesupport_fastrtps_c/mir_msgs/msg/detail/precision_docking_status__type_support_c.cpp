// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/precision_docking_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/precision_docking_status__struct.h"
#include "mir_msgs/msg/detail/precision_docking_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PrecisionDockingStatus__ros_msg_type = mir_msgs__msg__PrecisionDockingStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_mir_msgs__msg__PrecisionDockingStatus(
  const mir_msgs__msg__PrecisionDockingStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  // Field name: motor_forward
  {
    cdr << (ros_message->motor_forward ? true : false);
  }

  // Field name: motor_back
  {
    cdr << (ros_message->motor_back ? true : false);
  }

  // Field name: left_docking
  {
    cdr << (ros_message->left_docking ? true : false);
  }

  // Field name: right_docking
  {
    cdr << (ros_message->right_docking ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_deserialize_mir_msgs__msg__PrecisionDockingStatus(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__PrecisionDockingStatus * ros_message)
{
  // Field name: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connected = tmp ? true : false;
  }

  // Field name: motor_forward
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_forward = tmp ? true : false;
  }

  // Field name: motor_back
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_back = tmp ? true : false;
  }

  // Field name: left_docking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_docking = tmp ? true : false;
  }

  // Field name: right_docking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_docking = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__PrecisionDockingStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PrecisionDockingStatus__ros_msg_type * ros_message = static_cast<const _PrecisionDockingStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_forward
  {
    size_t item_size = sizeof(ros_message->motor_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_back
  {
    size_t item_size = sizeof(ros_message->motor_back);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_docking
  {
    size_t item_size = sizeof(ros_message->left_docking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_docking
  {
    size_t item_size = sizeof(ros_message->right_docking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__PrecisionDockingStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motor_forward
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motor_back
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_docking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_docking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__PrecisionDockingStatus;
    is_plain =
      (
      offsetof(DataType, right_docking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_key_mir_msgs__msg__PrecisionDockingStatus(
  const mir_msgs__msg__PrecisionDockingStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  // Field name: motor_forward
  {
    cdr << (ros_message->motor_forward ? true : false);
  }

  // Field name: motor_back
  {
    cdr << (ros_message->motor_back ? true : false);
  }

  // Field name: left_docking
  {
    cdr << (ros_message->left_docking ? true : false);
  }

  // Field name: right_docking
  {
    cdr << (ros_message->right_docking ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_key_mir_msgs__msg__PrecisionDockingStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PrecisionDockingStatus__ros_msg_type * ros_message = static_cast<const _PrecisionDockingStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_forward
  {
    size_t item_size = sizeof(ros_message->motor_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_back
  {
    size_t item_size = sizeof(ros_message->motor_back);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_docking
  {
    size_t item_size = sizeof(ros_message->left_docking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_docking
  {
    size_t item_size = sizeof(ros_message->right_docking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_key_mir_msgs__msg__PrecisionDockingStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motor_forward
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motor_back
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_docking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_docking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__PrecisionDockingStatus;
    is_plain =
      (
      offsetof(DataType, right_docking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PrecisionDockingStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mir_msgs__msg__PrecisionDockingStatus * ros_message = static_cast<const mir_msgs__msg__PrecisionDockingStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mir_msgs__msg__PrecisionDockingStatus(ros_message, cdr);
}

static bool _PrecisionDockingStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mir_msgs__msg__PrecisionDockingStatus * ros_message = static_cast<mir_msgs__msg__PrecisionDockingStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mir_msgs__msg__PrecisionDockingStatus(cdr, ros_message);
}

static uint32_t _PrecisionDockingStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__PrecisionDockingStatus(
      untyped_ros_message, 0));
}

static size_t _PrecisionDockingStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__PrecisionDockingStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PrecisionDockingStatus = {
  "mir_msgs::msg",
  "PrecisionDockingStatus",
  _PrecisionDockingStatus__cdr_serialize,
  _PrecisionDockingStatus__cdr_deserialize,
  _PrecisionDockingStatus__get_serialized_size,
  _PrecisionDockingStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PrecisionDockingStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PrecisionDockingStatus,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__PrecisionDockingStatus__get_type_hash,
  &mir_msgs__msg__PrecisionDockingStatus__get_type_description,
  &mir_msgs__msg__PrecisionDockingStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, PrecisionDockingStatus)() {
  return &_PrecisionDockingStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
