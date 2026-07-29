// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:srv/SetGravity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_gravity.h"


#ifndef UR_MSGS__SRV__DETAIL__SET_GRAVITY__STRUCT_H_
#define UR_MSGS__SRV__DETAIL__SET_GRAVITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gravity'
#include "geometry_msgs/msg/detail/vector3_stamped__struct.h"

/// Struct defined in srv/SetGravity in the package ur_msgs.
typedef struct ur_msgs__srv__SetGravity_Request
{
  geometry_msgs__msg__Vector3Stamped gravity;
} ur_msgs__srv__SetGravity_Request;

// Struct for a sequence of ur_msgs__srv__SetGravity_Request.
typedef struct ur_msgs__srv__SetGravity_Request__Sequence
{
  ur_msgs__srv__SetGravity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetGravity_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGravity in the package ur_msgs.
typedef struct ur_msgs__srv__SetGravity_Response
{
  bool success;
  rosidl_runtime_c__String status;
} ur_msgs__srv__SetGravity_Response;

// Struct for a sequence of ur_msgs__srv__SetGravity_Response.
typedef struct ur_msgs__srv__SetGravity_Response__Sequence
{
  ur_msgs__srv__SetGravity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetGravity_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__srv__SetGravity_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__srv__SetGravity_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGravity in the package ur_msgs.
typedef struct ur_msgs__srv__SetGravity_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__srv__SetGravity_Request__Sequence request;
  ur_msgs__srv__SetGravity_Response__Sequence response;
} ur_msgs__srv__SetGravity_Event;

// Struct for a sequence of ur_msgs__srv__SetGravity_Event.
typedef struct ur_msgs__srv__SetGravity_Event__Sequence
{
  ur_msgs__srv__SetGravity_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetGravity_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__SRV__DETAIL__SET_GRAVITY__STRUCT_H_
