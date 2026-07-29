// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/PalletLifterStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/pallet_lifter_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__PalletLifterStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x4e, 0xa0, 0x25, 0x3d, 0x20, 0x4b, 0xba,
      0x76, 0xe3, 0xa4, 0xf9, 0x94, 0x9f, 0xaa, 0x38,
      0x04, 0xd6, 0x54, 0xd4, 0x01, 0x1a, 0xba, 0x5a,
      0x5a, 0xc5, 0xd6, 0x9a, 0x5e, 0xa3, 0x5f, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__PalletLifterStatus__TYPE_NAME[] = "mir_msgs/msg/PalletLifterStatus";

// Define type names, field names, and default values
static char mir_msgs__msg__PalletLifterStatus__FIELD_NAME__is_enabled[] = "is_enabled";
static char mir_msgs__msg__PalletLifterStatus__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__PalletLifterStatus__FIELDS[] = {
  {
    {mir_msgs__msg__PalletLifterStatus__FIELD_NAME__is_enabled, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PalletLifterStatus__FIELD_NAME__state, 5, 5},
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
mir_msgs__msg__PalletLifterStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__PalletLifterStatus__TYPE_NAME, 31, 31},
      {mir_msgs__msg__PalletLifterStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 PALLET_LIFT_STATE_DISABLED = 0\n"
  "uint8 PALLET_LIFT_STATE_MOVING = 1\n"
  "uint8 PALLET_LIFT_STATE_DOWN = 2\n"
  "uint8 PALLET_LIFT_STATE_UP = 3\n"
  "\n"
  "bool is_enabled\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__PalletLifterStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__PalletLifterStatus__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 165, 165},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__PalletLifterStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__PalletLifterStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
