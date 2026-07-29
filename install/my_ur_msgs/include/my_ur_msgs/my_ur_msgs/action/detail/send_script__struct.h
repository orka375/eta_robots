// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ur_msgs:action/SendScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ur_msgs/action/send_script.h"


#ifndef MY_UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__STRUCT_H_
#define MY_UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'program'
// Member 'script_name'
#include "rosidl_runtime_c/string.h"
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_Goal
{
  rosidl_runtime_c__String program;
  /// Name for the script which will be used in various log messages.
  /// This will be ignored if a name is already defined in the script code itself.
  rosidl_runtime_c__String script_name;
  /// Maximum time allowed before the script must be confirmed to have started.
  builtin_interfaces__msg__Duration start_timeout;
  /// Whether the script execution should report as failed if the robot generates a warning.
  bool fail_on_warnings;
} my_ur_msgs__action__SendScript_Goal;

// Struct for a sequence of my_ur_msgs__action__SendScript_Goal.
typedef struct my_ur_msgs__action__SendScript_Goal__Sequence
{
  my_ur_msgs__action__SendScript_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_Result
{
  /// Result
  /// Whether the script was successfully executed.
  bool success;
  /// Message containing the cause of failure, if any.
  rosidl_runtime_c__String message;
} my_ur_msgs__action__SendScript_Result;

// Struct for a sequence of my_ur_msgs__action__SendScript_Result.
typedef struct my_ur_msgs__action__SendScript_Result__Sequence
{
  my_ur_msgs__action__SendScript_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_Feedback
{
  /// Feedback
  /// Add feedback fields if needed
  float progress;
} my_ur_msgs__action__SendScript_Feedback;

// Struct for a sequence of my_ur_msgs__action__SendScript_Feedback.
typedef struct my_ur_msgs__action__SendScript_Feedback__Sequence
{
  my_ur_msgs__action__SendScript_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_ur_msgs/action/detail/send_script__struct.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_ur_msgs__action__SendScript_Goal goal;
} my_ur_msgs__action__SendScript_SendGoal_Request;

// Struct for a sequence of my_ur_msgs__action__SendScript_SendGoal_Request.
typedef struct my_ur_msgs__action__SendScript_SendGoal_Request__Sequence
{
  my_ur_msgs__action__SendScript_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_ur_msgs__action__SendScript_SendGoal_Response;

// Struct for a sequence of my_ur_msgs__action__SendScript_SendGoal_Response.
typedef struct my_ur_msgs__action__SendScript_SendGoal_Response__Sequence
{
  my_ur_msgs__action__SendScript_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_ur_msgs__action__SendScript_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_ur_msgs__action__SendScript_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_ur_msgs__action__SendScript_SendGoal_Request__Sequence request;
  my_ur_msgs__action__SendScript_SendGoal_Response__Sequence response;
} my_ur_msgs__action__SendScript_SendGoal_Event;

// Struct for a sequence of my_ur_msgs__action__SendScript_SendGoal_Event.
typedef struct my_ur_msgs__action__SendScript_SendGoal_Event__Sequence
{
  my_ur_msgs__action__SendScript_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_ur_msgs__action__SendScript_GetResult_Request;

// Struct for a sequence of my_ur_msgs__action__SendScript_GetResult_Request.
typedef struct my_ur_msgs__action__SendScript_GetResult_Request__Sequence
{
  my_ur_msgs__action__SendScript_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_GetResult_Response
{
  int8_t status;
  my_ur_msgs__action__SendScript_Result result;
} my_ur_msgs__action__SendScript_GetResult_Response;

// Struct for a sequence of my_ur_msgs__action__SendScript_GetResult_Response.
typedef struct my_ur_msgs__action__SendScript_GetResult_Response__Sequence
{
  my_ur_msgs__action__SendScript_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_ur_msgs__action__SendScript_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_ur_msgs__action__SendScript_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_ur_msgs__action__SendScript_GetResult_Request__Sequence request;
  my_ur_msgs__action__SendScript_GetResult_Response__Sequence response;
} my_ur_msgs__action__SendScript_GetResult_Event;

// Struct for a sequence of my_ur_msgs__action__SendScript_GetResult_Event.
typedef struct my_ur_msgs__action__SendScript_GetResult_Event__Sequence
{
  my_ur_msgs__action__SendScript_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.h"

/// Struct defined in action/SendScript in the package my_ur_msgs.
typedef struct my_ur_msgs__action__SendScript_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_ur_msgs__action__SendScript_Feedback feedback;
} my_ur_msgs__action__SendScript_FeedbackMessage;

// Struct for a sequence of my_ur_msgs__action__SendScript_FeedbackMessage.
typedef struct my_ur_msgs__action__SendScript_FeedbackMessage__Sequence
{
  my_ur_msgs__action__SendScript_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ur_msgs__action__SendScript_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__STRUCT_H_
