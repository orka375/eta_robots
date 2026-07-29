// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/hook_extended_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__HookExtendedStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x12, 0x43, 0x31, 0x57, 0xe6, 0x30, 0x76,
      0x33, 0x44, 0x95, 0x4c, 0x5f, 0xa5, 0xe6, 0x57,
      0xda, 0x1c, 0x94, 0xdc, 0x47, 0x39, 0xab, 0x50,
      0x36, 0xff, 0xe5, 0xa2, 0x20, 0x28, 0xb6, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mir_msgs/msg/detail/brake_state__functions.h"
#include "mir_msgs/msg/detail/gripper_state__functions.h"
#include "mir_msgs/msg/detail/height_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mir_msgs__msg__BrakeState__EXPECTED_HASH = {1, {
    0x5c, 0x10, 0xf0, 0x4d, 0x4b, 0x1d, 0x7e, 0xf3,
    0xc2, 0x5f, 0xc3, 0x86, 0x15, 0xb2, 0xe2, 0x4c,
    0xa6, 0xa1, 0xe1, 0x58, 0x9e, 0xc6, 0xf3, 0xf1,
    0x40, 0xda, 0x25, 0x6c, 0x51, 0xcc, 0xbf, 0x89,
  }};
static const rosidl_type_hash_t mir_msgs__msg__GripperState__EXPECTED_HASH = {1, {
    0x5d, 0xdf, 0xff, 0x17, 0x40, 0x24, 0xb2, 0xfd,
    0x18, 0x41, 0x63, 0xdd, 0x22, 0x4d, 0x14, 0x3e,
    0x66, 0x09, 0x88, 0x54, 0xf2, 0x5c, 0x46, 0x7e,
    0xc4, 0xfc, 0x0a, 0xba, 0x12, 0xb9, 0xd2, 0x52,
  }};
static const rosidl_type_hash_t mir_msgs__msg__HeightState__EXPECTED_HASH = {1, {
    0x4b, 0x27, 0x15, 0xc8, 0xd4, 0x77, 0x62, 0x2d,
    0x85, 0x72, 0xb7, 0xe4, 0xda, 0x3b, 0xde, 0x08,
    0x96, 0x59, 0xe6, 0xc9, 0xd5, 0x35, 0xc6, 0xca,
    0x9b, 0xc0, 0xf4, 0x83, 0x4d, 0xff, 0xd7, 0xfd,
  }};
#endif

static char mir_msgs__msg__HookExtendedStatus__TYPE_NAME[] = "mir_msgs/msg/HookExtendedStatus";
static char mir_msgs__msg__BrakeState__TYPE_NAME[] = "mir_msgs/msg/BrakeState";
static char mir_msgs__msg__GripperState__TYPE_NAME[] = "mir_msgs/msg/GripperState";
static char mir_msgs__msg__HeightState__TYPE_NAME[] = "mir_msgs/msg/HeightState";

// Define type names, field names, and default values
static char mir_msgs__msg__HookExtendedStatus__FIELD_NAME__available[] = "available";
static char mir_msgs__msg__HookExtendedStatus__FIELD_NAME__brake[] = "brake";
static char mir_msgs__msg__HookExtendedStatus__FIELD_NAME__gripper[] = "gripper";
static char mir_msgs__msg__HookExtendedStatus__FIELD_NAME__height[] = "height";
static char mir_msgs__msg__HookExtendedStatus__FIELD_NAME__angle[] = "angle";
static char mir_msgs__msg__HookExtendedStatus__FIELD_NAME__qr_marker_name[] = "qr_marker_name";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__HookExtendedStatus__FIELDS[] = {
  {
    {mir_msgs__msg__HookExtendedStatus__FIELD_NAME__available, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookExtendedStatus__FIELD_NAME__brake, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__BrakeState__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookExtendedStatus__FIELD_NAME__gripper, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__GripperState__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookExtendedStatus__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__HeightState__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookExtendedStatus__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookExtendedStatus__FIELD_NAME__qr_marker_name, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__HookExtendedStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mir_msgs__msg__BrakeState__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__GripperState__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HeightState__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__HookExtendedStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__HookExtendedStatus__TYPE_NAME, 31, 31},
      {mir_msgs__msg__HookExtendedStatus__FIELDS, 6, 6},
    },
    {mir_msgs__msg__HookExtendedStatus__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&mir_msgs__msg__BrakeState__EXPECTED_HASH, mir_msgs__msg__BrakeState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mir_msgs__msg__BrakeState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__GripperState__EXPECTED_HASH, mir_msgs__msg__GripperState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mir_msgs__msg__GripperState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__HeightState__EXPECTED_HASH, mir_msgs__msg__HeightState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mir_msgs__msg__HeightState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool available\n"
  "\n"
  "BrakeState brake\n"
  "\n"
  "GripperState gripper\n"
  "\n"
  "HeightState height\n"
  "\n"
  "float32 angle\n"
  "\n"
  "string qr_marker_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__HookExtendedStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__HookExtendedStatus__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 113, 113},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__HookExtendedStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__HookExtendedStatus__get_individual_type_description_source(NULL),
    sources[1] = *mir_msgs__msg__BrakeState__get_individual_type_description_source(NULL);
    sources[2] = *mir_msgs__msg__GripperState__get_individual_type_description_source(NULL);
    sources[3] = *mir_msgs__msg__HeightState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
