// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/MirLocalPlannerPathTypes.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/mir_local_planner_path_types__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/mir_local_planner_path_types__functions.h"
#include "mir_msgs/msg/detail/mir_local_planner_path_types__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mir_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_serialize(
  const mir_msgs::msg::MirLocalPlannerPathTypes & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: path_type
  cdr << ros_message.path_type;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::MirLocalPlannerPathTypes & ros_message)
{
  // Member: path_type
  cdr >> ros_message.path_type;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::MirLocalPlannerPathTypes & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: path_type
  {
    size_t item_size = sizeof(ros_message.path_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_MirLocalPlannerPathTypes(
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

  // Member: path_type
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
    using DataType = mir_msgs::msg::MirLocalPlannerPathTypes;
    is_plain =
      (
      offsetof(DataType, path_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_serialize_key(
  const mir_msgs::msg::MirLocalPlannerPathTypes & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: path_type
  cdr << ros_message.path_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size_key(
  const mir_msgs::msg::MirLocalPlannerPathTypes & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: path_type
  {
    size_t item_size = sizeof(ros_message.path_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_key_MirLocalPlannerPathTypes(
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

  // Member: path_type
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
    using DataType = mir_msgs::msg::MirLocalPlannerPathTypes;
    is_plain =
      (
      offsetof(DataType, path_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MirLocalPlannerPathTypes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::MirLocalPlannerPathTypes *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MirLocalPlannerPathTypes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::MirLocalPlannerPathTypes *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MirLocalPlannerPathTypes__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::MirLocalPlannerPathTypes *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MirLocalPlannerPathTypes__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MirLocalPlannerPathTypes(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MirLocalPlannerPathTypes__callbacks = {
  "mir_msgs::msg",
  "MirLocalPlannerPathTypes",
  _MirLocalPlannerPathTypes__cdr_serialize,
  _MirLocalPlannerPathTypes__cdr_deserialize,
  _MirLocalPlannerPathTypes__get_serialized_size,
  _MirLocalPlannerPathTypes__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MirLocalPlannerPathTypes__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MirLocalPlannerPathTypes__callbacks,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__MirLocalPlannerPathTypes__get_type_hash,
  &mir_msgs__msg__MirLocalPlannerPathTypes__get_type_description,
  &mir_msgs__msg__MirLocalPlannerPathTypes__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mir_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mir_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::MirLocalPlannerPathTypes>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_MirLocalPlannerPathTypes__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, MirLocalPlannerPathTypes)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_MirLocalPlannerPathTypes__handle;
}

#ifdef __cplusplus
}
#endif
