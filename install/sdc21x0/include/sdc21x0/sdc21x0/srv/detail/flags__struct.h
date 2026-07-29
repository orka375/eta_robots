// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdc21x0/srv/flags.h"


#ifndef SDC21X0__SRV__DETAIL__FLAGS__STRUCT_H_
#define SDC21X0__SRV__DETAIL__FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Flags in the package sdc21x0.
typedef struct sdc21x0__srv__Flags_Request
{
  int32_t digital_port;
} sdc21x0__srv__Flags_Request;

// Struct for a sequence of sdc21x0__srv__Flags_Request.
typedef struct sdc21x0__srv__Flags_Request__Sequence
{
  sdc21x0__srv__Flags_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__srv__Flags_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Flags in the package sdc21x0.
typedef struct sdc21x0__srv__Flags_Response
{
  bool response;
} sdc21x0__srv__Flags_Response;

// Struct for a sequence of sdc21x0__srv__Flags_Response.
typedef struct sdc21x0__srv__Flags_Response__Sequence
{
  sdc21x0__srv__Flags_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__srv__Flags_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sdc21x0__srv__Flags_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sdc21x0__srv__Flags_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Flags in the package sdc21x0.
typedef struct sdc21x0__srv__Flags_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sdc21x0__srv__Flags_Request__Sequence request;
  sdc21x0__srv__Flags_Response__Sequence response;
} sdc21x0__srv__Flags_Event;

// Struct for a sequence of sdc21x0__srv__Flags_Event.
typedef struct sdc21x0__srv__Flags_Event__Sequence
{
  sdc21x0__srv__Flags_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__srv__Flags_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__SRV__DETAIL__FLAGS__STRUCT_H_
