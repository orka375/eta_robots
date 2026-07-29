// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/i_os__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__IOs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0xfc, 0x7a, 0x38, 0xa5, 0x22, 0xbd, 0xd0,
      0x56, 0x51, 0x64, 0x9b, 0xa5, 0xf8, 0xf1, 0x99,
      0x02, 0xb0, 0xbc, 0xd9, 0x93, 0xa1, 0xfb, 0xbd,
      0x7a, 0x85, 0x08, 0xc6, 0x7c, 0x5f, 0x0d, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__IOs__TYPE_NAME[] = "mir_msgs/msg/IOs";

// Define type names, field names, and default values
static char mir_msgs__msg__IOs__FIELD_NAME__module_guid[] = "module_guid";
static char mir_msgs__msg__IOs__FIELD_NAME__connected[] = "connected";
static char mir_msgs__msg__IOs__FIELD_NAME__status[] = "status";
static char mir_msgs__msg__IOs__FIELD_NAME__num_inputs[] = "num_inputs";
static char mir_msgs__msg__IOs__FIELD_NAME__input_state[] = "input_state";
static char mir_msgs__msg__IOs__FIELD_NAME__num_outputs[] = "num_outputs";
static char mir_msgs__msg__IOs__FIELD_NAME__output_state[] = "output_state";
static char mir_msgs__msg__IOs__FIELD_NAME__ip[] = "ip";
static char mir_msgs__msg__IOs__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__IOs__FIELDS[] = {
  {
    {mir_msgs__msg__IOs__FIELD_NAME__module_guid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__connected, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__num_inputs, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__input_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__num_outputs, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__output_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__ip, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__IOs__FIELD_NAME__error, 5, 5},
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
mir_msgs__msg__IOs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__IOs__TYPE_NAME, 16, 16},
      {mir_msgs__msg__IOs__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string module_guid\n"
  "bool connected\n"
  "uint8 DONE=0\n"
  "uint8 STARTED=1\n"
  "uint8 ERROR=3\n"
  "uint8 status\n"
  "int8 num_inputs\n"
  "bool[] input_state\n"
  "int8 num_outputs\n"
  "bool[] output_state\n"
  "string ip\n"
  "string error";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__IOs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__IOs__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 185, 185},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__IOs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__IOs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
