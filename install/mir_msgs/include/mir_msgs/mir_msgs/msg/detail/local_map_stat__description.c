// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/LocalMapStat.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/local_map_stat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__LocalMapStat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0xfe, 0x18, 0x4f, 0x66, 0x83, 0x45, 0xfe,
      0x45, 0x59, 0xb0, 0x72, 0x21, 0xe7, 0xc1, 0x4e,
      0xd1, 0xdf, 0x38, 0xb0, 0x9c, 0xd8, 0xa8, 0xbe,
      0xb0, 0xa2, 0x1d, 0x9b, 0x56, 0x7c, 0xaf, 0x61,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__LocalMapStat__TYPE_NAME[] = "mir_msgs/msg/LocalMapStat";

// Define type names, field names, and default values
static char mir_msgs__msg__LocalMapStat__FIELD_NAME__idx[] = "idx";
static char mir_msgs__msg__LocalMapStat__FIELD_NAME__x[] = "x";
static char mir_msgs__msg__LocalMapStat__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__LocalMapStat__FIELDS[] = {
  {
    {mir_msgs__msg__LocalMapStat__FIELD_NAME__idx, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__LocalMapStat__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__LocalMapStat__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__LocalMapStat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__LocalMapStat__TYPE_NAME, 25, 25},
      {mir_msgs__msg__LocalMapStat__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32  idx\n"
  "int32  x\n"
  "int32  y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__LocalMapStat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__LocalMapStat__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__LocalMapStat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__LocalMapStat__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
