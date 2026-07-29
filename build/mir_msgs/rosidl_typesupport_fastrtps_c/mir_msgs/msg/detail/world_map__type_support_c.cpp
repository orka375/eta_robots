// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/world_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/world_map__struct.h"
#include "mir_msgs/msg/detail/world_map__functions.h"
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

#include "mir_msgs/msg/detail/external_robots__functions.h"  // robots
#include "mir_msgs/msg/detail/resources_state__functions.h"  // areas, positions

// forward declare type support functions

bool cdr_serialize_mir_msgs__msg__ExternalRobots(
  const mir_msgs__msg__ExternalRobots * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__ExternalRobots(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__ExternalRobots * ros_message);

size_t get_serialized_size_mir_msgs__msg__ExternalRobots(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__ExternalRobots(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__ExternalRobots(
  const mir_msgs__msg__ExternalRobots * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__ExternalRobots(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__ExternalRobots(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, ExternalRobots)();

bool cdr_serialize_mir_msgs__msg__ResourcesState(
  const mir_msgs__msg__ResourcesState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__ResourcesState(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__ResourcesState * ros_message);

size_t get_serialized_size_mir_msgs__msg__ResourcesState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__ResourcesState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__ResourcesState(
  const mir_msgs__msg__ResourcesState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__ResourcesState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__ResourcesState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, ResourcesState)();


using _WorldMap__ros_msg_type = mir_msgs__msg__WorldMap;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_mir_msgs__msg__WorldMap(
  const mir_msgs__msg__WorldMap * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: positions
  {
    cdr_serialize_mir_msgs__msg__ResourcesState(
      &ros_message->positions, cdr);
  }

  // Field name: areas
  {
    cdr_serialize_mir_msgs__msg__ResourcesState(
      &ros_message->areas, cdr);
  }

  // Field name: robots
  {
    cdr_serialize_mir_msgs__msg__ExternalRobots(
      &ros_message->robots, cdr);
  }

  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_deserialize_mir_msgs__msg__WorldMap(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__WorldMap * ros_message)
{
  // Field name: positions
  {
    cdr_deserialize_mir_msgs__msg__ResourcesState(cdr, &ros_message->positions);
  }

  // Field name: areas
  {
    cdr_deserialize_mir_msgs__msg__ResourcesState(cdr, &ros_message->areas);
  }

  // Field name: robots
  {
    cdr_deserialize_mir_msgs__msg__ExternalRobots(cdr, &ros_message->robots);
  }

  // Field name: map_id
  {
    cdr >> ros_message->map_id;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__WorldMap(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WorldMap__ros_msg_type * ros_message = static_cast<const _WorldMap__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: positions
  current_alignment += get_serialized_size_mir_msgs__msg__ResourcesState(
    &(ros_message->positions), current_alignment);

  // Field name: areas
  current_alignment += get_serialized_size_mir_msgs__msg__ResourcesState(
    &(ros_message->areas), current_alignment);

  // Field name: robots
  current_alignment += get_serialized_size_mir_msgs__msg__ExternalRobots(
    &(ros_message->robots), current_alignment);

  // Field name: map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__WorldMap(
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

  // Field name: positions
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__ResourcesState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: areas
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__ResourcesState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robots
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__ExternalRobots(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: map_id
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
    using DataType = mir_msgs__msg__WorldMap;
    is_plain =
      (
      offsetof(DataType, map_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_key_mir_msgs__msg__WorldMap(
  const mir_msgs__msg__WorldMap * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: positions
  {
    cdr_serialize_key_mir_msgs__msg__ResourcesState(
      &ros_message->positions, cdr);
  }

  // Field name: areas
  {
    cdr_serialize_key_mir_msgs__msg__ResourcesState(
      &ros_message->areas, cdr);
  }

  // Field name: robots
  {
    cdr_serialize_key_mir_msgs__msg__ExternalRobots(
      &ros_message->robots, cdr);
  }

  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_key_mir_msgs__msg__WorldMap(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WorldMap__ros_msg_type * ros_message = static_cast<const _WorldMap__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: positions
  current_alignment += get_serialized_size_key_mir_msgs__msg__ResourcesState(
    &(ros_message->positions), current_alignment);

  // Field name: areas
  current_alignment += get_serialized_size_key_mir_msgs__msg__ResourcesState(
    &(ros_message->areas), current_alignment);

  // Field name: robots
  current_alignment += get_serialized_size_key_mir_msgs__msg__ExternalRobots(
    &(ros_message->robots), current_alignment);

  // Field name: map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_key_mir_msgs__msg__WorldMap(
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
  // Field name: positions
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__ResourcesState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: areas
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__ResourcesState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robots
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__ExternalRobots(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: map_id
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
    using DataType = mir_msgs__msg__WorldMap;
    is_plain =
      (
      offsetof(DataType, map_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WorldMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mir_msgs__msg__WorldMap * ros_message = static_cast<const mir_msgs__msg__WorldMap *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mir_msgs__msg__WorldMap(ros_message, cdr);
}

static bool _WorldMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mir_msgs__msg__WorldMap * ros_message = static_cast<mir_msgs__msg__WorldMap *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mir_msgs__msg__WorldMap(cdr, ros_message);
}

static uint32_t _WorldMap__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__WorldMap(
      untyped_ros_message, 0));
}

static size_t _WorldMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__WorldMap(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WorldMap = {
  "mir_msgs::msg",
  "WorldMap",
  _WorldMap__cdr_serialize,
  _WorldMap__cdr_deserialize,
  _WorldMap__get_serialized_size,
  _WorldMap__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WorldMap__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WorldMap,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__WorldMap__get_type_hash,
  &mir_msgs__msg__WorldMap__get_type_description,
  &mir_msgs__msg__WorldMap__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, WorldMap)() {
  return &_WorldMap__type_support;
}

#if defined(__cplusplus)
}
#endif
