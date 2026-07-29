// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Twist2D.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/twist2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Twist2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0xa5, 0x11, 0x7f, 0x3e, 0x20, 0xcd, 0x50,
      0xc9, 0xc2, 0xe0, 0xad, 0x34, 0xc4, 0x49, 0x61,
      0xde, 0x8a, 0x82, 0xfa, 0x54, 0x54, 0x6a, 0x1b,
      0xa9, 0x6a, 0xc4, 0x02, 0xe4, 0x0f, 0x78, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Twist2D__TYPE_NAME[] = "mir_msgs/msg/Twist2D";

// Define type names, field names, and default values
static char mir_msgs__msg__Twist2D__FIELD_NAME__linear[] = "linear";
static char mir_msgs__msg__Twist2D__FIELD_NAME__angular[] = "angular";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Twist2D__FIELDS[] = {
  {
    {mir_msgs__msg__Twist2D__FIELD_NAME__linear, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Twist2D__FIELD_NAME__angular, 7, 7},
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
mir_msgs__msg__Twist2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Twist2D__TYPE_NAME, 20, 20},
      {mir_msgs__msg__Twist2D__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 linear\n"
  "float32 angular";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Twist2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Twist2D__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Twist2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Twist2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
