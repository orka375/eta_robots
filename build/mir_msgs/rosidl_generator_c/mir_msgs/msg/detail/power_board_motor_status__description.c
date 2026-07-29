// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/power_board_motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__PowerBoardMotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xaf, 0x77, 0xd5, 0x1f, 0x27, 0x2b, 0xc7,
      0x65, 0xed, 0xe0, 0x30, 0xf5, 0x8e, 0xf5, 0xc0,
      0x52, 0xfd, 0xce, 0x98, 0xa5, 0x50, 0x37, 0x8a,
      0x75, 0x73, 0xa4, 0xf4, 0x06, 0xc4, 0xcf, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mir_msgs__msg__PowerBoardMotorStatus__TYPE_NAME[] = "mir_msgs/msg/PowerBoardMotorStatus";

// Define type names, field names, and default values
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_ctrl_word[] = "left_motor_ctrl_word";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_speed[] = "left_motor_speed";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_encoder[] = "left_motor_encoder";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_status[] = "left_motor_status";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_error[] = "left_motor_error";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_error_hist1[] = "left_motor_error_hist1";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_error_hist2[] = "left_motor_error_hist2";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_current[] = "left_motor_current";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_i2t_motor[] = "left_motor_i2t_motor";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_i2t_controller[] = "left_motor_i2t_controller";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_temperature[] = "left_motor_temperature";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_ctrl_word[] = "right_motor_ctrl_word";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_speed[] = "right_motor_speed";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_encoder[] = "right_motor_encoder";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_status[] = "right_motor_status";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_error[] = "right_motor_error";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_error_hist1[] = "right_motor_error_hist1";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_error_hist2[] = "right_motor_error_hist2";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_current[] = "right_motor_current";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_i2t_motor[] = "right_motor_i2t_motor";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_i2t_controller[] = "right_motor_i2t_controller";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_temperature[] = "right_motor_temperature";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__brake_left_status[] = "brake_left_status";
static char mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__brake_right_status[] = "brake_right_status";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__PowerBoardMotorStatus__FIELDS[] = {
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_ctrl_word, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_encoder, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_status, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_error, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_error_hist1, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_error_hist2, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_current, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_i2t_motor, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_i2t_controller, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__left_motor_temperature, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_ctrl_word, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_speed, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_encoder, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_status, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_error, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_error_hist1, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_error_hist2, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_current, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_i2t_motor, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_i2t_controller, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__right_motor_temperature, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__brake_left_status, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__PowerBoardMotorStatus__FIELD_NAME__brake_right_status, 18, 18},
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
mir_msgs__msg__PowerBoardMotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__PowerBoardMotorStatus__TYPE_NAME, 34, 34},
      {mir_msgs__msg__PowerBoardMotorStatus__FIELDS, 24, 24},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 left_motor_ctrl_word\n"
  "int32 left_motor_speed\n"
  "int32 left_motor_encoder\n"
  "uint16 left_motor_status\n"
  "uint8 left_motor_error\n"
  "uint32 left_motor_error_hist1\n"
  "uint32 left_motor_error_hist2\n"
  "int32 left_motor_current\n"
  "uint16 left_motor_i2t_motor\n"
  "uint16 left_motor_i2t_controller\n"
  "int16 left_motor_temperature\n"
  "uint16 right_motor_ctrl_word\n"
  "int32 right_motor_speed\n"
  "int32 right_motor_encoder\n"
  "uint16 right_motor_status\n"
  "uint8 right_motor_error\n"
  "uint32 right_motor_error_hist1\n"
  "uint32 right_motor_error_hist2\n"
  "int32 right_motor_current\n"
  "uint16 right_motor_i2t_motor\n"
  "uint16 right_motor_i2t_controller\n"
  "int16 right_motor_temperature\n"
  "#Status bits for brake feedback.\n"
  "uint8 BRAKE_STATUS_BRAKED_BIT=1\\t\\t# is \"1\" if brake is supposed to be braked\n"
  "uint8 BRAKE_STATUS_FB_BIT=4\\t\\t\\t# is \"1\" if brake feedback sensor is activated (brake is released)\n"
  "uint8 BRAKE_STATUS_TRANSITION_BIT=128\n"
  "# So error combinations are - (Any combination with the TRANSITION bit set are valid)\n"
  "#  BRAKED\\tFB\\tTRANSITION\\tSTATUSWORD\n"
  "#\\t0\\t\\t0\\t0\\t\\t\\t0x00\\t\\t\\tBrake is suppused to be released, but FB indicate braked. We are not in transition.\n"
  "#\\t1\\t\\t1\\t0\\t\\t\\t0x05\\t\\t\\tBrake is suppused to be braked, but FB indicate released. We are not in transition.\n"
  "uint8 brake_left_status\n"
  "uint8 brake_right_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__PowerBoardMotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__PowerBoardMotorStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1227, 1227},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__PowerBoardMotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__PowerBoardMotorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
