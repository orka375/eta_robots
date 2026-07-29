// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/ChargingState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/charging_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__ChargingState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x6a, 0x7e, 0xcb, 0x88, 0x52, 0x15, 0x45,
      0x6a, 0x46, 0xa1, 0xba, 0x18, 0x85, 0xbc, 0x59,
      0x05, 0xbc, 0xb8, 0x73, 0x96, 0xc9, 0x15, 0x12,
      0xa3, 0x96, 0x87, 0xb3, 0xc3, 0xa8, 0x8a, 0xa4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__ChargingState__TYPE_NAME[] = "mir_msgs/msg/ChargingState";

// Define type names, field names, and default values
static char mir_msgs__msg__ChargingState__FIELD_NAME__charging_relay[] = "charging_relay";
static char mir_msgs__msg__ChargingState__FIELD_NAME__charging_current[] = "charging_current";
static char mir_msgs__msg__ChargingState__FIELD_NAME__charging_current_raw[] = "charging_current_raw";
static char mir_msgs__msg__ChargingState__FIELD_NAME__last_time_current[] = "last_time_current";
static char mir_msgs__msg__ChargingState__FIELD_NAME__charging_voltage[] = "charging_voltage";
static char mir_msgs__msg__ChargingState__FIELD_NAME__charging_voltage_raw[] = "charging_voltage_raw";
static char mir_msgs__msg__ChargingState__FIELD_NAME__is_voltage_low[] = "is_voltage_low";
static char mir_msgs__msg__ChargingState__FIELD_NAME__last_time_voltage[] = "last_time_voltage";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__ChargingState__FIELDS[] = {
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__charging_relay, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__charging_current, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__charging_current_raw, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__last_time_current, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__charging_voltage, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__charging_voltage_raw, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__is_voltage_low, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ChargingState__FIELD_NAME__last_time_voltage, 17, 17},
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
mir_msgs__msg__ChargingState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__ChargingState__TYPE_NAME, 26, 26},
      {mir_msgs__msg__ChargingState__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool charging_relay\n"
  "float64 charging_current\n"
  "uint32 charging_current_raw\n"
  "float64 last_time_current\n"
  "\n"
  "float64 charging_voltage\n"
  "uint32 charging_voltage_raw\n"
  "bool is_voltage_low\n"
  "float64 last_time_voltage";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__ChargingState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__ChargingState__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 199, 199},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__ChargingState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__ChargingState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
