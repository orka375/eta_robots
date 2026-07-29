// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/SkidDetectionDiff.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/skid_detection_diff__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__SkidDetectionDiff__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x13, 0xc1, 0x87, 0xc3, 0x97, 0x29, 0x21,
      0xae, 0xb1, 0x5f, 0x27, 0x90, 0x57, 0x09, 0xe4,
      0x1c, 0x73, 0x19, 0x52, 0x03, 0x1b, 0xd8, 0xd5,
      0xaf, 0x6e, 0x20, 0xab, 0xdc, 0x6a, 0x91, 0x1d,
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

static char mir_msgs__msg__SkidDetectionDiff__TYPE_NAME[] = "mir_msgs/msg/SkidDetectionDiff";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__time_stamp[] = "time_stamp";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__enc_acc_x[] = "enc_acc_x";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__enc_acc_y[] = "enc_acc_y";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__enc_rot_th[] = "enc_rot_th";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__imu_acc_x[] = "imu_acc_x";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__imu_acc_y[] = "imu_acc_y";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__imu_rot_th[] = "imu_rot_th";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__diff_acc_x[] = "diff_acc_x";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__diff_acc_y[] = "diff_acc_y";
static char mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__diff_rot_th[] = "diff_rot_th";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__SkidDetectionDiff__FIELDS[] = {
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__time_stamp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__enc_acc_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__enc_acc_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__enc_rot_th, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__imu_acc_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__imu_acc_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__imu_rot_th, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__diff_acc_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__diff_acc_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__SkidDetectionDiff__FIELD_NAME__diff_rot_th, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__SkidDetectionDiff__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__SkidDetectionDiff__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__SkidDetectionDiff__TYPE_NAME, 30, 30},
      {mir_msgs__msg__SkidDetectionDiff__FIELDS, 10, 10},
    },
    {mir_msgs__msg__SkidDetectionDiff__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "float64 enc_acc_x\n"
  "float64 enc_acc_y\n"
  "float64 enc_rot_th\n"
  "\n"
  "\n"
  "float64 imu_acc_x\n"
  "float64 imu_acc_y\n"
  "float64 imu_rot_th\n"
  "\n"
  "\n"
  "float64 diff_acc_x\n"
  "float64 diff_acc_y\n"
  "float64 diff_rot_th";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__SkidDetectionDiff__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__SkidDetectionDiff__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 207, 207},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__SkidDetectionDiff__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__SkidDetectionDiff__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
