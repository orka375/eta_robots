// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/HookData.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/hook_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__HookData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x4a, 0x4a, 0x6b, 0xce, 0xc1, 0xfd, 0x17,
      0x85, 0xce, 0xf4, 0x0a, 0xbd, 0x70, 0xb1, 0xba,
      0xb2, 0xea, 0x81, 0x06, 0x27, 0x97, 0x1d, 0x4d,
      0xcd, 0xf3, 0xef, 0xa8, 0x6b, 0xdc, 0xd8, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mir_msgs/msg/detail/angle_measurment__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mir_msgs__msg__AngleMeasurment__EXPECTED_HASH = {1, {
    0x1f, 0xe6, 0xe7, 0x03, 0x4a, 0x4f, 0x89, 0xd7,
    0xfb, 0x2b, 0xe2, 0xe4, 0x6b, 0xe3, 0x7b, 0x48,
    0xf1, 0xac, 0x74, 0xc6, 0xfe, 0xf9, 0x7d, 0xe1,
    0x4f, 0x7a, 0x48, 0x71, 0x6e, 0xca, 0x4b, 0x81,
  }};
#endif

static char mir_msgs__msg__HookData__TYPE_NAME[] = "mir_msgs/msg/HookData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mir_msgs__msg__AngleMeasurment__TYPE_NAME[] = "mir_msgs/msg/AngleMeasurment";

// Define type names, field names, and default values
static char mir_msgs__msg__HookData__FIELD_NAME__angle[] = "angle";
static char mir_msgs__msg__HookData__FIELD_NAME__height[] = "height";
static char mir_msgs__msg__HookData__FIELD_NAME__length[] = "length";
static char mir_msgs__msg__HookData__FIELD_NAME__brake_state[] = "brake_state";
static char mir_msgs__msg__HookData__FIELD_NAME__gripper_state[] = "gripper_state";
static char mir_msgs__msg__HookData__FIELD_NAME__height_state[] = "height_state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__HookData__FIELDS[] = {
  {
    {mir_msgs__msg__HookData__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__AngleMeasurment__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookData__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookData__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookData__FIELD_NAME__brake_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookData__FIELD_NAME__gripper_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookData__FIELD_NAME__height_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__HookData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__AngleMeasurment__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__HookData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__HookData__TYPE_NAME, 21, 21},
      {mir_msgs__msg__HookData__FIELDS, 6, 6},
    },
    {mir_msgs__msg__HookData__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__AngleMeasurment__EXPECTED_HASH, mir_msgs__msg__AngleMeasurment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mir_msgs__msg__AngleMeasurment__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "AngleMeasurment angle\n"
  "float64 height\n"
  "float64 length\n"
  "uint8 brake_state\n"
  "uint8 gripper_state\n"
  "uint8 height_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__HookData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__HookData__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 109, 109},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__HookData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__HookData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mir_msgs__msg__AngleMeasurment__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
