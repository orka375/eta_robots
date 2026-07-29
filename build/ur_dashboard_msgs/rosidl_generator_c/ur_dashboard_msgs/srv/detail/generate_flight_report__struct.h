// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_dashboard_msgs:srv/GenerateFlightReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_dashboard_msgs/srv/generate_flight_report.h"


#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__GENERATE_FLIGHT_REPORT__STRUCT_H_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__GENERATE_FLIGHT_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROLLER'.
static const char * const ur_dashboard_msgs__srv__GenerateFlightReport_Request__CONTROLLER = "controller";

/// Constant 'SOFTWARE'.
static const char * const ur_dashboard_msgs__srv__GenerateFlightReport_Request__SOFTWARE = "software";

/// Constant 'SYSTEM'.
static const char * const ur_dashboard_msgs__srv__GenerateFlightReport_Request__SYSTEM = "system";

// Include directives for member types
// Member 'report_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateFlightReport in the package ur_dashboard_msgs.
typedef struct ur_dashboard_msgs__srv__GenerateFlightReport_Request
{
  /// Same default as in the dashboard server
  rosidl_runtime_c__String report_type;
} ur_dashboard_msgs__srv__GenerateFlightReport_Request;

// Struct for a sequence of ur_dashboard_msgs__srv__GenerateFlightReport_Request.
typedef struct ur_dashboard_msgs__srv__GenerateFlightReport_Request__Sequence
{
  ur_dashboard_msgs__srv__GenerateFlightReport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_dashboard_msgs__srv__GenerateFlightReport_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'answer'
// Member 'report_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateFlightReport in the package ur_dashboard_msgs.
typedef struct ur_dashboard_msgs__srv__GenerateFlightReport_Response
{
  bool success;
  rosidl_runtime_c__String answer;
  rosidl_runtime_c__String report_id;
} ur_dashboard_msgs__srv__GenerateFlightReport_Response;

// Struct for a sequence of ur_dashboard_msgs__srv__GenerateFlightReport_Response.
typedef struct ur_dashboard_msgs__srv__GenerateFlightReport_Response__Sequence
{
  ur_dashboard_msgs__srv__GenerateFlightReport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_dashboard_msgs__srv__GenerateFlightReport_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_dashboard_msgs__srv__GenerateFlightReport_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_dashboard_msgs__srv__GenerateFlightReport_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GenerateFlightReport in the package ur_dashboard_msgs.
typedef struct ur_dashboard_msgs__srv__GenerateFlightReport_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_dashboard_msgs__srv__GenerateFlightReport_Request__Sequence request;
  ur_dashboard_msgs__srv__GenerateFlightReport_Response__Sequence response;
} ur_dashboard_msgs__srv__GenerateFlightReport_Event;

// Struct for a sequence of ur_dashboard_msgs__srv__GenerateFlightReport_Event.
typedef struct ur_dashboard_msgs__srv__GenerateFlightReport_Event__Sequence
{
  ur_dashboard_msgs__srv__GenerateFlightReport_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_dashboard_msgs__srv__GenerateFlightReport_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__GENERATE_FLIGHT_REPORT__STRUCT_H_
