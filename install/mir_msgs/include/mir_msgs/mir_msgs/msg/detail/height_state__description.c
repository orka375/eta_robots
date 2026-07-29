// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/HeightState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/height_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__HeightState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x27, 0x15, 0xc8, 0xd4, 0x77, 0x62, 0x2d,
      0x85, 0x72, 0xb7, 0xe4, 0xda, 0x3b, 0xde, 0x08,
      0x96, 0x59, 0xe6, 0xc9, 0xd5, 0x35, 0xc6, 0xca,
      0x9b, 0xc0, 0xf4, 0x83, 0x4d, 0xff, 0xd7, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__HeightState__TYPE_NAME[] = "mir_msgs/msg/HeightState";

// Define type names, field names, and default values
static char mir_msgs__msg__HeightState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__HeightState__FIELDS[] = {
  {
    {mir_msgs__msg__HeightState__FIELD_NAME__state, 5, 5},
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
mir_msgs__msg__HeightState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__HeightState__TYPE_NAME, 24, 24},
      {mir_msgs__msg__HeightState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 HEIGHT_UNKNOWN = 0\n"
  "uint8 HEIGHT_HOMING = 1\n"
  "uint8 HEIGHT_IDLE = 2\n"
  "uint8 HEIGHT_CHANGING = 3\n"
  "uint8 HEIGHT_ERROR = 4\n"
  "\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__HeightState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__HeightState__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 133, 133},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__HeightState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__HeightState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
