// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/safety_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__SafetyStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x6c, 0x79, 0xa6, 0x38, 0xb0, 0x4c, 0xd3,
      0xb2, 0x26, 0x1c, 0x04, 0xcb, 0x7c, 0x07, 0xde,
      0xd9, 0xe1, 0x3b, 0x2e, 0xa9, 0x57, 0x4a, 0x93,
      0x60, 0x70, 0x7f, 0x6d, 0x92, 0xd1, 0xd2, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__SafetyStatus__TYPE_NAME[] = "mir_msgs/msg/SafetyStatus";

// Define type names, field names, and default values
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_connected[] = "is_connected";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_firmware_ok[] = "is_firmware_ok";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__firmware_version[] = "firmware_version";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__in_protective_stop[] = "in_protective_stop";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__in_emergency_stop[] = "in_emergency_stop";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__sto_feedback[] = "sto_feedback";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_restart_required[] = "is_restart_required";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_safety_muted[] = "is_safety_muted";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__max_lin_speed[] = "max_lin_speed";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__max_rot_speed[] = "max_rot_speed";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__mute_mask[] = "mute_mask";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__partial_mute_mask[] = "partial_mute_mask";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_limited_speed_active[] = "is_limited_speed_active";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_lifter_down[] = "is_lifter_down";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__in_sleep_mode[] = "in_sleep_mode";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__in_manual_mode[] = "in_manual_mode";
static char mir_msgs__msg__SafetyStatus__FIELD_NAME__is_manual_mode_restart_required[] = "is_manual_mode_restart_required";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__SafetyStatus__FIELDS[] = {
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_connected, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_firmware_ok, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__in_protective_stop, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__in_emergency_stop, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__sto_feedback, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_restart_required, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_safety_muted, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__max_lin_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__max_rot_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__mute_mask, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__partial_mute_mask, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_limited_speed_active, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_lifter_down, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__in_sleep_mode, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__in_manual_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SafetyStatus__FIELD_NAME__is_manual_mode_restart_required, 31, 31},
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
mir_msgs__msg__SafetyStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__SafetyStatus__TYPE_NAME, 25, 25},
      {mir_msgs__msg__SafetyStatus__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_connected\n"
  "\n"
  "bool is_firmware_ok\n"
  "int32 firmware_version\n"
  "\n"
  "bool in_protective_stop\n"
  "bool in_emergency_stop\n"
  "bool sto_feedback\n"
  "bool is_restart_required\n"
  "\n"
  "bool is_safety_muted\n"
  "float64 max_lin_speed\n"
  "float64 max_rot_speed\n"
  "\n"
  "# Defines for filling out the mute_mask\n"
  "uint8 MUTE_FRONT_RIGHT  = 1\n"
  "uint8 MUTE_FRONT_CENTER = 2\n"
  "uint8 MUTE_FRONT_LEFT   = 4\n"
  "uint8 MUTE_LEFT_CENTER  = 8\n"
  "uint8 MUTE_REAR_LEFT    = 16\n"
  "uint8 MUTE_REAR_CENTER  = 32\n"
  "uint8 MUTE_REAR_RIGHT   = 64\n"
  "uint8 MUTE_RIGHT_CENTER = 128\n"
  "\n"
  "uint8 MUTE_FRONT        = 7\n"
  "uint8 MUTE_LEFT         = 28\n"
  "uint8 MUTE_REAR         = 112\n"
  "uint8 MUTE_RIGHT        = 193\n"
  "uint8 MUTE_SIDES        = 221\n"
  "uint8 MUTE_ALL          = 255\n"
  "\n"
  "uint8 mute_mask\n"
  "uint8 partial_mute_mask\n"
  "\n"
  "bool is_limited_speed_active\n"
  "bool is_lifter_down\n"
  "bool in_sleep_mode\n"
  "\n"
  "bool in_manual_mode\n"
  "bool is_manual_mode_restart_required";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__SafetyStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__SafetyStatus__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 835, 835},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__SafetyStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__SafetyStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
