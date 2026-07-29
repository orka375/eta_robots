// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/gripper_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__GripperState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0xdf, 0xff, 0x17, 0x40, 0x24, 0xb2, 0xfd,
      0x18, 0x41, 0x63, 0xdd, 0x22, 0x4d, 0x14, 0x3e,
      0x66, 0x09, 0x88, 0x54, 0xf2, 0x5c, 0x46, 0x7e,
      0xc4, 0xfc, 0x0a, 0xba, 0x12, 0xb9, 0xd2, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__GripperState__TYPE_NAME[] = "mir_msgs/msg/GripperState";

// Define type names, field names, and default values
static char mir_msgs__msg__GripperState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__GripperState__FIELDS[] = {
  {
    {mir_msgs__msg__GripperState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__GripperState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__GripperState__TYPE_NAME, 25, 25},
      {mir_msgs__msg__GripperState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 LOCK_UNKNOWN = 0\n"
  "uint8 LOCK_HOMING = 1\n"
  "uint8 LOCK_OPEN = 2\n"
  "uint8 LOCK_OPENING = 3\n"
  "uint8 LOCK_CLOSED = 4\n"
  "uint8 LOCK_CLOSING = 6\n"
  "uint8 LOCK_ERROR = 9\n"
  "\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__GripperState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__GripperState__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 167, 167},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__GripperState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__GripperState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
