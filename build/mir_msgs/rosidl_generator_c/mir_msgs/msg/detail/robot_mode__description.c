// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/robot_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__RobotMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x12, 0x70, 0x62, 0x92, 0x47, 0x4f, 0xb8,
      0x82, 0xc0, 0xd2, 0x96, 0x83, 0x6a, 0x0a, 0x72,
      0x6b, 0x44, 0x41, 0x36, 0x31, 0xe9, 0xd0, 0xa7,
      0x13, 0x06, 0xcf, 0x03, 0xe7, 0xf2, 0xf1, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__RobotMode__TYPE_NAME[] = "mir_msgs/msg/RobotMode";

// Define type names, field names, and default values
static char mir_msgs__msg__RobotMode__FIELD_NAME__robot_mode[] = "robot_mode";
static char mir_msgs__msg__RobotMode__FIELD_NAME__robot_mode_string[] = "robot_mode_string";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__RobotMode__FIELDS[] = {
  {
    {mir_msgs__msg__RobotMode__FIELD_NAME__robot_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotMode__FIELD_NAME__robot_mode_string, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__RobotMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__RobotMode__TYPE_NAME, 22, 22},
      {mir_msgs__msg__RobotMode__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The robot operates in different mode\n"
  "uint8 ROBOT_MODE_NONE = 0\\t\\t# start mode\n"
  "uint8 ROBOT_MODE_MAPPING = 3\\t\\t# in mapping a new map is made\n"
  "uint8 ROBOT_MODE_MAPPING_FINALIZING = 4\\t\\t# in mapping the recorded map is being finalised\n"
  "uint8 ROBOT_MODE_MISSION = 7\\t\\t# primary mode when executing a mission (action list)\n"
  "uint8 ROBOT_MODE_CHANGING = 255\\t\\t# a transition mode - to say that a transition is in progress\n"
  "\n"
  "uint8 robot_mode\n"
  "string robot_mode_string";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__RobotMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__RobotMode__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 452, 452},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__RobotMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__RobotMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
