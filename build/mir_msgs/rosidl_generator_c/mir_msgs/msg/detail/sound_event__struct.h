// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/SoundEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/sound_event.h"


#ifndef MIR_MSGS__MSG__DETAIL__SOUND_EVENT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__SOUND_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'START'.
enum
{
  mir_msgs__msg__SoundEvent__START = 0
};

/// Constant 'STOP'.
enum
{
  mir_msgs__msg__SoundEvent__STOP = 1
};

/// Constant 'MUTE'.
enum
{
  mir_msgs__msg__SoundEvent__MUTE = 2
};

/// Constant 'UNMUTE'.
enum
{
  mir_msgs__msg__SoundEvent__UNMUTE = 3
};

/// Constant 'PAUSE'.
enum
{
  mir_msgs__msg__SoundEvent__PAUSE = 4
};

/// Constant 'UNPAUSE'.
enum
{
  mir_msgs__msg__SoundEvent__UNPAUSE = 5
};

/// Constant 'FINISH'.
enum
{
  mir_msgs__msg__SoundEvent__FINISH = 6
};

/// Constant 'MUTEABLE'.
enum
{
  mir_msgs__msg__SoundEvent__MUTEABLE = 7
};

/// Constant 'REQ_PLAY'.
enum
{
  mir_msgs__msg__SoundEvent__REQ_PLAY = 10
};

// Include directives for member types
// Member 'time_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'sound_guid'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SoundEvent in the package mir_msgs.
typedef struct mir_msgs__msg__SoundEvent
{
  builtin_interfaces__msg__Time time_stamp;
  rosidl_runtime_c__String sound_guid;
  rosidl_runtime_c__String message;
  uint8_t event;
} mir_msgs__msg__SoundEvent;

// Struct for a sequence of mir_msgs__msg__SoundEvent.
typedef struct mir_msgs__msg__SoundEvent__Sequence
{
  mir_msgs__msg__SoundEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__SoundEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__SOUND_EVENT__STRUCT_H_
