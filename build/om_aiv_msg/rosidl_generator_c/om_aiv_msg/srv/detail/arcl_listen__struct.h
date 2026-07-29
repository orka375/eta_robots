// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from om_aiv_msg:srv/ArclListen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "om_aiv_msg/srv/arcl_listen.h"


#ifndef OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__STRUCT_H_
#define OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'resp_header'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ArclListen in the package om_aiv_msg.
typedef struct om_aiv_msg__srv__ArclListen_Request
{
  rosidl_runtime_c__String resp_header;
} om_aiv_msg__srv__ArclListen_Request;

// Struct for a sequence of om_aiv_msg__srv__ArclListen_Request.
typedef struct om_aiv_msg__srv__ArclListen_Request__Sequence
{
  om_aiv_msg__srv__ArclListen_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} om_aiv_msg__srv__ArclListen_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'resp_text'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ArclListen in the package om_aiv_msg.
typedef struct om_aiv_msg__srv__ArclListen_Response
{
  rosidl_runtime_c__String resp_text;
} om_aiv_msg__srv__ArclListen_Response;

// Struct for a sequence of om_aiv_msg__srv__ArclListen_Response.
typedef struct om_aiv_msg__srv__ArclListen_Response__Sequence
{
  om_aiv_msg__srv__ArclListen_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} om_aiv_msg__srv__ArclListen_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  om_aiv_msg__srv__ArclListen_Event__request__MAX_SIZE = 1
};
// response
enum
{
  om_aiv_msg__srv__ArclListen_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ArclListen in the package om_aiv_msg.
typedef struct om_aiv_msg__srv__ArclListen_Event
{
  service_msgs__msg__ServiceEventInfo info;
  om_aiv_msg__srv__ArclListen_Request__Sequence request;
  om_aiv_msg__srv__ArclListen_Response__Sequence response;
} om_aiv_msg__srv__ArclListen_Event;

// Struct for a sequence of om_aiv_msg__srv__ArclListen_Event.
typedef struct om_aiv_msg__srv__ArclListen_Event__Sequence
{
  om_aiv_msg__srv__ArclListen_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} om_aiv_msg__srv__ArclListen_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__STRUCT_H_
