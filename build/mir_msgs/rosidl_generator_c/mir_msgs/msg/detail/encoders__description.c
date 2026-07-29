// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Encoders.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/encoders__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Encoders__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x92, 0x02, 0xf7, 0xe6, 0x3d, 0xc4, 0x94,
      0xf3, 0xd0, 0xbf, 0x14, 0x49, 0xb4, 0xe7, 0x60,
      0x12, 0x02, 0xc5, 0x39, 0x68, 0x81, 0x8a, 0x09,
      0x67, 0x83, 0x21, 0x1e, 0x98, 0xae, 0x5b, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Encoders__TYPE_NAME[] = "mir_msgs/msg/Encoders";

// Define type names, field names, and default values
static char mir_msgs__msg__Encoders__FIELD_NAME__time_delta[] = "time_delta";
static char mir_msgs__msg__Encoders__FIELD_NAME__left_wheel[] = "left_wheel";
static char mir_msgs__msg__Encoders__FIELD_NAME__right_wheel[] = "right_wheel";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Encoders__FIELDS[] = {
  {
    {mir_msgs__msg__Encoders__FIELD_NAME__time_delta, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Encoders__FIELD_NAME__left_wheel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Encoders__FIELD_NAME__right_wheel, 11, 11},
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
mir_msgs__msg__Encoders__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Encoders__TYPE_NAME, 21, 21},
      {mir_msgs__msg__Encoders__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 time_delta # Time since last encoder update.\n"
  "int32 left_wheel  # Encoder counts (absolute or relative)\n"
  "int32 right_wheel # Encoder counts (absolute or relative)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Encoders__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Encoders__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Encoders__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Encoders__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
