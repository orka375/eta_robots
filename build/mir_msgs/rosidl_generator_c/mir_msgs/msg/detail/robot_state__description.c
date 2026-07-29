// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/robot_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__RobotState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x55, 0xe8, 0x42, 0x8b, 0x52, 0x0b, 0x72,
      0xd4, 0x01, 0x13, 0x2d, 0xc5, 0xe3, 0xa0, 0x39,
      0x11, 0xea, 0x7a, 0xa2, 0x20, 0xae, 0x73, 0x3b,
      0x19, 0x2b, 0x78, 0x47, 0xc0, 0x3f, 0xdb, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__RobotState__TYPE_NAME[] = "mir_msgs/msg/RobotState";

// Define type names, field names, and default values
static char mir_msgs__msg__RobotState__FIELD_NAME__robot_state[] = "robot_state";
static char mir_msgs__msg__RobotState__FIELD_NAME__robot_state_string[] = "robot_state_string";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__RobotState__FIELDS[] = {
  {
    {mir_msgs__msg__RobotState__FIELD_NAME__robot_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotState__FIELD_NAME__robot_state_string, 18, 18},
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
mir_msgs__msg__RobotState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__RobotState__TYPE_NAME, 23, 23},
      {mir_msgs__msg__RobotState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The robot has to be in a predefined state\n"
  "uint8 ROBOT_STATE_NONE = 0\n"
  "uint8 ROBOT_STATE_STARTING = 1\n"
  "uint8 ROBOT_STATE_SHUTTINGDOWN = 2\n"
  "uint8 ROBOT_STATE_READY = 3\\t\\t# ready to execute\n"
  "uint8 ROBOT_STATE_PAUSE = 4\\t\\t# pause from executing\n"
  "uint8 ROBOT_STATE_EXECUTING = 5\\t\\t# when running in mission/taxa/bus\n"
  "uint8 ROBOT_STATE_ABORTED = 6\n"
  "uint8 ROBOT_STATE_COMPLETED = 7\\t\\t# done executing\n"
  "uint8 ROBOT_STATE_DOCKED = 8\\t\\t# in the dock and charging the batteries\n"
  "uint8 ROBOT_STATE_DOCKING = 9\n"
  "uint8 ROBOT_STATE_EMERGENCYSTOP = 10\\t# the robot has emg-stop activated\n"
  "uint8 ROBOT_STATE_MANUALCONTROL = 11\\t# a pause state, where the robot can move\n"
  "uint8 ROBOT_STATE_ERROR = 12\\t\\t# a general error state, requires a error handle\n"
  "\n"
  "uint8 robot_state\n"
  "string robot_state_string";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__RobotState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__RobotState__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 761, 761},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__RobotState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__RobotState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
