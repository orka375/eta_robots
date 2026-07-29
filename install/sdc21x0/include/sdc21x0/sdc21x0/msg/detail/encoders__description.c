// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdc21x0:msg/Encoders.idl
// generated code does not contain a copyright notice

#include "sdc21x0/msg/detail/encoders__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_type_hash_t *
sdc21x0__msg__Encoders__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0xf6, 0xb5, 0x07, 0x70, 0xcf, 0x51, 0x40,
      0xb8, 0x86, 0xa2, 0xca, 0xc5, 0x1d, 0x51, 0x18,
      0x92, 0xc6, 0x0a, 0x35, 0x79, 0x84, 0x97, 0x0c,
      0x1d, 0x38, 0xf8, 0x10, 0x12, 0x39, 0x79, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sdc21x0__msg__Encoders__TYPE_NAME[] = "sdc21x0/msg/Encoders";

// Define type names, field names, and default values
static char sdc21x0__msg__Encoders__FIELD_NAME__time_delta[] = "time_delta";
static char sdc21x0__msg__Encoders__FIELD_NAME__left_wheel[] = "left_wheel";
static char sdc21x0__msg__Encoders__FIELD_NAME__right_wheel[] = "right_wheel";

static rosidl_runtime_c__type_description__Field sdc21x0__msg__Encoders__FIELDS[] = {
  {
    {sdc21x0__msg__Encoders__FIELD_NAME__time_delta, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdc21x0__msg__Encoders__FIELD_NAME__left_wheel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdc21x0__msg__Encoders__FIELD_NAME__right_wheel, 11, 11},
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
sdc21x0__msg__Encoders__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdc21x0__msg__Encoders__TYPE_NAME, 20, 20},
      {sdc21x0__msg__Encoders__FIELDS, 3, 3},
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
sdc21x0__msg__Encoders__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdc21x0__msg__Encoders__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdc21x0__msg__Encoders__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdc21x0__msg__Encoders__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
