// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/UserRole.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/user_role__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__UserRole__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x23, 0x23, 0xbc, 0xf3, 0xc0, 0xb5, 0xcc,
      0xae, 0x2e, 0x88, 0xe0, 0x36, 0xf7, 0xb5, 0x5d,
      0x12, 0x49, 0xa0, 0xa7, 0x8e, 0xb7, 0xdd, 0x23,
      0xc5, 0xaa, 0xc1, 0xee, 0x01, 0x33, 0x4d, 0x40,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__UserRole__TYPE_NAME[] = "ur_dashboard_msgs/msg/UserRole";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__UserRole__FIELD_NAME__role[] = "role";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__UserRole__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__UserRole__FIELD_NAME__role, 4, 4},
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
ur_dashboard_msgs__msg__UserRole__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__UserRole__TYPE_NAME, 30, 30},
      {ur_dashboard_msgs__msg__UserRole__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string PROGRAMMER = PROGRAMMER\n"
  "string OPERATOR = OPERATOR\n"
  "string NONE = NONE\n"
  "string LOCKED = LOCKED\n"
  "string RESTRICTED = RESTRICTED\n"
  "\n"
  "string role";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__UserRole__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__UserRole__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 144, 144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__UserRole__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__UserRole__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
