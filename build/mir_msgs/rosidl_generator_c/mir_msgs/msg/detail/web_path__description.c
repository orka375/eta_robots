// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/WebPath.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/web_path__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__WebPath__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xe8, 0x1e, 0xb9, 0x42, 0x3a, 0x78, 0x62,
      0x32, 0xc6, 0x7f, 0x0c, 0x5f, 0x3a, 0xb7, 0xea,
      0x98, 0x06, 0xe0, 0x9f, 0x25, 0x93, 0x0e, 0x48,
      0xcc, 0x88, 0x5f, 0x4b, 0xd0, 0x9c, 0x91, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__WebPath__TYPE_NAME[] = "mir_msgs/msg/WebPath";

// Define type names, field names, and default values
static char mir_msgs__msg__WebPath__FIELD_NAME__seq[] = "seq";
static char mir_msgs__msg__WebPath__FIELD_NAME__x[] = "x";
static char mir_msgs__msg__WebPath__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__WebPath__FIELDS[] = {
  {
    {mir_msgs__msg__WebPath__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__WebPath__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__WebPath__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__WebPath__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__WebPath__TYPE_NAME, 20, 20},
      {mir_msgs__msg__WebPath__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 seq\n"
  "float32[] x\n"
  "float32[] y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__WebPath__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__WebPath__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__WebPath__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__WebPath__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
