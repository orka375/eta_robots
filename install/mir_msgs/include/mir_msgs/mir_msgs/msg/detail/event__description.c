// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0xc2, 0x93, 0xa7, 0x88, 0xe7, 0x6e, 0x6b,
      0x48, 0x28, 0x94, 0x5c, 0xfe, 0xca, 0xfe, 0x51,
      0xa0, 0x4d, 0x41, 0xa0, 0x94, 0x88, 0x4e, 0x8f,
      0x78, 0x5d, 0x42, 0x22, 0xef, 0x02, 0xab, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char mir_msgs__msg__Event__TYPE_NAME[] = "mir_msgs/msg/Event";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char mir_msgs__msg__Event__FIELD_NAME__event_type[] = "event_type";
static char mir_msgs__msg__Event__FIELD_NAME__area_guid[] = "area_guid";
static char mir_msgs__msg__Event__FIELD_NAME__area_name[] = "area_name";
static char mir_msgs__msg__Event__FIELD_NAME__polygon[] = "polygon";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__Event__FIELDS[] = {
  {
    {mir_msgs__msg__Event__FIELD_NAME__event_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Event__FIELD_NAME__area_guid, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Event__FIELD_NAME__area_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Event__FIELD_NAME__polygon, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__Event__TYPE_NAME, 18, 18},
      {mir_msgs__msg__Event__FIELDS, 4, 4},
    },
    {mir_msgs__msg__Event__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 EV_SPEED=1\n"
  "uint32 EV_BLINK=2\n"
  "uint32 EV_SOUND=3\n"
  "uint32 EV_DOOR=4\n"
  "uint32 EV_AMCLOFF=5\n"
  "uint32 EV_FWDDIST=6\n"
  "uint32 EV_IO=7\n"
  "uint32 EV_FLEETLCK=8\\t# Fleet\n"
  "uint32 EV_EMERGENCY=9\\t# Fleet\n"
  "uint32 event_type\n"
  "string area_guid\\t# The area unique identifier\n"
  "string area_name\\t# The name of the area\n"
  "geometry_msgs/Point[] polygon # An array of corner points that define the edges of the area";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__Event__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 381, 381},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__Event__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
