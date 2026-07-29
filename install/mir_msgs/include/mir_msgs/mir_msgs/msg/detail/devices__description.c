// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Devices.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/devices__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Devices__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x7d, 0xa7, 0xbf, 0x75, 0x0f, 0xb0, 0x6f,
      0xfc, 0xbb, 0x99, 0x13, 0x3e, 0x5e, 0xac, 0xf2,
      0xde, 0xe2, 0x94, 0x3b, 0x8f, 0x1c, 0xdd, 0x68,
      0xc2, 0x32, 0x7e, 0x31, 0xaa, 0x29, 0x4b, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mir_msgs/msg/detail/device__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mir_msgs__msg__Device__EXPECTED_HASH = {1, {
    0xc4, 0x9f, 0x2d, 0x4b, 0xcf, 0xeb, 0x65, 0x08,
    0xeb, 0xb5, 0xc7, 0x95, 0x4d, 0xc6, 0x5c, 0x3b,
    0x6d, 0x07, 0x97, 0xf8, 0xf3, 0x84, 0xa7, 0x9e,
    0x1d, 0x9f, 0x9b, 0x6c, 0x8b, 0xa6, 0xaa, 0xc8,
  }};
#endif

static char mir_msgs__msg__Devices__TYPE_NAME[] = "mir_msgs/msg/Devices";
static char mir_msgs__msg__Device__TYPE_NAME[] = "mir_msgs/msg/Device";

// Define type names, field names, and default values
static char mir_msgs__msg__Devices__FIELD_NAME__devices[] = "devices";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Devices__FIELDS[] = {
  {
    {mir_msgs__msg__Devices__FIELD_NAME__devices, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mir_msgs__msg__Device__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__Devices__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mir_msgs__msg__Device__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__Devices__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Devices__TYPE_NAME, 20, 20},
      {mir_msgs__msg__Devices__FIELDS, 1, 1},
    },
    {mir_msgs__msg__Devices__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mir_msgs__msg__Device__EXPECTED_HASH, mir_msgs__msg__Device__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mir_msgs__msg__Device__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "mir_msgs/Device[] devices";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Devices__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Devices__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Devices__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Devices__get_individual_type_description_source(NULL),
    sources[1] = *mir_msgs__msg__Device__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
