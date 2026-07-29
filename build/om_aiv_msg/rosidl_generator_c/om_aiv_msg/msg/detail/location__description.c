// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from om_aiv_msg:msg/Location.idl
// generated code does not contain a copyright notice

#include "om_aiv_msg/msg/detail/location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
const rosidl_type_hash_t *
om_aiv_msg__msg__Location__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x92, 0x38, 0x6c, 0xe0, 0xca, 0x0c, 0x91,
      0x95, 0xf0, 0x52, 0xdc, 0x0c, 0x7e, 0xa6, 0x98,
      0x38, 0x97, 0x1b, 0xae, 0xaf, 0x9a, 0xee, 0x28,
      0x11, 0xec, 0x94, 0xfb, 0x54, 0x99, 0xb7, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char om_aiv_msg__msg__Location__TYPE_NAME[] = "om_aiv_msg/msg/Location";

// Define type names, field names, and default values
static char om_aiv_msg__msg__Location__FIELD_NAME__x[] = "x";
static char om_aiv_msg__msg__Location__FIELD_NAME__y[] = "y";
static char om_aiv_msg__msg__Location__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field om_aiv_msg__msg__Location__FIELDS[] = {
  {
    {om_aiv_msg__msg__Location__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Location__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Location__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
om_aiv_msg__msg__Location__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {om_aiv_msg__msg__Location__TYPE_NAME, 23, 23},
      {om_aiv_msg__msg__Location__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This contains the position of a point in free space\n"
  "float64 x\n"
  "float64 y\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
om_aiv_msg__msg__Location__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {om_aiv_msg__msg__Location__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 88, 88},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
om_aiv_msg__msg__Location__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *om_aiv_msg__msg__Location__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
