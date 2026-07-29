// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/ResourceState.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/resource_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__ResourceState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x68, 0x72, 0xea, 0x40, 0xce, 0x48, 0xab,
      0x97, 0xbf, 0xc0, 0x7f, 0x03, 0x1e, 0x28, 0x8c,
      0x9b, 0x3d, 0x7d, 0x55, 0x5d, 0x3e, 0x66, 0xad,
      0x16, 0x56, 0xcb, 0x43, 0x4e, 0x80, 0xa8, 0xe8,
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

static char mir_msgs__msg__ResourceState__TYPE_NAME[] = "mir_msgs/msg/ResourceState";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char mir_msgs__msg__ResourceState__FIELD_NAME__assigned[] = "assigned";
static char mir_msgs__msg__ResourceState__FIELD_NAME__type[] = "type";
static char mir_msgs__msg__ResourceState__FIELD_NAME__path_idx[] = "path_idx";
static char mir_msgs__msg__ResourceState__FIELD_NAME__distance[] = "distance";
static char mir_msgs__msg__ResourceState__FIELD_NAME__collision_point[] = "collision_point";
static char mir_msgs__msg__ResourceState__FIELD_NAME__resource_geometry[] = "resource_geometry";
static char mir_msgs__msg__ResourceState__FIELD_NAME__queue[] = "queue";
static char mir_msgs__msg__ResourceState__FIELD_NAME__name[] = "name";
static char mir_msgs__msg__ResourceState__FIELD_NAME__guid[] = "guid";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__ResourceState__FIELDS[] = {
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__assigned, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__path_idx, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__collision_point, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__resource_geometry, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__queue, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__ResourceState__FIELD_NAME__guid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__ResourceState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__ResourceState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__ResourceState__TYPE_NAME, 26, 26},
      {mir_msgs__msg__ResourceState__FIELDS, 9, 9},
    },
    {mir_msgs__msg__ResourceState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] assigned # A list of IPs of all assigned robots (Areas can have more than one robot assigned at a time)\n"
  "uint32 ROBOT_POSITION=0\n"
  "uint32 STAGING_POSITION=1\n"
  "uint32 CHARGING_STATION=2\n"
  "uint32 AREA=3\n"
  "uint32 ELEVATOR_ENTRY_POSITION=26\n"
  "uint32 ELEVATOR_POSITION=25\n"
  "uint32 type # The resource type\n"
  "uint32 path_idx # The index from the global path in which the robot gets into the position\n"
  "float32 distance # The distance from the robot to the resource\n"
  "geometry_msgs/Point collision_point # The collision point with the resource\n"
  "geometry_msgs/Point[] resource_geometry # The resource_geometry\n"
  "string[] queue # The queue for a resource. It's a list of robots ips.\n"
  "string name # The name of the resource\n"
  "string guid # The guid of the resource";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__ResourceState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__ResourceState__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 739, 739},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__ResourceState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__ResourceState__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
