// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/MissionCtrlCommand.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/mission_ctrl_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__MissionCtrlCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x91, 0xb3, 0xcf, 0x7f, 0xb7, 0x24, 0xbf,
      0xa7, 0x95, 0xd9, 0xc4, 0x7d, 0x1d, 0x29, 0x92,
      0x1b, 0x68, 0x7e, 0x50, 0xee, 0x79, 0xd0, 0x49,
      0x16, 0x6b, 0x16, 0x70, 0x09, 0x71, 0xf8, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__MissionCtrlCommand__TYPE_NAME[] = "mir_msgs/msg/MissionCtrlCommand";

// Define type names, field names, and default values
static char mir_msgs__msg__MissionCtrlCommand__FIELD_NAME__description[] = "description";
static char mir_msgs__msg__MissionCtrlCommand__FIELD_NAME__cmd[] = "cmd";
static char mir_msgs__msg__MissionCtrlCommand__FIELD_NAME__mission_id[] = "mission_id";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__MissionCtrlCommand__FIELDS[] = {
  {
    {mir_msgs__msg__MissionCtrlCommand__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__MissionCtrlCommand__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__MissionCtrlCommand__FIELD_NAME__mission_id, 10, 10},
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
mir_msgs__msg__MissionCtrlCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__MissionCtrlCommand__TYPE_NAME, 31, 31},
      {mir_msgs__msg__MissionCtrlCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 CMD_GET_STATUS = 0\n"
  "uint8 CMD_WAIT_POS_LOCK = 1\n"
  "uint8 CMD_WAIT_AREA_LOCK = 2\n"
  "uint8 CMD_CONTINUE = 3\n"
  "uint8 CMD_LOAD_MISSION = 4\n"
  "\n"
  "string description\n"
  "int32 cmd\n"
  "int32 mission_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__MissionCtrlCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__MissionCtrlCommand__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__MissionCtrlCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__MissionCtrlCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
