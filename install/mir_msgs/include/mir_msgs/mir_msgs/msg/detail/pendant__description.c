// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Pendant.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/pendant__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Pendant__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xc3, 0x86, 0xe4, 0xa1, 0xf7, 0xe5, 0xaa,
      0x5f, 0x1f, 0x37, 0x14, 0x61, 0xa9, 0x19, 0xa2,
      0x73, 0xb6, 0x2a, 0x21, 0x0e, 0x5b, 0x94, 0x21,
      0x29, 0x1f, 0x96, 0x98, 0x1f, 0xe8, 0xa8, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Pendant__TYPE_NAME[] = "mir_msgs/msg/Pendant";

// Define type names, field names, and default values
static char mir_msgs__msg__Pendant__FIELD_NAME__x[] = "x";
static char mir_msgs__msg__Pendant__FIELD_NAME__y[] = "y";
static char mir_msgs__msg__Pendant__FIELD_NAME__gpio_bits[] = "gpio_bits";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Pendant__FIELDS[] = {
  {
    {mir_msgs__msg__Pendant__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Pendant__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Pendant__FIELD_NAME__gpio_bits, 9, 9},
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
mir_msgs__msg__Pendant__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Pendant__TYPE_NAME, 20, 20},
      {mir_msgs__msg__Pendant__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32   x\n"
  "float32   y\n"
  "uint8     gpio_bits";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Pendant__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Pendant__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Pendant__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Pendant__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
