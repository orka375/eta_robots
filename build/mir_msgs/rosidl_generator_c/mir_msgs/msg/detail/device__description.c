// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Device.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/device__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Device__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x9f, 0x2d, 0x4b, 0xcf, 0xeb, 0x65, 0x08,
      0xeb, 0xb5, 0xc7, 0x95, 0x4d, 0xc6, 0x5c, 0x3b,
      0x6d, 0x07, 0x97, 0xf8, 0xf3, 0x84, 0xa7, 0x9e,
      0x1d, 0x9f, 0x9b, 0x6c, 0x8b, 0xa6, 0xaa, 0xc8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Device__TYPE_NAME[] = "mir_msgs/msg/Device";

// Define type names, field names, and default values
static char mir_msgs__msg__Device__FIELD_NAME__name[] = "name";
static char mir_msgs__msg__Device__FIELD_NAME__serial[] = "serial";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Device__FIELDS[] = {
  {
    {mir_msgs__msg__Device__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Device__FIELD_NAME__serial, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__Device__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Device__TYPE_NAME, 19, 19},
      {mir_msgs__msg__Device__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string serial";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Device__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Device__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Device__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Device__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
