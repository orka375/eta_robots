// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_dashboard_msgs:msg/VersionInformation.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/msg/detail/version_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_dashboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_dashboard_msgs/msg/detail/version_information__struct.h"
#include "ur_dashboard_msgs/msg/detail/version_information__functions.h"
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


using _VersionInformation__ros_msg_type = ur_dashboard_msgs__msg__VersionInformation;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
bool cdr_serialize_ur_dashboard_msgs__msg__VersionInformation(
  const ur_dashboard_msgs__msg__VersionInformation * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: major
  {
    cdr << ros_message->major;
  }

  // Field name: minor
  {
    cdr << ros_message->minor;
  }

  // Field name: bugfix
  {
    cdr << ros_message->bugfix;
  }

  // Field name: build
  {
    cdr << ros_message->build;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
bool cdr_deserialize_ur_dashboard_msgs__msg__VersionInformation(
  eprosima::fastcdr::Cdr & cdr,
  ur_dashboard_msgs__msg__VersionInformation * ros_message)
{
  // Field name: major
  {
    cdr >> ros_message->major;
  }

  // Field name: minor
  {
    cdr >> ros_message->minor;
  }

  // Field name: bugfix
  {
    cdr >> ros_message->bugfix;
  }

  // Field name: build
  {
    cdr >> ros_message->build;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t get_serialized_size_ur_dashboard_msgs__msg__VersionInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VersionInformation__ros_msg_type * ros_message = static_cast<const _VersionInformation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: major
  {
    size_t item_size = sizeof(ros_message->major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: minor
  {
    size_t item_size = sizeof(ros_message->minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bugfix
  {
    size_t item_size = sizeof(ros_message->bugfix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: build
  {
    size_t item_size = sizeof(ros_message->build);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t max_serialized_size_ur_dashboard_msgs__msg__VersionInformation(
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

  // Field name: major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bugfix
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: build
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_dashboard_msgs__msg__VersionInformation;
    is_plain =
      (
      offsetof(DataType, build) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
bool cdr_serialize_key_ur_dashboard_msgs__msg__VersionInformation(
  const ur_dashboard_msgs__msg__VersionInformation * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: major
  {
    cdr << ros_message->major;
  }

  // Field name: minor
  {
    cdr << ros_message->minor;
  }

  // Field name: bugfix
  {
    cdr << ros_message->bugfix;
  }

  // Field name: build
  {
    cdr << ros_message->build;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t get_serialized_size_key_ur_dashboard_msgs__msg__VersionInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VersionInformation__ros_msg_type * ros_message = static_cast<const _VersionInformation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: major
  {
    size_t item_size = sizeof(ros_message->major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: minor
  {
    size_t item_size = sizeof(ros_message->minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bugfix
  {
    size_t item_size = sizeof(ros_message->bugfix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: build
  {
    size_t item_size = sizeof(ros_message->build);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t max_serialized_size_key_ur_dashboard_msgs__msg__VersionInformation(
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
  // Field name: major
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: minor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bugfix
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: build
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_dashboard_msgs__msg__VersionInformation;
    is_plain =
      (
      offsetof(DataType, build) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _VersionInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ur_dashboard_msgs__msg__VersionInformation * ros_message = static_cast<const ur_dashboard_msgs__msg__VersionInformation *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ur_dashboard_msgs__msg__VersionInformation(ros_message, cdr);
}

static bool _VersionInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ur_dashboard_msgs__msg__VersionInformation * ros_message = static_cast<ur_dashboard_msgs__msg__VersionInformation *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ur_dashboard_msgs__msg__VersionInformation(cdr, ros_message);
}

static uint32_t _VersionInformation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_dashboard_msgs__msg__VersionInformation(
      untyped_ros_message, 0));
}

static size_t _VersionInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_dashboard_msgs__msg__VersionInformation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VersionInformation = {
  "ur_dashboard_msgs::msg",
  "VersionInformation",
  _VersionInformation__cdr_serialize,
  _VersionInformation__cdr_deserialize,
  _VersionInformation__get_serialized_size,
  _VersionInformation__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VersionInformation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VersionInformation,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__msg__VersionInformation__get_type_hash,
  &ur_dashboard_msgs__msg__VersionInformation__get_type_description,
  &ur_dashboard_msgs__msg__VersionInformation__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, msg, VersionInformation)() {
  return &_VersionInformation__type_support;
}

#if defined(__cplusplus)
}
#endif
