// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/TimeDebug.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/time_debug__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__TimeDebug__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x88, 0xe7, 0x83, 0x13, 0xd6, 0x33, 0x98,
      0xcc, 0x9c, 0x66, 0x89, 0xfe, 0x49, 0x13, 0xea,
      0x69, 0x8a, 0x10, 0x85, 0x4e, 0xe6, 0xec, 0x70,
      0x52, 0x59, 0x27, 0xb8, 0xb3, 0xfb, 0x2c, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__TimeDebug__TYPE_NAME[] = "mir_msgs/msg/TimeDebug";

// Define type names, field names, and default values
static char mir_msgs__msg__TimeDebug__FIELD_NAME__description[] = "description";
static char mir_msgs__msg__TimeDebug__FIELD_NAME__time_elapsed[] = "time_elapsed";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__TimeDebug__FIELDS[] = {
  {
    {mir_msgs__msg__TimeDebug__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__TimeDebug__FIELD_NAME__time_elapsed, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__TimeDebug__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__TimeDebug__TYPE_NAME, 22, 22},
      {mir_msgs__msg__TimeDebug__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] description\n"
  "float64[] time_elapsed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__TimeDebug__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__TimeDebug__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__TimeDebug__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__TimeDebug__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
