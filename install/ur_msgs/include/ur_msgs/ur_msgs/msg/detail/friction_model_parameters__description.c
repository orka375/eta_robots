// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/friction_model_parameters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__FrictionModelParameters__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xb2, 0xbe, 0xce, 0x01, 0x81, 0x76, 0xa7,
      0xb6, 0x42, 0x9e, 0xb2, 0x52, 0xab, 0x10, 0xad,
      0x3f, 0xb2, 0x50, 0x3d, 0xb5, 0x76, 0xae, 0x06,
      0xf2, 0x17, 0xce, 0x35, 0x47, 0x54, 0x17, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__FrictionModelParameters__TYPE_NAME[] = "ur_msgs/msg/FrictionModelParameters";

// Define type names, field names, and default values
static char ur_msgs__msg__FrictionModelParameters__FIELD_NAME__viscous_scale[] = "viscous_scale";
static char ur_msgs__msg__FrictionModelParameters__FIELD_NAME__coulomb_scale[] = "coulomb_scale";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__FrictionModelParameters__FIELDS[] = {
  {
    {ur_msgs__msg__FrictionModelParameters__FIELD_NAME__viscous_scale, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__FrictionModelParameters__FIELD_NAME__coulomb_scale, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__msg__FrictionModelParameters__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__FrictionModelParameters__TYPE_NAME, 35, 35},
      {ur_msgs__msg__FrictionModelParameters__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Per-joint viscous friction scale factors for direct torque control.\n"
  "# Range [0-1] per joint. 0 = no compensation, 1 = full compensation.\n"
  "# Default: [0.9, 0.9, 0.8, 0.9, 0.9, 0.9]\n"
  "float64[] viscous_scale\n"
  "\n"
  "# Per-joint Coulomb friction scale factors for direct torque control.\n"
  "# Range [0-1] per joint. 0 = no compensation, 1 = full compensation.\n"
  "# Default: [0.8, 0.8, 0.7, 0.8, 0.8, 0.8]\n"
  "float64[] coulomb_scale";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__FrictionModelParameters__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__FrictionModelParameters__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 411, 411},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__FrictionModelParameters__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__FrictionModelParameters__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
