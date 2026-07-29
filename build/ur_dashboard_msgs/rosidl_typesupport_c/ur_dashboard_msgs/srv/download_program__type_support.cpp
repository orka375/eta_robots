// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:srv/DownloadProgram.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_dashboard_msgs/srv/detail/download_program__struct.h"
#include "ur_dashboard_msgs/srv/detail/download_program__type_support.h"
#include "ur_dashboard_msgs/srv/detail/download_program__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DownloadProgram_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadProgram_Request_type_support_ids_t;

static const _DownloadProgram_Request_type_support_ids_t _DownloadProgram_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DownloadProgram_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadProgram_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadProgram_Request_type_support_symbol_names_t _DownloadProgram_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, DownloadProgram_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, DownloadProgram_Request)),
  }
};

typedef struct _DownloadProgram_Request_type_support_data_t
{
  void * data[2];
} _DownloadProgram_Request_type_support_data_t;

static _DownloadProgram_Request_type_support_data_t _DownloadProgram_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadProgram_Request_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_DownloadProgram_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DownloadProgram_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DownloadProgram_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DownloadProgram_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadProgram_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__DownloadProgram_Request__get_type_hash,
  &ur_dashboard_msgs__srv__DownloadProgram_Request__get_type_description,
  &ur_dashboard_msgs__srv__DownloadProgram_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, DownloadProgram_Request)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::DownloadProgram_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__type_support.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DownloadProgram_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadProgram_Response_type_support_ids_t;

static const _DownloadProgram_Response_type_support_ids_t _DownloadProgram_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DownloadProgram_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadProgram_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadProgram_Response_type_support_symbol_names_t _DownloadProgram_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, DownloadProgram_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, DownloadProgram_Response)),
  }
};

typedef struct _DownloadProgram_Response_type_support_data_t
{
  void * data[2];
} _DownloadProgram_Response_type_support_data_t;

static _DownloadProgram_Response_type_support_data_t _DownloadProgram_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadProgram_Response_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_DownloadProgram_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DownloadProgram_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DownloadProgram_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DownloadProgram_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadProgram_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__DownloadProgram_Response__get_type_hash,
  &ur_dashboard_msgs__srv__DownloadProgram_Response__get_type_description,
  &ur_dashboard_msgs__srv__DownloadProgram_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, DownloadProgram_Response)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::DownloadProgram_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__type_support.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DownloadProgram_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadProgram_Event_type_support_ids_t;

static const _DownloadProgram_Event_type_support_ids_t _DownloadProgram_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DownloadProgram_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadProgram_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadProgram_Event_type_support_symbol_names_t _DownloadProgram_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, DownloadProgram_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, DownloadProgram_Event)),
  }
};

typedef struct _DownloadProgram_Event_type_support_data_t
{
  void * data[2];
} _DownloadProgram_Event_type_support_data_t;

static _DownloadProgram_Event_type_support_data_t _DownloadProgram_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadProgram_Event_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_DownloadProgram_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DownloadProgram_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DownloadProgram_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DownloadProgram_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadProgram_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__DownloadProgram_Event__get_type_hash,
  &ur_dashboard_msgs__srv__DownloadProgram_Event__get_type_description,
  &ur_dashboard_msgs__srv__DownloadProgram_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, DownloadProgram_Event)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::DownloadProgram_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/download_program__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _DownloadProgram_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DownloadProgram_type_support_ids_t;

static const _DownloadProgram_type_support_ids_t _DownloadProgram_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DownloadProgram_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DownloadProgram_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DownloadProgram_type_support_symbol_names_t _DownloadProgram_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, DownloadProgram)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, DownloadProgram)),
  }
};

typedef struct _DownloadProgram_type_support_data_t
{
  void * data[2];
} _DownloadProgram_type_support_data_t;

static _DownloadProgram_type_support_data_t _DownloadProgram_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DownloadProgram_service_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_DownloadProgram_service_typesupport_ids.typesupport_identifier[0],
  &_DownloadProgram_service_typesupport_symbol_names.symbol_name[0],
  &_DownloadProgram_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DownloadProgram_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DownloadProgram_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DownloadProgram_Request_message_type_support_handle,
  &DownloadProgram_Response_message_type_support_handle,
  &DownloadProgram_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_dashboard_msgs,
    srv,
    DownloadProgram
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_dashboard_msgs,
    srv,
    DownloadProgram
  ),
  &ur_dashboard_msgs__srv__DownloadProgram__get_type_hash,
  &ur_dashboard_msgs__srv__DownloadProgram__get_type_description,
  &ur_dashboard_msgs__srv__DownloadProgram__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, DownloadProgram)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::DownloadProgram_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
