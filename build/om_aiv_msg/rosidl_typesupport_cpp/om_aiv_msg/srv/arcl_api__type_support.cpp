// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from om_aiv_msg:srv/ArclApi.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "om_aiv_msg/srv/detail/arcl_api__functions.h"
#include "om_aiv_msg/srv/detail/arcl_api__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclApi_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclApi_Request_type_support_ids_t;

static const _ArclApi_Request_type_support_ids_t _ArclApi_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclApi_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclApi_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclApi_Request_type_support_symbol_names_t _ArclApi_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclApi_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclApi_Request)),
  }
};

typedef struct _ArclApi_Request_type_support_data_t
{
  void * data[2];
} _ArclApi_Request_type_support_data_t;

static _ArclApi_Request_type_support_data_t _ArclApi_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclApi_Request_message_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclApi_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ArclApi_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ArclApi_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArclApi_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclApi_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &om_aiv_msg__srv__ArclApi_Request__get_type_hash,
  &om_aiv_msg__srv__ArclApi_Request__get_type_description,
  &om_aiv_msg__srv__ArclApi_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Request>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclApi_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclApi_Request)() {
  return get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_api__functions.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_api__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclApi_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclApi_Response_type_support_ids_t;

static const _ArclApi_Response_type_support_ids_t _ArclApi_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclApi_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclApi_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclApi_Response_type_support_symbol_names_t _ArclApi_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclApi_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclApi_Response)),
  }
};

typedef struct _ArclApi_Response_type_support_data_t
{
  void * data[2];
} _ArclApi_Response_type_support_data_t;

static _ArclApi_Response_type_support_data_t _ArclApi_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclApi_Response_message_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclApi_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ArclApi_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ArclApi_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArclApi_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclApi_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &om_aiv_msg__srv__ArclApi_Response__get_type_hash,
  &om_aiv_msg__srv__ArclApi_Response__get_type_description,
  &om_aiv_msg__srv__ArclApi_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Response>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclApi_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclApi_Response)() {
  return get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_api__functions.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_api__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclApi_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclApi_Event_type_support_ids_t;

static const _ArclApi_Event_type_support_ids_t _ArclApi_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclApi_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclApi_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclApi_Event_type_support_symbol_names_t _ArclApi_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclApi_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclApi_Event)),
  }
};

typedef struct _ArclApi_Event_type_support_data_t
{
  void * data[2];
} _ArclApi_Event_type_support_data_t;

static _ArclApi_Event_type_support_data_t _ArclApi_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclApi_Event_message_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclApi_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ArclApi_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ArclApi_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArclApi_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclApi_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &om_aiv_msg__srv__ArclApi_Event__get_type_hash,
  &om_aiv_msg__srv__ArclApi_Event__get_type_description,
  &om_aiv_msg__srv__ArclApi_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Event>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclApi_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclApi_Event)() {
  return get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_api__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclApi_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclApi_type_support_ids_t;

static const _ArclApi_type_support_ids_t _ArclApi_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclApi_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclApi_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclApi_type_support_symbol_names_t _ArclApi_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclApi)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclApi)),
  }
};

typedef struct _ArclApi_type_support_data_t
{
  void * data[2];
} _ArclApi_type_support_data_t;

static _ArclApi_type_support_data_t _ArclApi_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclApi_service_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclApi_service_typesupport_ids.typesupport_identifier[0],
  &_ArclApi_service_typesupport_symbol_names.symbol_name[0],
  &_ArclApi_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ArclApi_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclApi_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<om_aiv_msg::srv::ArclApi_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<om_aiv_msg::srv::ArclApi>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<om_aiv_msg::srv::ArclApi>,
  &om_aiv_msg__srv__ArclApi__get_type_hash,
  &om_aiv_msg__srv__ArclApi__get_type_description,
  &om_aiv_msg__srv__ArclApi__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<om_aiv_msg::srv::ArclApi>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclApi_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclApi)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<om_aiv_msg::srv::ArclApi>();
}

#ifdef __cplusplus
}
#endif
