// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/HookStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/hook_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__HookStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xc1, 0x75, 0x82, 0x14, 0x25, 0x5c, 0xba,
      0x04, 0x57, 0xc5, 0xe8, 0x1a, 0x3b, 0xb6, 0x8c,
      0x5f, 0xc2, 0xfc, 0x2e, 0x05, 0x06, 0x05, 0x55,
      0x54, 0xce, 0xc5, 0xbd, 0x7e, 0xdf, 0x59, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mir_msgs/msg/detail/trolley__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mir_msgs__msg__Trolley__EXPECTED_HASH = {1, {
    0xbf, 0x13, 0x11, 0x7c, 0x6e, 0xac, 0x00, 0xe9,
    0x26, 0x2b, 0x3c, 0x21, 0xbd, 0xd7, 0x0f, 0x37,
    0xe0, 0xf3, 0xcd, 0x87, 0x54, 0x41, 0x25, 0xa6,
    0xef, 0x7d, 0x05, 0x1c, 0x9a, 0x68, 0x67, 0x9a,
  }};
#endif

static char mir_msgs__msg__HookStatus__TYPE_NAME[] = "mir_msgs/msg/HookStatus";
static char mir_msgs__msg__Trolley__TYPE_NAME[] = "mir_msgs/msg/Trolley";

// Define type names, field names, and default values
static char mir_msgs__msg__HookStatus__FIELD_NAME__available[] = "available";
static char mir_msgs__msg__HookStatus__FIELD_NAME__length[] = "length";
static char mir_msgs__msg__HookStatus__FIELD_NAME__height[] = "height";
static char mir_msgs__msg__HookStatus__FIELD_NAME__angle[] = "angle";
static char mir_msgs__msg__HookStatus__FIELD_NAME__braked[] = "braked";
static char mir_msgs__msg__HookStatus__FIELD_NAME__trolley_attached[] = "trolley_attached";
static char mir_msgs__msg__HookStatus__FIELD_NAME__trolley[] = "trolley";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__HookStatus__FIELDS[] = {
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__available, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__braked, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__trolley_attached, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__FIELD_NAME__trolley, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__Trolley__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__HookStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mir_msgs__msg__Trolley__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__HookStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__HookStatus__TYPE_NAME, 23, 23},
      {mir_msgs__msg__HookStatus__FIELDS, 7, 7},
    },
    {mir_msgs__msg__HookStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mir_msgs__msg__Trolley__EXPECTED_HASH, mir_msgs__msg__Trolley__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mir_msgs__msg__Trolley__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool available\n"
  "float32 length\n"
  "float32 height\n"
  "float32 angle\n"
  "bool braked\n"
  "\n"
  "bool trolley_attached\n"
  "Trolley trolley";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__HookStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__HookStatus__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 110, 110},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__HookStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__HookStatus__get_individual_type_description_source(NULL),
    sources[1] = *mir_msgs__msg__Trolley__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
