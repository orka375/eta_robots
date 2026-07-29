// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/BrakeState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/brake_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__BrakeState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x10, 0xf0, 0x4d, 0x4b, 0x1d, 0x7e, 0xf3,
      0xc2, 0x5f, 0xc3, 0x86, 0x15, 0xb2, 0xe2, 0x4c,
      0xa6, 0xa1, 0xe1, 0x58, 0x9e, 0xc6, 0xf3, 0xf1,
      0x40, 0xda, 0x25, 0x6c, 0x51, 0xcc, 0xbf, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__BrakeState__TYPE_NAME[] = "mir_msgs/msg/BrakeState";

// Define type names, field names, and default values
static char mir_msgs__msg__BrakeState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__BrakeState__FIELDS[] = {
  {
    {mir_msgs__msg__BrakeState__FIELD_NAME__state, 5, 5},
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
mir_msgs__msg__BrakeState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__BrakeState__TYPE_NAME, 23, 23},
      {mir_msgs__msg__BrakeState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 UNKNOWN = 0\n"
  "uint8 INITIALIZING = 1\n"
  "uint8 HOMING = 2\n"
  "uint8 ACTIVE = 3\n"
  "uint8 INACTIVE = 4\n"
  "uint8 ACTIVATING = 5\n"
  "uint8 DEACTIVATING = 6\n"
  "uint8 ERROR = 7\n"
  "\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__BrakeState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__BrakeState__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 167, 167},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__BrakeState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__BrakeState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
