// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#include "sdc21x0/msg/detail/motor_currents__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_type_hash_t *
sdc21x0__msg__MotorCurrents__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x81, 0x1a, 0x47, 0x9a, 0x63, 0xc0, 0x96,
      0x33, 0x3d, 0x93, 0xd4, 0x84, 0x3d, 0xa7, 0x2f,
      0x33, 0x8c, 0x6a, 0x81, 0xdf, 0x49, 0xc6, 0x64,
      0x99, 0xe2, 0x2e, 0xec, 0x9e, 0x75, 0xcb, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sdc21x0__msg__MotorCurrents__TYPE_NAME[] = "sdc21x0/msg/MotorCurrents";

// Define type names, field names, and default values
static char sdc21x0__msg__MotorCurrents__FIELD_NAME__left_motor[] = "left_motor";
static char sdc21x0__msg__MotorCurrents__FIELD_NAME__right_motor[] = "right_motor";

static rosidl_runtime_c__type_description__Field sdc21x0__msg__MotorCurrents__FIELDS[] = {
  {
    {sdc21x0__msg__MotorCurrents__FIELD_NAME__left_motor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdc21x0__msg__MotorCurrents__FIELD_NAME__right_motor, 11, 11},
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
sdc21x0__msg__MotorCurrents__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdc21x0__msg__MotorCurrents__TYPE_NAME, 25, 25},
      {sdc21x0__msg__MotorCurrents__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 left_motor\n"
  "float32 right_motor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdc21x0__msg__MotorCurrents__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdc21x0__msg__MotorCurrents__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdc21x0__msg__MotorCurrents__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdc21x0__msg__MotorCurrents__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
