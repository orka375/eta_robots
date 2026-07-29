// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#include "mir_msgs/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mir_msgs
const rosidl_type_hash_t *
mir_msgs__msg__RobotStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x4b, 0x09, 0xce, 0x84, 0xe6, 0x4a, 0xbc,
      0x3c, 0x0b, 0x6f, 0x4e, 0xc2, 0x5b, 0x8b, 0x28,
      0xd7, 0xa8, 0xaa, 0xc6, 0x9f, 0xc2, 0x0c, 0x26,
      0x09, 0xb9, 0x5c, 0x25, 0xa3, 0x6b, 0xfa, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mir_msgs/msg/detail/angle_measurment__functions.h"
#include "mir_msgs/msg/detail/error__functions.h"
#include "mir_msgs/msg/detail/hook_data__functions.h"
#include "mir_msgs/msg/detail/hook_status__functions.h"
#include "mir_msgs/msg/detail/pose2_d__functions.h"
#include "mir_msgs/msg/detail/trolley__functions.h"
#include "mir_msgs/msg/detail/twist2_d__functions.h"
#include "mir_msgs/msg/detail/user_prompt__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
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
static const rosidl_type_hash_t mir_msgs__msg__Error__EXPECTED_HASH = {1, {
    0xc6, 0x5e, 0x1a, 0x14, 0xcf, 0x54, 0x66, 0x67,
    0xd2, 0x69, 0xfa, 0xdf, 0x19, 0xe5, 0xe2, 0x10,
    0x9c, 0xc0, 0xa2, 0xf9, 0x2c, 0x74, 0xb6, 0x47,
    0x69, 0x7d, 0xe4, 0x8c, 0x56, 0x0d, 0xff, 0x3f,
  }};
static const rosidl_type_hash_t mir_msgs__msg__HookData__EXPECTED_HASH = {1, {
    0x8a, 0x4a, 0x4a, 0x6b, 0xce, 0xc1, 0xfd, 0x17,
    0x85, 0xce, 0xf4, 0x0a, 0xbd, 0x70, 0xb1, 0xba,
    0xb2, 0xea, 0x81, 0x06, 0x27, 0x97, 0x1d, 0x4d,
    0xcd, 0xf3, 0xef, 0xa8, 0x6b, 0xdc, 0xd8, 0xa8,
  }};
static const rosidl_type_hash_t mir_msgs__msg__HookStatus__EXPECTED_HASH = {1, {
    0x3a, 0xc1, 0x75, 0x82, 0x14, 0x25, 0x5c, 0xba,
    0x04, 0x57, 0xc5, 0xe8, 0x1a, 0x3b, 0xb6, 0x8c,
    0x5f, 0xc2, 0xfc, 0x2e, 0x05, 0x06, 0x05, 0x55,
    0x54, 0xce, 0xc5, 0xbd, 0x7e, 0xdf, 0x59, 0xb6,
  }};
static const rosidl_type_hash_t mir_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xab, 0x0d, 0x98, 0x06, 0xb1, 0x49, 0xad, 0xce,
    0x22, 0x44, 0x9a, 0x83, 0xc4, 0x2b, 0xbe, 0x3b,
    0x68, 0x89, 0xbd, 0x78, 0x89, 0xe3, 0x8a, 0x61,
    0xac, 0x12, 0xc4, 0x18, 0x59, 0x39, 0x2e, 0x8a,
  }};
static const rosidl_type_hash_t mir_msgs__msg__Trolley__EXPECTED_HASH = {1, {
    0xbf, 0x13, 0x11, 0x7c, 0x6e, 0xac, 0x00, 0xe9,
    0x26, 0x2b, 0x3c, 0x21, 0xbd, 0xd7, 0x0f, 0x37,
    0xe0, 0xf3, 0xcd, 0x87, 0x54, 0x41, 0x25, 0xa6,
    0xef, 0x7d, 0x05, 0x1c, 0x9a, 0x68, 0x67, 0x9a,
  }};
static const rosidl_type_hash_t mir_msgs__msg__Twist2D__EXPECTED_HASH = {1, {
    0xe4, 0xa5, 0x11, 0x7f, 0x3e, 0x20, 0xcd, 0x50,
    0xc9, 0xc2, 0xe0, 0xad, 0x34, 0xc4, 0x49, 0x61,
    0xde, 0x8a, 0x82, 0xfa, 0x54, 0x54, 0x6a, 0x1b,
    0xa9, 0x6a, 0xc4, 0x02, 0xe4, 0x0f, 0x78, 0x58,
  }};
static const rosidl_type_hash_t mir_msgs__msg__UserPrompt__EXPECTED_HASH = {1, {
    0x00, 0xde, 0x1b, 0x09, 0xbd, 0x8b, 0x98, 0xe7,
    0x00, 0x65, 0xb8, 0xf7, 0xe5, 0x3d, 0xd4, 0x6e,
    0x5b, 0xae, 0x93, 0xcb, 0x6d, 0xb8, 0x34, 0xea,
    0xfe, 0xe1, 0xb7, 0xca, 0x37, 0xd7, 0x08, 0xb2,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mir_msgs__msg__RobotStatus__TYPE_NAME[] = "mir_msgs/msg/RobotStatus";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mir_msgs__msg__AngleMeasurment__TYPE_NAME[] = "mir_msgs/msg/AngleMeasurment";
static char mir_msgs__msg__Error__TYPE_NAME[] = "mir_msgs/msg/Error";
static char mir_msgs__msg__HookData__TYPE_NAME[] = "mir_msgs/msg/HookData";
static char mir_msgs__msg__HookStatus__TYPE_NAME[] = "mir_msgs/msg/HookStatus";
static char mir_msgs__msg__Pose2D__TYPE_NAME[] = "mir_msgs/msg/Pose2D";
static char mir_msgs__msg__Trolley__TYPE_NAME[] = "mir_msgs/msg/Trolley";
static char mir_msgs__msg__Twist2D__TYPE_NAME[] = "mir_msgs/msg/Twist2D";
static char mir_msgs__msg__UserPrompt__TYPE_NAME[] = "mir_msgs/msg/UserPrompt";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mir_msgs__msg__RobotStatus__FIELD_NAME__header[] = "header";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__battery_percentage[] = "battery_percentage";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__battery_time_remaining[] = "battery_time_remaining";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__distance_to_next_target[] = "distance_to_next_target";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__errors[] = "errors";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__footprint[] = "footprint";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__hook_status[] = "hook_status";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__hook_data[] = "hook_data";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__map_id[] = "map_id";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__unloaded_map_changes[] = "unloaded_map_changes";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__mission_queue_id[] = "mission_queue_id";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__mission_text[] = "mission_text";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__mode_id[] = "mode_id";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__mode_text[] = "mode_text";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__moved[] = "moved";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__position[] = "position";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__robot_name[] = "robot_name";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__session_id[] = "session_id";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__software_version[] = "software_version";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__state_id[] = "state_id";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__state_text[] = "state_text";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__uptime[] = "uptime";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__velocity[] = "velocity";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__user_prompt[] = "user_prompt";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__safety_system_muted[] = "safety_system_muted";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__joystick_low_speed_mode_enabled[] = "joystick_low_speed_mode_enabled";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__joystick_web_session_id[] = "joystick_web_session_id";
static char mir_msgs__msg__RobotStatus__FIELD_NAME__mode_key_state[] = "mode_key_state";

static rosidl_runtime_c__type_description__Field mir_msgs__msg__RobotStatus__FIELDS[] = {
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__battery_percentage, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__battery_time_remaining, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__distance_to_next_target, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__errors, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mir_msgs__msg__Error__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__footprint, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__hook_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__HookStatus__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__hook_data, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__HookData__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__map_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__unloaded_map_changes, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__mission_queue_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__mission_text, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__mode_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__mode_text, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__moved, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__Pose2D__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__software_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__state_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__state_text, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__uptime, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__Twist2D__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__user_prompt, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mir_msgs__msg__UserPrompt__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__safety_system_muted, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__joystick_low_speed_mode_enabled, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__joystick_web_session_id, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__RobotStatus__FIELD_NAME__mode_key_state, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mir_msgs__msg__RobotStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__AngleMeasurment__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Error__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookData__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__HookStatus__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Pose2D__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Trolley__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__Twist2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mir_msgs__msg__UserPrompt__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mir_msgs__msg__RobotStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mir_msgs__msg__RobotStatus__TYPE_NAME, 24, 24},
      {mir_msgs__msg__RobotStatus__FIELDS, 29, 29},
    },
    {mir_msgs__msg__RobotStatus__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__AngleMeasurment__EXPECTED_HASH, mir_msgs__msg__AngleMeasurment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mir_msgs__msg__AngleMeasurment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__Error__EXPECTED_HASH, mir_msgs__msg__Error__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mir_msgs__msg__Error__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__HookData__EXPECTED_HASH, mir_msgs__msg__HookData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = mir_msgs__msg__HookData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__HookStatus__EXPECTED_HASH, mir_msgs__msg__HookStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = mir_msgs__msg__HookStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__Pose2D__EXPECTED_HASH, mir_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = mir_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__Trolley__EXPECTED_HASH, mir_msgs__msg__Trolley__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = mir_msgs__msg__Trolley__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__Twist2D__EXPECTED_HASH, mir_msgs__msg__Twist2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = mir_msgs__msg__Twist2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mir_msgs__msg__UserPrompt__EXPECTED_HASH, mir_msgs__msg__UserPrompt__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = mir_msgs__msg__UserPrompt__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "float32 battery_percentage\n"
  "int32 battery_time_remaining\n"
  "float32 battery_voltage\n"
  "float32 distance_to_next_target\n"
  "Error[] errors\n"
  "string footprint\n"
  "HookStatus hook_status\n"
  "HookData hook_data\n"
  "string map_id\n"
  "bool unloaded_map_changes\n"
  "int32 mission_queue_id\n"
  "string mission_text\n"
  "int32 mode_id\n"
  "string mode_text\n"
  "float64 moved\n"
  "Pose2D position\n"
  "string robot_name\n"
  "string session_id\n"
  "string software_version\n"
  "uint8 state_id\n"
  "string state_text\n"
  "int32 uptime\n"
  "Twist2D velocity\n"
  "mir_msgs/UserPrompt user_prompt\n"
  "bool safety_system_muted\n"
  "bool joystick_low_speed_mode_enabled\n"
  "string joystick_web_session_id\n"
  "string mode_key_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mir_msgs__msg__RobotStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mir_msgs__msg__RobotStatus__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 623, 623},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mir_msgs__msg__RobotStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mir_msgs__msg__RobotStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *mir_msgs__msg__AngleMeasurment__get_individual_type_description_source(NULL);
    sources[4] = *mir_msgs__msg__Error__get_individual_type_description_source(NULL);
    sources[5] = *mir_msgs__msg__HookData__get_individual_type_description_source(NULL);
    sources[6] = *mir_msgs__msg__HookStatus__get_individual_type_description_source(NULL);
    sources[7] = *mir_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[8] = *mir_msgs__msg__Trolley__get_individual_type_description_source(NULL);
    sources[9] = *mir_msgs__msg__Twist2D__get_individual_type_description_source(NULL);
    sources[10] = *mir_msgs__msg__UserPrompt__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
