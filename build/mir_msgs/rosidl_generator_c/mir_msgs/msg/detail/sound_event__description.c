// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/SoundEvent.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/sound_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__SoundEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xd7, 0x74, 0x67, 0xd5, 0x94, 0xd7, 0xba,
      0x83, 0x26, 0x1d, 0xd2, 0x7e, 0x16, 0x4b, 0x71,
      0xcd, 0xd8, 0xe4, 0xae, 0x32, 0xa8, 0x02, 0x86,
      0x07, 0x66, 0xf9, 0x96, 0xd6, 0xa9, 0x09, 0x03,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char mir_msgs__msg__SoundEvent__TYPE_NAME[] = "mir_msgs/msg/SoundEvent";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mir_msgs__msg__SoundEvent__FIELD_NAME__time_stamp[] = "time_stamp";
static char mir_msgs__msg__SoundEvent__FIELD_NAME__sound_guid[] = "sound_guid";
static char mir_msgs__msg__SoundEvent__FIELD_NAME__message[] = "message";
static char mir_msgs__msg__SoundEvent__FIELD_NAME__event[] = "event";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__SoundEvent__FIELDS[] = {
  {
    {mir_msgs__msg__SoundEvent__FIELD_NAME__time_stamp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SoundEvent__FIELD_NAME__sound_guid, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SoundEvent__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SoundEvent__FIELD_NAME__event, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__SoundEvent__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__SoundEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__SoundEvent__TYPE_NAME, 23, 23},
      {mir_msgs__msg__SoundEvent__FIELDS, 4, 4},
    },
    {mir_msgs__msg__SoundEvent__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time time_stamp\n"
  "string sound_guid\n"
  "string message\n"
  "\n"
  "uint8 START=0\n"
  "uint8 STOP =1\n"
  "uint8 MUTE=2\n"
  "uint8 UNMUTE=3\n"
  "uint8 PAUSE=4\n"
  "uint8 UNPAUSE=5\n"
  "uint8 FINISH=6\n"
  "uint8 MUTEABLE=7\n"
  "uint8 REQ_PLAY=10\n"
  "\n"
  "\n"
  "uint8 event";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__SoundEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__SoundEvent__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 219, 219},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__SoundEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__SoundEvent__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
