// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/robot_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/robot_status__struct.h"
#include "mir_msgs/msg/detail/robot_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mir_msgs/msg/detail/error__functions.h"  // errors
#include "mir_msgs/msg/detail/hook_data__functions.h"  // hook_data
#include "mir_msgs/msg/detail/hook_status__functions.h"  // hook_status
#include "mir_msgs/msg/detail/pose2_d__functions.h"  // position
#include "mir_msgs/msg/detail/twist2_d__functions.h"  // velocity
#include "mir_msgs/msg/detail/user_prompt__functions.h"  // user_prompt
#include "rosidl_runtime_c/string.h"  // footprint, joystick_web_session_id, map_id, mission_text, mode_key_state, mode_text, robot_name, session_id, software_version, state_text
#include "rosidl_runtime_c/string_functions.h"  // footprint, joystick_web_session_id, map_id, mission_text, mode_key_state, mode_text, robot_name, session_id, software_version, state_text
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_mir_msgs__msg__Error(
  const mir_msgs__msg__Error * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__Error(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__Error * ros_message);

size_t get_serialized_size_mir_msgs__msg__Error(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__Error(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__Error(
  const mir_msgs__msg__Error * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__Error(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__Error(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, Error)();

bool cdr_serialize_mir_msgs__msg__HookData(
  const mir_msgs__msg__HookData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__HookData(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__HookData * ros_message);

size_t get_serialized_size_mir_msgs__msg__HookData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__HookData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__HookData(
  const mir_msgs__msg__HookData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__HookData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__HookData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, HookData)();

bool cdr_serialize_mir_msgs__msg__HookStatus(
  const mir_msgs__msg__HookStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__HookStatus(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__HookStatus * ros_message);

size_t get_serialized_size_mir_msgs__msg__HookStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__HookStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__HookStatus(
  const mir_msgs__msg__HookStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__HookStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__HookStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, HookStatus)();

bool cdr_serialize_mir_msgs__msg__Pose2D(
  const mir_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__Pose2D(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__Pose2D * ros_message);

size_t get_serialized_size_mir_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__Pose2D(
  const mir_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, Pose2D)();

bool cdr_serialize_mir_msgs__msg__Twist2D(
  const mir_msgs__msg__Twist2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__Twist2D(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__Twist2D * ros_message);

size_t get_serialized_size_mir_msgs__msg__Twist2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__Twist2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__Twist2D(
  const mir_msgs__msg__Twist2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__Twist2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__Twist2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, Twist2D)();

bool cdr_serialize_mir_msgs__msg__UserPrompt(
  const mir_msgs__msg__UserPrompt * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mir_msgs__msg__UserPrompt(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__UserPrompt * ros_message);

size_t get_serialized_size_mir_msgs__msg__UserPrompt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__UserPrompt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mir_msgs__msg__UserPrompt(
  const mir_msgs__msg__UserPrompt * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mir_msgs__msg__UserPrompt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mir_msgs__msg__UserPrompt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, UserPrompt)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mir_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RobotStatus__ros_msg_type = mir_msgs__msg__RobotStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_mir_msgs__msg__RobotStatus(
  const mir_msgs__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: battery_time_remaining
  {
    cdr << ros_message->battery_time_remaining;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: distance_to_next_target
  {
    cdr << ros_message->distance_to_next_target;
  }

  // Field name: errors
  {
    size_t size = ros_message->errors.size;
    auto array_ptr = ros_message->errors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mir_msgs__msg__Error(
        &array_ptr[i], cdr);
    }
  }

  // Field name: footprint
  {
    const rosidl_runtime_c__String * str = &ros_message->footprint;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: hook_status
  {
    cdr_serialize_mir_msgs__msg__HookStatus(
      &ros_message->hook_status, cdr);
  }

  // Field name: hook_data
  {
    cdr_serialize_mir_msgs__msg__HookData(
      &ros_message->hook_data, cdr);
  }

  // Field name: map_id
  {
    const rosidl_runtime_c__String * str = &ros_message->map_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: unloaded_map_changes
  {
    cdr << (ros_message->unloaded_map_changes ? true : false);
  }

  // Field name: mission_queue_id
  {
    cdr << ros_message->mission_queue_id;
  }

  // Field name: mission_text
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mode_id
  {
    cdr << ros_message->mode_id;
  }

  // Field name: mode_text
  {
    const rosidl_runtime_c__String * str = &ros_message->mode_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: moved
  {
    cdr << ros_message->moved;
  }

  // Field name: position
  {
    cdr_serialize_mir_msgs__msg__Pose2D(
      &ros_message->position, cdr);
  }

  // Field name: robot_name
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: session_id
  {
    const rosidl_runtime_c__String * str = &ros_message->session_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: software_version
  {
    const rosidl_runtime_c__String * str = &ros_message->software_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state_id
  {
    cdr << ros_message->state_id;
  }

  // Field name: state_text
  {
    const rosidl_runtime_c__String * str = &ros_message->state_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: uptime
  {
    cdr << ros_message->uptime;
  }

  // Field name: velocity
  {
    cdr_serialize_mir_msgs__msg__Twist2D(
      &ros_message->velocity, cdr);
  }

  // Field name: user_prompt
  {
    cdr_serialize_mir_msgs__msg__UserPrompt(
      &ros_message->user_prompt, cdr);
  }

  // Field name: safety_system_muted
  {
    cdr << (ros_message->safety_system_muted ? true : false);
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    cdr << (ros_message->joystick_low_speed_mode_enabled ? true : false);
  }

  // Field name: joystick_web_session_id
  {
    const rosidl_runtime_c__String * str = &ros_message->joystick_web_session_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mode_key_state
  {
    const rosidl_runtime_c__String * str = &ros_message->mode_key_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_deserialize_mir_msgs__msg__RobotStatus(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs__msg__RobotStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: battery_percentage
  {
    cdr >> ros_message->battery_percentage;
  }

  // Field name: battery_time_remaining
  {
    cdr >> ros_message->battery_time_remaining;
  }

  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: distance_to_next_target
  {
    cdr >> ros_message->distance_to_next_target;
  }

  // Field name: errors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->errors.data) {
      mir_msgs__msg__Error__Sequence__fini(&ros_message->errors);
    }
    if (!mir_msgs__msg__Error__Sequence__init(&ros_message->errors, size)) {
      fprintf(stderr, "failed to create array for field 'errors'");
      return false;
    }
    auto array_ptr = ros_message->errors.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mir_msgs__msg__Error(cdr, &array_ptr[i]);
    }
  }

  // Field name: footprint
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->footprint.data) {
      rosidl_runtime_c__String__init(&ros_message->footprint);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->footprint,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'footprint'\n");
      return false;
    }
  }

  // Field name: hook_status
  {
    cdr_deserialize_mir_msgs__msg__HookStatus(cdr, &ros_message->hook_status);
  }

  // Field name: hook_data
  {
    cdr_deserialize_mir_msgs__msg__HookData(cdr, &ros_message->hook_data);
  }

  // Field name: map_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->map_id.data) {
      rosidl_runtime_c__String__init(&ros_message->map_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->map_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'map_id'\n");
      return false;
    }
  }

  // Field name: unloaded_map_changes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->unloaded_map_changes = tmp ? true : false;
  }

  // Field name: mission_queue_id
  {
    cdr >> ros_message->mission_queue_id;
  }

  // Field name: mission_text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_text.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_text'\n");
      return false;
    }
  }

  // Field name: mode_id
  {
    cdr >> ros_message->mode_id;
  }

  // Field name: mode_text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mode_text.data) {
      rosidl_runtime_c__String__init(&ros_message->mode_text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mode_text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode_text'\n");
      return false;
    }
  }

  // Field name: moved
  {
    cdr >> ros_message->moved;
  }

  // Field name: position
  {
    cdr_deserialize_mir_msgs__msg__Pose2D(cdr, &ros_message->position);
  }

  // Field name: robot_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_name.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_name'\n");
      return false;
    }
  }

  // Field name: session_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->session_id.data) {
      rosidl_runtime_c__String__init(&ros_message->session_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->session_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'session_id'\n");
      return false;
    }
  }

  // Field name: software_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->software_version.data) {
      rosidl_runtime_c__String__init(&ros_message->software_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->software_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'software_version'\n");
      return false;
    }
  }

  // Field name: state_id
  {
    cdr >> ros_message->state_id;
  }

  // Field name: state_text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state_text.data) {
      rosidl_runtime_c__String__init(&ros_message->state_text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state_text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state_text'\n");
      return false;
    }
  }

  // Field name: uptime
  {
    cdr >> ros_message->uptime;
  }

  // Field name: velocity
  {
    cdr_deserialize_mir_msgs__msg__Twist2D(cdr, &ros_message->velocity);
  }

  // Field name: user_prompt
  {
    cdr_deserialize_mir_msgs__msg__UserPrompt(cdr, &ros_message->user_prompt);
  }

  // Field name: safety_system_muted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safety_system_muted = tmp ? true : false;
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joystick_low_speed_mode_enabled = tmp ? true : false;
  }

  // Field name: joystick_web_session_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joystick_web_session_id.data) {
      rosidl_runtime_c__String__init(&ros_message->joystick_web_session_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joystick_web_session_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joystick_web_session_id'\n");
      return false;
    }
  }

  // Field name: mode_key_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mode_key_state.data) {
      rosidl_runtime_c__String__init(&ros_message->mode_key_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mode_key_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode_key_state'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotStatus__ros_msg_type * ros_message = static_cast<const _RobotStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_time_remaining
  {
    size_t item_size = sizeof(ros_message->battery_time_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_to_next_target
  {
    size_t item_size = sizeof(ros_message->distance_to_next_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: errors
  {
    size_t array_size = ros_message->errors.size;
    auto array_ptr = ros_message->errors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mir_msgs__msg__Error(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: footprint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->footprint.size + 1);

  // Field name: hook_status
  current_alignment += get_serialized_size_mir_msgs__msg__HookStatus(
    &(ros_message->hook_status), current_alignment);

  // Field name: hook_data
  current_alignment += get_serialized_size_mir_msgs__msg__HookData(
    &(ros_message->hook_data), current_alignment);

  // Field name: map_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map_id.size + 1);

  // Field name: unloaded_map_changes
  {
    size_t item_size = sizeof(ros_message->unloaded_map_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mission_queue_id
  {
    size_t item_size = sizeof(ros_message->mission_queue_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mission_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_text.size + 1);

  // Field name: mode_id
  {
    size_t item_size = sizeof(ros_message->mode_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode_text.size + 1);

  // Field name: moved
  {
    size_t item_size = sizeof(ros_message->moved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  current_alignment += get_serialized_size_mir_msgs__msg__Pose2D(
    &(ros_message->position), current_alignment);

  // Field name: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_name.size + 1);

  // Field name: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->session_id.size + 1);

  // Field name: software_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->software_version.size + 1);

  // Field name: state_id
  {
    size_t item_size = sizeof(ros_message->state_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state_text.size + 1);

  // Field name: uptime
  {
    size_t item_size = sizeof(ros_message->uptime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  current_alignment += get_serialized_size_mir_msgs__msg__Twist2D(
    &(ros_message->velocity), current_alignment);

  // Field name: user_prompt
  current_alignment += get_serialized_size_mir_msgs__msg__UserPrompt(
    &(ros_message->user_prompt), current_alignment);

  // Field name: safety_system_muted
  {
    size_t item_size = sizeof(ros_message->safety_system_muted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    size_t item_size = sizeof(ros_message->joystick_low_speed_mode_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick_web_session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joystick_web_session_id.size + 1);

  // Field name: mode_key_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode_key_state.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: battery_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_time_remaining
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_to_next_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: errors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__Error(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: footprint
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: hook_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__HookStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hook_data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__HookData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: map_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: unloaded_map_changes
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mission_queue_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mission_text
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: mode_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mode_text
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: moved
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robot_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: session_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: software_version
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: state_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: state_text
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: uptime
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: user_prompt
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__UserPrompt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: safety_system_muted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joystick_web_session_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: mode_key_state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__RobotStatus;
    is_plain =
      (
      offsetof(DataType, mode_key_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
bool cdr_serialize_key_mir_msgs__msg__RobotStatus(
  const mir_msgs__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: battery_time_remaining
  {
    cdr << ros_message->battery_time_remaining;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: distance_to_next_target
  {
    cdr << ros_message->distance_to_next_target;
  }

  // Field name: errors
  {
    size_t size = ros_message->errors.size;
    auto array_ptr = ros_message->errors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mir_msgs__msg__Error(
        &array_ptr[i], cdr);
    }
  }

  // Field name: footprint
  {
    const rosidl_runtime_c__String * str = &ros_message->footprint;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: hook_status
  {
    cdr_serialize_key_mir_msgs__msg__HookStatus(
      &ros_message->hook_status, cdr);
  }

  // Field name: hook_data
  {
    cdr_serialize_key_mir_msgs__msg__HookData(
      &ros_message->hook_data, cdr);
  }

  // Field name: map_id
  {
    const rosidl_runtime_c__String * str = &ros_message->map_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: unloaded_map_changes
  {
    cdr << (ros_message->unloaded_map_changes ? true : false);
  }

  // Field name: mission_queue_id
  {
    cdr << ros_message->mission_queue_id;
  }

  // Field name: mission_text
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mode_id
  {
    cdr << ros_message->mode_id;
  }

  // Field name: mode_text
  {
    const rosidl_runtime_c__String * str = &ros_message->mode_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: moved
  {
    cdr << ros_message->moved;
  }

  // Field name: position
  {
    cdr_serialize_key_mir_msgs__msg__Pose2D(
      &ros_message->position, cdr);
  }

  // Field name: robot_name
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: session_id
  {
    const rosidl_runtime_c__String * str = &ros_message->session_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: software_version
  {
    const rosidl_runtime_c__String * str = &ros_message->software_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state_id
  {
    cdr << ros_message->state_id;
  }

  // Field name: state_text
  {
    const rosidl_runtime_c__String * str = &ros_message->state_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: uptime
  {
    cdr << ros_message->uptime;
  }

  // Field name: velocity
  {
    cdr_serialize_key_mir_msgs__msg__Twist2D(
      &ros_message->velocity, cdr);
  }

  // Field name: user_prompt
  {
    cdr_serialize_key_mir_msgs__msg__UserPrompt(
      &ros_message->user_prompt, cdr);
  }

  // Field name: safety_system_muted
  {
    cdr << (ros_message->safety_system_muted ? true : false);
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    cdr << (ros_message->joystick_low_speed_mode_enabled ? true : false);
  }

  // Field name: joystick_web_session_id
  {
    const rosidl_runtime_c__String * str = &ros_message->joystick_web_session_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mode_key_state
  {
    const rosidl_runtime_c__String * str = &ros_message->mode_key_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_key_mir_msgs__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotStatus__ros_msg_type * ros_message = static_cast<const _RobotStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_time_remaining
  {
    size_t item_size = sizeof(ros_message->battery_time_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_to_next_target
  {
    size_t item_size = sizeof(ros_message->distance_to_next_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: errors
  {
    size_t array_size = ros_message->errors.size;
    auto array_ptr = ros_message->errors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mir_msgs__msg__Error(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: footprint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->footprint.size + 1);

  // Field name: hook_status
  current_alignment += get_serialized_size_key_mir_msgs__msg__HookStatus(
    &(ros_message->hook_status), current_alignment);

  // Field name: hook_data
  current_alignment += get_serialized_size_key_mir_msgs__msg__HookData(
    &(ros_message->hook_data), current_alignment);

  // Field name: map_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map_id.size + 1);

  // Field name: unloaded_map_changes
  {
    size_t item_size = sizeof(ros_message->unloaded_map_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mission_queue_id
  {
    size_t item_size = sizeof(ros_message->mission_queue_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mission_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_text.size + 1);

  // Field name: mode_id
  {
    size_t item_size = sizeof(ros_message->mode_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode_text.size + 1);

  // Field name: moved
  {
    size_t item_size = sizeof(ros_message->moved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  current_alignment += get_serialized_size_key_mir_msgs__msg__Pose2D(
    &(ros_message->position), current_alignment);

  // Field name: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_name.size + 1);

  // Field name: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->session_id.size + 1);

  // Field name: software_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->software_version.size + 1);

  // Field name: state_id
  {
    size_t item_size = sizeof(ros_message->state_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: state_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state_text.size + 1);

  // Field name: uptime
  {
    size_t item_size = sizeof(ros_message->uptime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  current_alignment += get_serialized_size_key_mir_msgs__msg__Twist2D(
    &(ros_message->velocity), current_alignment);

  // Field name: user_prompt
  current_alignment += get_serialized_size_key_mir_msgs__msg__UserPrompt(
    &(ros_message->user_prompt), current_alignment);

  // Field name: safety_system_muted
  {
    size_t item_size = sizeof(ros_message->safety_system_muted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    size_t item_size = sizeof(ros_message->joystick_low_speed_mode_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick_web_session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joystick_web_session_id.size + 1);

  // Field name: mode_key_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode_key_state.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_key_mir_msgs__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: battery_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_time_remaining
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_to_next_target
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: errors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__Error(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: footprint
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: hook_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__HookStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hook_data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__HookData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: map_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: unloaded_map_changes
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mission_queue_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mission_text
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: mode_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mode_text
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: moved
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robot_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: session_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: software_version
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: state_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: state_text
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: uptime
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: user_prompt
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mir_msgs__msg__UserPrompt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: safety_system_muted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joystick_low_speed_mode_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joystick_web_session_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: mode_key_state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__RobotStatus;
    is_plain =
      (
      offsetof(DataType, mode_key_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mir_msgs__msg__RobotStatus * ros_message = static_cast<const mir_msgs__msg__RobotStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mir_msgs__msg__RobotStatus(ros_message, cdr);
}

static bool _RobotStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mir_msgs__msg__RobotStatus * ros_message = static_cast<mir_msgs__msg__RobotStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mir_msgs__msg__RobotStatus(cdr, ros_message);
}

static uint32_t _RobotStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__RobotStatus(
      untyped_ros_message, 0));
}

static size_t _RobotStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__RobotStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotStatus = {
  "mir_msgs::msg",
  "RobotStatus",
  _RobotStatus__cdr_serialize,
  _RobotStatus__cdr_deserialize,
  _RobotStatus__get_serialized_size,
  _RobotStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotStatus,
  get_message_typesupport_handle_function,
  &mir_msgs__msg__RobotStatus__get_type_hash,
  &mir_msgs__msg__RobotStatus__get_type_description,
  &mir_msgs__msg__RobotStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, RobotStatus)() {
  return &_RobotStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
