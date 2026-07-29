// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/MovingState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/moving_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__MovingState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xc1, 0xb2, 0x39, 0x3e, 0x39, 0xd0, 0x5f,
      0xe0, 0xe9, 0x3b, 0xe7, 0x9c, 0xb1, 0x74, 0xb6,
      0xe8, 0xdc, 0xf9, 0x5d, 0x08, 0x90, 0xa3, 0x7c,
      0xcf, 0x19, 0x17, 0x21, 0x58, 0x13, 0xa5, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__MovingState__TYPE_NAME[] = "mir_msgs/msg/MovingState";

// Define type names, field names, and default values
static char mir_msgs__msg__MovingState__FIELD_NAME__moving_state[] = "moving_state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__MovingState__FIELDS[] = {
  {
    {mir_msgs__msg__MovingState__FIELD_NAME__moving_state, 12, 12},
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
mir_msgs__msg__MovingState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__MovingState__TYPE_NAME, 24, 24},
      {mir_msgs__msg__MovingState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 UNKNOWN=0\n"
  "uint8 MOVING=1\n"
  "uint8 STOPPED=2\n"
  "uint8 STANDING_STILL=3\n"
  "\n"
  "uint8 moving_state\\t# Current robot moving state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__MovingState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__MovingState__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__MovingState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__MovingState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
