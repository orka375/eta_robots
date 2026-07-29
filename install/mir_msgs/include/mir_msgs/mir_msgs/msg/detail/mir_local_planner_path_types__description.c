// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/MirLocalPlannerPathTypes.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/mir_local_planner_path_types__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__MirLocalPlannerPathTypes__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x9f, 0xda, 0xfb, 0x0b, 0x17, 0x63, 0x9d,
      0x90, 0xf6, 0x24, 0x1a, 0x43, 0x44, 0x64, 0x19,
      0x81, 0x03, 0x55, 0xc5, 0x9f, 0x41, 0xc6, 0x3e,
      0x8c, 0xd7, 0xa3, 0xde, 0xc7, 0x84, 0xe6, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__MirLocalPlannerPathTypes__TYPE_NAME[] = "mir_msgs/msg/MirLocalPlannerPathTypes";

// Define type names, field names, and default values
static char mir_msgs__msg__MirLocalPlannerPathTypes__FIELD_NAME__path_type[] = "path_type";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__MirLocalPlannerPathTypes__FIELDS[] = {
  {
    {mir_msgs__msg__MirLocalPlannerPathTypes__FIELD_NAME__path_type, 9, 9},
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
mir_msgs__msg__MirLocalPlannerPathTypes__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__MirLocalPlannerPathTypes__TYPE_NAME, 37, 37},
      {mir_msgs__msg__MirLocalPlannerPathTypes__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 REVERSE_TROLLEY_STANDARD=1\n"
  "uint8 REVERSE_TROLLEY_FAST=2\n"
  "uint8 REVERSE_TROLLEY_COMPACT=3\n"
  "\n"
  "\n"
  "uint8 path_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__MirLocalPlannerPathTypes__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__MirLocalPlannerPathTypes__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 112, 112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__MirLocalPlannerPathTypes__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__MirLocalPlannerPathTypes__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
