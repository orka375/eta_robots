// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/ServiceResponseHeader.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/service_response_header__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__ServiceResponseHeader__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x2d, 0xeb, 0x25, 0x8d, 0x03, 0x4c, 0x28,
      0xa8, 0xac, 0x60, 0x78, 0x9e, 0x48, 0x47, 0xef,
      0xd8, 0x0a, 0xbf, 0x19, 0xe6, 0x17, 0xc8, 0x21,
      0x1f, 0x9f, 0x24, 0xda, 0xcb, 0x48, 0xa0, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__ServiceResponseHeader__TYPE_NAME[] = "mir_msgs/msg/ServiceResponseHeader";

// Define type names, field names, and default values
static char mir_msgs__msg__ServiceResponseHeader__FIELD_NAME__success[] = "success";
static char mir_msgs__msg__ServiceResponseHeader__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__ServiceResponseHeader__FIELDS[] = {
  {
    {mir_msgs__msg__ServiceResponseHeader__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ServiceResponseHeader__FIELD_NAME__error, 5, 5},
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
mir_msgs__msg__ServiceResponseHeader__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__ServiceResponseHeader__TYPE_NAME, 34, 34},
      {mir_msgs__msg__ServiceResponseHeader__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool success\n"
  "string error";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__ServiceResponseHeader__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__ServiceResponseHeader__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__ServiceResponseHeader__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__ServiceResponseHeader__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
