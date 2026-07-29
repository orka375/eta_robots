// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/ProgramInformation.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/program_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__ProgramInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0xdd, 0xd3, 0x44, 0xac, 0xdd, 0xc2, 0x1c,
      0xb5, 0xeb, 0xe4, 0x39, 0x50, 0x84, 0xe4, 0x88,
      0xff, 0xb7, 0x0c, 0x32, 0xa6, 0xc7, 0x6e, 0xef,
      0x07, 0x23, 0x26, 0xb0, 0x34, 0x0f, 0x94, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__ProgramInformation__TYPE_NAME[] = "ur_dashboard_msgs/msg/ProgramInformation";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__name[] = "name";
static char ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__description[] = "description";
static char ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__created_date[] = "created_date";
static char ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__last_saved_date[] = "last_saved_date";
static char ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__last_modified_date[] = "last_modified_date";
static char ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__program_state[] = "program_state";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__ProgramInformation__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__created_date, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__last_saved_date, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__last_modified_date, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramInformation__FIELD_NAME__program_state, 13, 13},
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
ur_dashboard_msgs__msg__ProgramInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__ProgramInformation__TYPE_NAME, 40, 40},
      {ur_dashboard_msgs__msg__ProgramInformation__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string PROGRAM_STATE_DRAFT = \"DRAFT\"\n"
  "string PROGRAM_STATE_FINAL = \"FINAL\"\n"
  "\n"
  "string name\n"
  "string description\n"
  "uint64 created_date\n"
  "uint64 last_saved_date\n"
  "uint64 last_modified_date\n"
  "string program_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__ProgramInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__ProgramInformation__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 196, 196},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__ProgramInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__ProgramInformation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
