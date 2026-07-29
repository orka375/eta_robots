// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Trolley.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/trolley__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Trolley__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x13, 0x11, 0x7c, 0x6e, 0xac, 0x00, 0xe9,
      0x26, 0x2b, 0x3c, 0x21, 0xbd, 0xd7, 0x0f, 0x37,
      0xe0, 0xf3, 0xcd, 0x87, 0x54, 0x41, 0x25, 0xa6,
      0xef, 0x7d, 0x05, 0x1c, 0x9a, 0x68, 0x67, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Trolley__TYPE_NAME[] = "mir_msgs/msg/Trolley";

// Define type names, field names, and default values
static char mir_msgs__msg__Trolley__FIELD_NAME__id[] = "id";
static char mir_msgs__msg__Trolley__FIELD_NAME__length[] = "length";
static char mir_msgs__msg__Trolley__FIELD_NAME__width[] = "width";
static char mir_msgs__msg__Trolley__FIELD_NAME__height[] = "height";
static char mir_msgs__msg__Trolley__FIELD_NAME__offset_locked_wheels[] = "offset_locked_wheels";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Trolley__FIELDS[] = {
  {
    {mir_msgs__msg__Trolley__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Trolley__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Trolley__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Trolley__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Trolley__FIELD_NAME__offset_locked_wheels, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__Trolley__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Trolley__TYPE_NAME, 20, 20},
      {mir_msgs__msg__Trolley__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 id\n"
  "float32 length\n"
  "float32 width\n"
  "float32 height\n"
  "float32 offset_locked_wheels";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Trolley__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Trolley__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Trolley__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Trolley__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
