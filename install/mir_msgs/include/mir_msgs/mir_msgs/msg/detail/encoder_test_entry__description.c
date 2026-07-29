// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/encoder_test_entry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__EncoderTestEntry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x78, 0x59, 0xa8, 0x75, 0xd1, 0x1d, 0xc1,
      0x6b, 0x66, 0x63, 0x75, 0x0b, 0xcf, 0x8e, 0x27,
      0xf0, 0x82, 0x21, 0x15, 0xea, 0xd3, 0xf8, 0x00,
      0xdf, 0xbf, 0x56, 0xcb, 0x56, 0x0d, 0x3b, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__EncoderTestEntry__TYPE_NAME[] = "mir_msgs/msg/EncoderTestEntry";

// Define type names, field names, and default values
static char mir_msgs__msg__EncoderTestEntry__FIELD_NAME__command_velocity[] = "command_velocity";
static char mir_msgs__msg__EncoderTestEntry__FIELD_NAME__command_distance[] = "command_distance";
static char mir_msgs__msg__EncoderTestEntry__FIELD_NAME__left_dist[] = "left_dist";
static char mir_msgs__msg__EncoderTestEntry__FIELD_NAME__right_dist[] = "right_dist";
static char mir_msgs__msg__EncoderTestEntry__FIELD_NAME__suggested_direction[] = "suggested_direction";
static char mir_msgs__msg__EncoderTestEntry__FIELD_NAME__user_direction[] = "user_direction";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__EncoderTestEntry__FIELDS[] = {
  {
    {mir_msgs__msg__EncoderTestEntry__FIELD_NAME__command_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__EncoderTestEntry__FIELD_NAME__command_distance, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__EncoderTestEntry__FIELD_NAME__left_dist, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__EncoderTestEntry__FIELD_NAME__right_dist, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__EncoderTestEntry__FIELD_NAME__suggested_direction, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__EncoderTestEntry__FIELD_NAME__user_direction, 14, 14},
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
mir_msgs__msg__EncoderTestEntry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__EncoderTestEntry__TYPE_NAME, 29, 29},
      {mir_msgs__msg__EncoderTestEntry__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 command_velocity\n"
  "float64 command_distance\n"
  "float64 left_dist\n"
  "float64 right_dist\n"
  "string suggested_direction\n"
  "string user_direction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__EncoderTestEntry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__EncoderTestEntry__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 136, 136},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__EncoderTestEntry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__EncoderTestEntry__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
