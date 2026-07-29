// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/VersionInformation.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/version_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__VersionInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x91, 0x0e, 0xf4, 0x9f, 0x31, 0x08, 0xfa, 0x14,
      0x57, 0x6f, 0xf2, 0x48, 0x05, 0x1d, 0x82, 0xb7,
      0xfe, 0xee, 0xbf, 0x2f, 0x04, 0x7c, 0xaf, 0xa4,
      0x72, 0xef, 0xd7, 0x84, 0xd8, 0x97, 0x44, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__VersionInformation__TYPE_NAME[] = "ur_dashboard_msgs/msg/VersionInformation";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__major[] = "major";
static char ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__minor[] = "minor";
static char ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__bugfix[] = "bugfix";
static char ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__build[] = "build";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__VersionInformation__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__major, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__minor, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__bugfix, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__VersionInformation__FIELD_NAME__build, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__msg__VersionInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__VersionInformation__TYPE_NAME, 40, 40},
      {ur_dashboard_msgs__msg__VersionInformation__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 major\n"
  "uint32 minor\n"
  "uint32 bugfix\n"
  "uint32 build";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__VersionInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__VersionInformation__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__VersionInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__VersionInformation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
