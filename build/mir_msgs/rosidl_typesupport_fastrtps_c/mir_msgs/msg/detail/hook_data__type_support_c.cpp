// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/HookData.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/hook_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/hook_data__struct.h"
#include "mir_msgs/msg/detail/hook_data__functions.h"
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

#include "mir_msgs/msg/detail/angle_measurment__functions.h"  // angle

// forward declare type support functions

bool cdr_serialize_mir_msgs__msg__AngleMeasurment(
  const mir_msgs__msg__AngleMeasurment * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__AngleMeasurment(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__AngleMeasurment * ros_message);

size_t get_serialized_size_mir_msgs__msg__AngleMeasurment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__AngleMeasurment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__AngleMeasurment(
  const mir_msgs__msg__AngleMeasurment * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__AngleMeasurment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__AngleMeasurment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, AngleMeasurment)();


using _HookData__ros_msg_type = mir_msgs__msg__HookData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_mir_msgs__msg__HookData(
  const mir_msgs__msg__HookData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: angle
  {
    cdr_serialize_mir_msgs__msg__AngleMeasurment(
      &ros_message->angle, cdr);
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: brake_state
  {
    cdr << ros_message->brake_state;
  }

  // Field name: gripper_state
  {
    cdr << ros_message->gripper_state;
  }

  // Field name: height_state
  {
    cdr << ros_message->height_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_deserialize_mir_msgs__msg__HookData(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__HookData * ros_message)
{
  // Field name: angle
  {
    cdr_deserialize_mir_msgs__msg__AngleMeasurment(cdr, &ros_message->angle);
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: brake_state
  {
    cdr >> ros_message->brake_state;
  }

  // Field name: gripper_state
  {
    cdr >> ros_message->gripper_state;
  }

  // Field name: height_state
  {
    cdr >> ros_message->height_state;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__HookData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HookData__ros_msg_type * ros_message = static_cast<const _HookData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: angle
  current_alignment += get_serialized_size_mir_msgs__msg__AngleMeasurment(
    &(ros_message->angle), current_alignment);

  // Field name: height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake_state
  {
    size_t item_size = sizeof(ros_message->brake_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_state
  {
    size_t item_size = sizeof(ros_message->gripper_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height_state
  {
    size_t item_size = sizeof(ros_message->height_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__HookData(
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

  // Field name: angle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__AngleMeasurment(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: brake_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: height_state
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
    using DataType = mir_msgs__msg__HookData;
    is_plain =
      (
      offsetof(DataType, height_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_key_mir_msgs__msg__HookData(
  const mir_msgs__msg__HookData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: angle
  {
    cdr_serialize_key_mir_msgs__msg__AngleMeasurment(
      &ros_message->angle, cdr);
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: brake_state
  {
    cdr << ros_message->brake_state;
  }

  // Field name: gripper_state
  {
    cdr << ros_message->gripper_state;
  }

  // Field name: height_state
  {
    cdr << ros_message->height_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_key_mir_msgs__msg__HookData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HookData__ros_msg_type * ros_message = static_cast<const _HookData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: angle
  current_alignment += get_serialized_size_key_mir_msgs__msg__AngleMeasurment(
    &(ros_message->angle), current_alignment);

  // Field name: height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake_state
  {
    size_t item_size = sizeof(ros_message->brake_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_state
  {
    size_t item_size = sizeof(ros_message->gripper_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height_state
  {
    size_t item_size = sizeof(ros_message->height_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_key_mir_msgs__msg__HookData(
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
  // Field name: angle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__AngleMeasurment(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: brake_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: height_state
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
    using DataType = mir_msgs__msg__HookData;
    is_plain =
      (
      offsetof(DataType, height_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HookData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mir_msgs__msg__HookData * ros_message = static_cast<const mir_msgs__msg__HookData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mir_msgs__msg__HookData(ros_message, cdr);
}

static bool _HookData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mir_msgs__msg__HookData * ros_message = static_cast<mir_msgs__msg__HookData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mir_msgs__msg__HookData(cdr, ros_message);
}

static uint32_t _HookData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__HookData(
      untyped_ros_message, 0));
}

static size_t _HookData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__HookData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HookData = {
  "mir_msgs::msg",
  "HookData",
  _HookData__cdr_serialize,
  _HookData__cdr_deserialize,
  _HookData__get_serialized_size,
  _HookData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HookData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HookData,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__HookData__get_type_hash,
  &mir_msgs__msg__HookData__get_type_description,
  &mir_msgs__msg__HookData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, HookData)() {
  return &_HookData__type_support;
}

#if defined(__cplusplus)
}
#endif
