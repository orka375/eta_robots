// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:action/SendScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/action/send_script.h"


#ifndef UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__STRUCT_H_
#define UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__STRUCT_H_

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

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_Goal
{
  rosidl_runtime_c__String program;
  /// Name for the script which will be used in various log messages. This will be ignored, if a name is already defined in the script code itself.
  rosidl_runtime_c__String script_name;
  /// The maximum amount of time that is allowed to pass, before the script must be confirmed to have started
  builtin_interfaces__msg__Duration start_timeout;
  /// Whether the script execution should report as failed, if the robot generates a warning during execution
  bool fail_on_warnings;
} ur_msgs__action__SendScript_Goal;

// Struct for a sequence of ur_msgs__action__SendScript_Goal.
typedef struct ur_msgs__action__SendScript_Goal__Sequence
{
  ur_msgs__action__SendScript_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_Result
{
  bool success;
  /// Message containing the cause of failure, if any.
  rosidl_runtime_c__String message;
} ur_msgs__action__SendScript_Result;

// Struct for a sequence of ur_msgs__action__SendScript_Result.
typedef struct ur_msgs__action__SendScript_Result__Sequence
{
  ur_msgs__action__SendScript_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} ur_msgs__action__SendScript_Feedback;

// Struct for a sequence of ur_msgs__action__SendScript_Feedback.
typedef struct ur_msgs__action__SendScript_Feedback__Sequence
{
  ur_msgs__action__SendScript_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ur_msgs/action/detail/send_script__struct.h"

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_msgs__action__SendScript_Goal goal;
} ur_msgs__action__SendScript_SendGoal_Request;

// Struct for a sequence of ur_msgs__action__SendScript_SendGoal_Request.
typedef struct ur_msgs__action__SendScript_SendGoal_Request__Sequence
{
  ur_msgs__action__SendScript_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ur_msgs__action__SendScript_SendGoal_Response;

// Struct for a sequence of ur_msgs__action__SendScript_SendGoal_Response.
typedef struct ur_msgs__action__SendScript_SendGoal_Response__Sequence
{
  ur_msgs__action__SendScript_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__action__SendScript_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__action__SendScript_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__action__SendScript_SendGoal_Request__Sequence request;
  ur_msgs__action__SendScript_SendGoal_Response__Sequence response;
} ur_msgs__action__SendScript_SendGoal_Event;

// Struct for a sequence of ur_msgs__action__SendScript_SendGoal_Event.
typedef struct ur_msgs__action__SendScript_SendGoal_Event__Sequence
{
  ur_msgs__action__SendScript_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ur_msgs__action__SendScript_GetResult_Request;

// Struct for a sequence of ur_msgs__action__SendScript_GetResult_Request.
typedef struct ur_msgs__action__SendScript_GetResult_Request__Sequence
{
  ur_msgs__action__SendScript_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_msgs/action/detail/send_script__struct.h"

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_GetResult_Response
{
  int8_t status;
  ur_msgs__action__SendScript_Result result;
} ur_msgs__action__SendScript_GetResult_Response;

// Struct for a sequence of ur_msgs__action__SendScript_GetResult_Response.
typedef struct ur_msgs__action__SendScript_GetResult_Response__Sequence
{
  ur_msgs__action__SendScript_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__action__SendScript_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__action__SendScript_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__action__SendScript_GetResult_Request__Sequence request;
  ur_msgs__action__SendScript_GetResult_Response__Sequence response;
} ur_msgs__action__SendScript_GetResult_Event;

// Struct for a sequence of ur_msgs__action__SendScript_GetResult_Event.
typedef struct ur_msgs__action__SendScript_GetResult_Event__Sequence
{
  ur_msgs__action__SendScript_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ur_msgs/action/detail/send_script__struct.h"

/// Struct defined in action/SendScript in the package ur_msgs.
typedef struct ur_msgs__action__SendScript_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_msgs__action__SendScript_Feedback feedback;
} ur_msgs__action__SendScript_FeedbackMessage;

// Struct for a sequence of ur_msgs__action__SendScript_FeedbackMessage.
typedef struct ur_msgs__action__SendScript_FeedbackMessage__Sequence
{
  ur_msgs__action__SendScript_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__SendScript_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__ACTION__DETAIL__SEND_SCRIPT__STRUCT_H_
