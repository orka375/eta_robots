// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from om_aiv_msg:msg/Status.idl
// generated code does not contain a copyright notice

#include "om_aiv_msg/msg/detail/status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_om_aiv_msg
const rosidl_type_hash_t *
om_aiv_msg__msg__Status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x49, 0xa3, 0x3c, 0x57, 0xc9, 0xd2, 0x11,
      0x60, 0xa1, 0xcd, 0x59, 0xee, 0x90, 0x8d, 0xc5,
      0x88, 0x81, 0xe2, 0x54, 0x7c, 0xa3, 0x01, 0x2a,
      0x3e, 0xa4, 0x91, 0xe9, 0x7d, 0x0a, 0x37, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "om_aiv_msg/msg/detail/location__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t om_aiv_msg__msg__Location__EXPECTED_HASH = {1, {
    0xe0, 0x92, 0x38, 0x6c, 0xe0, 0xca, 0x0c, 0x91,
    0x95, 0xf0, 0x52, 0xdc, 0x0c, 0x7e, 0xa6, 0x98,
    0x38, 0x97, 0x1b, 0xae, 0xaf, 0x9a, 0xee, 0x28,
    0x11, 0xec, 0x94, 0xfb, 0x54, 0x99, 0xb7, 0xa1,
  }};
#endif

static char om_aiv_msg__msg__Status__TYPE_NAME[] = "om_aiv_msg/msg/Status";
static char om_aiv_msg__msg__Location__TYPE_NAME[] = "om_aiv_msg/msg/Location";

// Define type names, field names, and default values
static char om_aiv_msg__msg__Status__FIELD_NAME__extended_status[] = "extended_status";
static char om_aiv_msg__msg__Status__FIELD_NAME__status[] = "status";
static char om_aiv_msg__msg__Status__FIELD_NAME__state_of_charge[] = "state_of_charge";
static char om_aiv_msg__msg__Status__FIELD_NAME__localization_score[] = "localization_score";
static char om_aiv_msg__msg__Status__FIELD_NAME__temperature[] = "temperature";
static char om_aiv_msg__msg__Status__FIELD_NAME__location[] = "location";

static rosidl_runtime_c__type_description__Field om_aiv_msg__msg__Status__FIELDS[] = {
  {
    {om_aiv_msg__msg__Status__FIELD_NAME__extended_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Status__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Status__FIELD_NAME__state_of_charge, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Status__FIELD_NAME__localization_score, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Status__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {om_aiv_msg__msg__Status__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {om_aiv_msg__msg__Location__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription om_aiv_msg__msg__Status__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {om_aiv_msg__msg__Location__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
om_aiv_msg__msg__Status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {om_aiv_msg__msg__Status__TYPE_NAME, 21, 21},
      {om_aiv_msg__msg__Status__FIELDS, 6, 6},
    },
    {om_aiv_msg__msg__Status__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&om_aiv_msg__msg__Location__EXPECTED_HASH, om_aiv_msg__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = om_aiv_msg__msg__Location__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string extended_status\n"
  "string status\n"
  "float32 state_of_charge\n"
  "float32 localization_score\n"
  "float32 temperature\n"
  "om_aiv_msg/Location location";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
om_aiv_msg__msg__Status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {om_aiv_msg__msg__Status__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 137, 137},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
om_aiv_msg__msg__Status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *om_aiv_msg__msg__Status__get_individual_type_description_source(NULL),
    sources[1] = *om_aiv_msg__msg__Location__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
