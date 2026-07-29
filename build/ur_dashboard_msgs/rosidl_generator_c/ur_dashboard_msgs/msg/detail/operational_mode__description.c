// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/OperationalMode.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/operational_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__OperationalMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0xef, 0x19, 0x0f, 0xf9, 0xd8, 0xaa, 0x99,
      0xdf, 0x44, 0xa5, 0x61, 0xcf, 0x4e, 0x31, 0x2d,
      0x83, 0x59, 0x92, 0x72, 0xbf, 0x79, 0x79, 0xc2,
      0xaf, 0x0c, 0x53, 0xc8, 0xd1, 0x85, 0x6a, 0x2f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__OperationalMode__TYPE_NAME[] = "ur_dashboard_msgs/msg/OperationalMode";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__OperationalMode__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__OperationalMode__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__OperationalMode__FIELD_NAME__mode, 4, 4},
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
ur_dashboard_msgs__msg__OperationalMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__OperationalMode__TYPE_NAME, 37, 37},
      {ur_dashboard_msgs__msg__OperationalMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string MANUAL = MANUAL\n"
  "string AUTOMATIC = AUTOMATIC\n"
  "\n"
  "string mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__OperationalMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__OperationalMode__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__OperationalMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__OperationalMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
