// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/safety_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__SafetyStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x5c, 0xaf, 0x14, 0x1b, 0x54, 0xcd, 0xe6,
      0x2b, 0x4c, 0x48, 0xc0, 0xff, 0x8a, 0x84, 0x61,
      0x83, 0xe2, 0xa3, 0x7a, 0x1a, 0xe3, 0x83, 0xc2,
      0x3f, 0xac, 0x70, 0xfc, 0xc7, 0xce, 0xf9, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__SafetyStatus__TYPE_NAME[] = "ur_dashboard_msgs/msg/SafetyStatus";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__SafetyStatus__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__SafetyStatus__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__SafetyStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__msg__SafetyStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__SafetyStatus__TYPE_NAME, 34, 34},
      {ur_dashboard_msgs__msg__SafetyStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 NORMAL=1\n"
  "int8 REDUCED=2\n"
  "int8 PROTECTIVE_STOP=3\n"
  "int8 RECOVERY=4\n"
  "int8 SAFEGUARD_STOP=5\n"
  "int8 SYSTEM_EMERGENCY_STOP=6\n"
  "int8 ROBOT_EMERGENCY_STOP=7\n"
  "int8 VIOLATION=8\n"
  "int8 FAULT=9\n"
  "int8 VALIDATE_JOINT_ID=10\n"
  "int8 UNDEFINED_SAFETY_MODE=11\n"
  "int8 AUTOMATIC_MODE_SAFEGUARD_STOP=12\n"
  "int8 SYSTEM_THREE_POSITION_ENABLING_STOP=13\n"
  "int8 TP_THREE_POSITION_ENABLING_STOP=14\n"
  "int8 IMMI_EMERGENCY_STOP=15\n"
  "int8 IMMI_SAFEGUARD_STOP=16\n"
  "int8 PROFISAFE_WAITING_FOR_PARAMETERS=17\n"
  "int8 PROFISAFE_AUTOMATIC_MODE_SAFEGUARD_STOP=18\n"
  "int8 PROFISAFE_SAFEGUARD_STOP=19\n"
  "int8 PROFISAFE_EMERGENCY_STOP=20\n"
  "int8 SAFETY_API_SAFEGUARD_STOP=22\n"
  "int8 IO_PLANE_STOP=23\n"
  "\n"
  "int8 status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__SafetyStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__SafetyStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 635, 635},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__SafetyStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__SafetyStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
