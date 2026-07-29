// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/BatteryCurrents.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/battery_currents__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__BatteryCurrents__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x5f, 0xe2, 0xa9, 0x89, 0x55, 0x02, 0xa4,
      0xe6, 0xeb, 0x93, 0xef, 0x0e, 0xc2, 0x11, 0xd3,
      0xa7, 0xb0, 0xf5, 0x11, 0x09, 0x84, 0x19, 0xb0,
      0x24, 0x4b, 0xde, 0x11, 0xf0, 0x13, 0x3e, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__BatteryCurrents__TYPE_NAME[] = "mir_msgs/msg/BatteryCurrents";

// Define type names, field names, and default values
static char mir_msgs__msg__BatteryCurrents__FIELD_NAME__battery1_current[] = "battery1_current";
static char mir_msgs__msg__BatteryCurrents__FIELD_NAME__battery2_current[] = "battery2_current";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__BatteryCurrents__FIELDS[] = {
  {
    {mir_msgs__msg__BatteryCurrents__FIELD_NAME__battery1_current, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__BatteryCurrents__FIELD_NAME__battery2_current, 16, 16},
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
mir_msgs__msg__BatteryCurrents__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__BatteryCurrents__TYPE_NAME, 28, 28},
      {mir_msgs__msg__BatteryCurrents__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 battery1_current\n"
  "float64 battery2_current";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__BatteryCurrents__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__BatteryCurrents__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__BatteryCurrents__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__BatteryCurrents__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
