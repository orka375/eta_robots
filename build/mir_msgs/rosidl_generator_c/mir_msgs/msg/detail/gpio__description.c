// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/gpio__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Gpio__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0xab, 0x2f, 0x9a, 0x39, 0x39, 0x5d, 0x8e,
      0x32, 0xb2, 0xda, 0x4c, 0x6a, 0xc6, 0x57, 0x97,
      0x70, 0x05, 0x1f, 0x22, 0x95, 0x3a, 0x8c, 0x20,
      0xb3, 0xa7, 0x19, 0xbc, 0x16, 0x03, 0xf2, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__Gpio__TYPE_NAME[] = "mir_msgs/msg/Gpio";

// Define type names, field names, and default values
static char mir_msgs__msg__Gpio__FIELD_NAME__ioport[] = "ioport";
static char mir_msgs__msg__Gpio__FIELD_NAME__dat[] = "dat";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Gpio__FIELDS[] = {
  {
    {mir_msgs__msg__Gpio__FIELD_NAME__ioport, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Gpio__FIELD_NAME__dat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__Gpio__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Gpio__TYPE_NAME, 17, 17},
      {mir_msgs__msg__Gpio__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 POWERBOARD_GPIO = 0\n"
  "uint8 POWERBOARD_RESET_SWITCH_LED = 1\n"
  "uint8 PENDANT_INPUT = 5\n"
  "uint8 AUTO_MODE_SWITCH = 10\n"
  "uint8 MANUAL_MODE_SWITCH = 11\n"
  "uint8 STOP_BUTTON = 12\n"
  "\n"
  "uint8 ioport\n"
  "uint8 dat";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Gpio__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Gpio__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 193, 193},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Gpio__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Gpio__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
