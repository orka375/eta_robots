// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/PrecisionDockingStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/precision_docking_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__PrecisionDockingStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x9c, 0xee, 0xdf, 0xc1, 0xb8, 0xe1, 0xac,
      0x3e, 0xd3, 0x29, 0x57, 0xdd, 0xca, 0x07, 0x7d,
      0x7f, 0x68, 0xe0, 0x36, 0xe3, 0x81, 0xa4, 0xb1,
      0x76, 0xb4, 0x6d, 0xce, 0x2f, 0x51, 0xf6, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__PrecisionDockingStatus__TYPE_NAME[] = "mir_msgs/msg/PrecisionDockingStatus";

// Define type names, field names, and default values
static char mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__connected[] = "connected";
static char mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__motor_forward[] = "motor_forward";
static char mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__motor_back[] = "motor_back";
static char mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__left_docking[] = "left_docking";
static char mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__right_docking[] = "right_docking";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__PrecisionDockingStatus__FIELDS[] = {
  {
    {mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__connected, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__motor_forward, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__motor_back, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__left_docking, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PrecisionDockingStatus__FIELD_NAME__right_docking, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__PrecisionDockingStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__PrecisionDockingStatus__TYPE_NAME, 35, 35},
      {mir_msgs__msg__PrecisionDockingStatus__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool connected\n"
  "bool motor_forward\n"
  "bool motor_back\n"
  "bool left_docking\n"
  "bool right_docking";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__PrecisionDockingStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__PrecisionDockingStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__PrecisionDockingStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__PrecisionDockingStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
