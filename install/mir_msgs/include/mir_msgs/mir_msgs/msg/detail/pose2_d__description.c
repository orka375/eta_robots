// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/pose2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Pose2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x0d, 0x98, 0x06, 0xb1, 0x49, 0xad, 0xce,
      0x22, 0x44, 0x9a, 0x83, 0xc4, 0x2b, 0xbe, 0x3b,
      0x68, 0x89, 0xbd, 0x78, 0x89, 0xe3, 0x8a, 0x61,
      0xac, 0x12, 0xc4, 0x18, 0x59, 0x39, 0x2e, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Pose2D__TYPE_NAME[] = "mir_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char mir_msgs__msg__Pose2D__FIELD_NAME__x[] = "x";
static char mir_msgs__msg__Pose2D__FIELD_NAME__y[] = "y";
static char mir_msgs__msg__Pose2D__FIELD_NAME__orientation[] = "orientation";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Pose2D__FIELDS[] = {
  {
    {mir_msgs__msg__Pose2D__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Pose2D__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Pose2D__FIELD_NAME__orientation, 11, 11},
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
mir_msgs__msg__Pose2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Pose2D__TYPE_NAME, 19, 19},
      {mir_msgs__msg__Pose2D__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 orientation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Pose2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Pose2D__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Pose2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Pose2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
