// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/MissionCtrlState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/mission_ctrl_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__MissionCtrlState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x19, 0x29, 0xcf, 0x3a, 0x9e, 0x9b, 0xf9,
      0x36, 0x3c, 0x1f, 0x09, 0x69, 0x98, 0x12, 0x15,
      0x56, 0x0b, 0xa9, 0x08, 0xae, 0x71, 0x66, 0xc8,
      0xc9, 0x03, 0x25, 0xf4, 0x54, 0xa1, 0xb6, 0x2a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__MissionCtrlState__TYPE_NAME[] = "mir_msgs/msg/MissionCtrlState";

// Define type names, field names, and default values
static char mir_msgs__msg__MissionCtrlState__FIELD_NAME__state[] = "state";
static char mir_msgs__msg__MissionCtrlState__FIELD_NAME__pos_id[] = "pos_id";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__MissionCtrlState__FIELDS[] = {
  {
    {mir_msgs__msg__MissionCtrlState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__MissionCtrlState__FIELD_NAME__pos_id, 6, 6},
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
mir_msgs__msg__MissionCtrlState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__MissionCtrlState__TYPE_NAME, 29, 29},
      {mir_msgs__msg__MissionCtrlState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 STATE_IDLE = 0\n"
  "uint8 STATE_WAIT_POS_LOCK = 1\n"
  "uint8 STATE_WAIT_AREA_LOCK = 2\n"
  "uint8 STATE_WAIT_MAP_TRANSITION = 10\n"
  "uint8 STATE_WAIT_LIFT_START_FLOOR = 11\n"
  "uint8 STATE_WAIT_LIFT_END_FLOOR = 12\n"
  "uint8 STATE_WAIT_LIFT_END_FLOOR_CONTINUE = 13\n"
  "\n"
  "\n"
  "int32 state\n"
  "int32 pos_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__MissionCtrlState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__MissionCtrlState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 268, 268},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__MissionCtrlState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__MissionCtrlState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
