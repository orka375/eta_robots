// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_ur_msgs:action/SendScript.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_ur_msgs/action/detail/send_script__functions.h"
#include "my_ur_msgs/action/detail/send_script__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_Goal_type_support_ids_t;

static const _SendScript_Goal_type_support_ids_t _SendScript_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_Goal_type_support_symbol_names_t _SendScript_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_Goal)),
  }
};

typedef struct _SendScript_Goal_type_support_data_t
{
  void * data[2];
} _SendScript_Goal_type_support_data_t;

static _SendScript_Goal_type_support_data_t _SendScript_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_Goal_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_Goal__get_type_hash,
  &my_ur_msgs__action__SendScript_Goal__get_type_description,
  &my_ur_msgs__action__SendScript_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_Goal>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_Goal)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_Goal>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_Result_type_support_ids_t;

static const _SendScript_Result_type_support_ids_t _SendScript_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_Result_type_support_symbol_names_t _SendScript_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_Result)),
  }
};

typedef struct _SendScript_Result_type_support_data_t
{
  void * data[2];
} _SendScript_Result_type_support_data_t;

static _SendScript_Result_type_support_data_t _SendScript_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_Result_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_Result__get_type_hash,
  &my_ur_msgs__action__SendScript_Result__get_type_description,
  &my_ur_msgs__action__SendScript_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_Result>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_Result)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_Result>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_Feedback_type_support_ids_t;

static const _SendScript_Feedback_type_support_ids_t _SendScript_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_Feedback_type_support_symbol_names_t _SendScript_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_Feedback)),
  }
};

typedef struct _SendScript_Feedback_type_support_data_t
{
  void * data[2];
} _SendScript_Feedback_type_support_data_t;

static _SendScript_Feedback_type_support_data_t _SendScript_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_Feedback_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_Feedback__get_type_hash,
  &my_ur_msgs__action__SendScript_Feedback__get_type_description,
  &my_ur_msgs__action__SendScript_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_Feedback>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_Feedback)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_Feedback>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_SendGoal_Request_type_support_ids_t;

static const _SendScript_SendGoal_Request_type_support_ids_t _SendScript_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_SendGoal_Request_type_support_symbol_names_t _SendScript_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_SendGoal_Request)),
  }
};

typedef struct _SendScript_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SendScript_SendGoal_Request_type_support_data_t;

static _SendScript_SendGoal_Request_type_support_data_t _SendScript_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_SendGoal_Request_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_SendGoal_Request__get_type_hash,
  &my_ur_msgs__action__SendScript_SendGoal_Request__get_type_description,
  &my_ur_msgs__action__SendScript_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Request>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_SendGoal_Request)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Request>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_SendGoal_Response_type_support_ids_t;

static const _SendScript_SendGoal_Response_type_support_ids_t _SendScript_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_SendGoal_Response_type_support_symbol_names_t _SendScript_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_SendGoal_Response)),
  }
};

typedef struct _SendScript_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SendScript_SendGoal_Response_type_support_data_t;

static _SendScript_SendGoal_Response_type_support_data_t _SendScript_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_SendGoal_Response_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_SendGoal_Response__get_type_hash,
  &my_ur_msgs__action__SendScript_SendGoal_Response__get_type_description,
  &my_ur_msgs__action__SendScript_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Response>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_SendGoal_Response)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Response>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_SendGoal_Event_type_support_ids_t;

static const _SendScript_SendGoal_Event_type_support_ids_t _SendScript_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_SendGoal_Event_type_support_symbol_names_t _SendScript_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_SendGoal_Event)),
  }
};

typedef struct _SendScript_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _SendScript_SendGoal_Event_type_support_data_t;

static _SendScript_SendGoal_Event_type_support_data_t _SendScript_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_SendGoal_Event_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_SendGoal_Event__get_type_hash,
  &my_ur_msgs__action__SendScript_SendGoal_Event__get_type_description,
  &my_ur_msgs__action__SendScript_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Event>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_SendGoal_Event)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Event>();
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
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_SendGoal_type_support_ids_t;

static const _SendScript_SendGoal_type_support_ids_t _SendScript_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_SendGoal_type_support_symbol_names_t _SendScript_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_SendGoal)),
  }
};

typedef struct _SendScript_SendGoal_type_support_data_t
{
  void * data[2];
} _SendScript_SendGoal_type_support_data_t;

static _SendScript_SendGoal_type_support_data_t _SendScript_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_SendGoal_service_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SendScript_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SendScript_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendScript_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_ur_msgs::action::SendScript_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_ur_msgs::action::SendScript_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_ur_msgs::action::SendScript_SendGoal>,
  &my_ur_msgs__action__SendScript_SendGoal__get_type_hash,
  &my_ur_msgs__action__SendScript_SendGoal__get_type_description,
  &my_ur_msgs__action__SendScript_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_ur_msgs::action::SendScript_SendGoal>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_ur_msgs::action::SendScript_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_GetResult_Request_type_support_ids_t;

static const _SendScript_GetResult_Request_type_support_ids_t _SendScript_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_GetResult_Request_type_support_symbol_names_t _SendScript_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_GetResult_Request)),
  }
};

typedef struct _SendScript_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SendScript_GetResult_Request_type_support_data_t;

static _SendScript_GetResult_Request_type_support_data_t _SendScript_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_GetResult_Request_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_GetResult_Request__get_type_hash,
  &my_ur_msgs__action__SendScript_GetResult_Request__get_type_description,
  &my_ur_msgs__action__SendScript_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Request>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_GetResult_Request)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Request>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_GetResult_Response_type_support_ids_t;

static const _SendScript_GetResult_Response_type_support_ids_t _SendScript_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_GetResult_Response_type_support_symbol_names_t _SendScript_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_GetResult_Response)),
  }
};

typedef struct _SendScript_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SendScript_GetResult_Response_type_support_data_t;

static _SendScript_GetResult_Response_type_support_data_t _SendScript_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_GetResult_Response_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_GetResult_Response__get_type_hash,
  &my_ur_msgs__action__SendScript_GetResult_Response__get_type_description,
  &my_ur_msgs__action__SendScript_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Response>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_GetResult_Response)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Response>();
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
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_GetResult_Event_type_support_ids_t;

static const _SendScript_GetResult_Event_type_support_ids_t _SendScript_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_GetResult_Event_type_support_symbol_names_t _SendScript_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_GetResult_Event)),
  }
};

typedef struct _SendScript_GetResult_Event_type_support_data_t
{
  void * data[2];
} _SendScript_GetResult_Event_type_support_data_t;

static _SendScript_GetResult_Event_type_support_data_t _SendScript_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_GetResult_Event_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_GetResult_Event__get_type_hash,
  &my_ur_msgs__action__SendScript_GetResult_Event__get_type_description,
  &my_ur_msgs__action__SendScript_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Event>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_GetResult_Event)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_GetResult_type_support_ids_t;

static const _SendScript_GetResult_type_support_ids_t _SendScript_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_GetResult_type_support_symbol_names_t _SendScript_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_GetResult)),
  }
};

typedef struct _SendScript_GetResult_type_support_data_t
{
  void * data[2];
} _SendScript_GetResult_type_support_data_t;

static _SendScript_GetResult_type_support_data_t _SendScript_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_GetResult_service_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SendScript_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SendScript_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendScript_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_ur_msgs::action::SendScript_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_ur_msgs::action::SendScript_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_ur_msgs::action::SendScript_GetResult>,
  &my_ur_msgs__action__SendScript_GetResult__get_type_hash,
  &my_ur_msgs__action__SendScript_GetResult__get_type_description,
  &my_ur_msgs__action__SendScript_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_ur_msgs::action::SendScript_GetResult>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_ur_msgs::action::SendScript_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__functions.h"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
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

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendScript_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendScript_FeedbackMessage_type_support_ids_t;

static const _SendScript_FeedbackMessage_type_support_ids_t _SendScript_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendScript_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendScript_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendScript_FeedbackMessage_type_support_symbol_names_t _SendScript_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ur_msgs, action, SendScript_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_ur_msgs, action, SendScript_FeedbackMessage)),
  }
};

typedef struct _SendScript_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SendScript_FeedbackMessage_type_support_data_t;

static _SendScript_FeedbackMessage_type_support_data_t _SendScript_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendScript_FeedbackMessage_message_typesupport_map = {
  2,
  "my_ur_msgs",
  &_SendScript_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SendScript_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SendScript_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendScript_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendScript_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_ur_msgs__action__SendScript_FeedbackMessage__get_type_hash,
  &my_ur_msgs__action__SendScript_FeedbackMessage__get_type_description,
  &my_ur_msgs__action__SendScript_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_ur_msgs::action::SendScript_FeedbackMessage>()
{
  return &::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript_FeedbackMessage)() {
  return get_message_type_support_handle<my_ur_msgs::action::SendScript_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_ur_msgs/action/detail/send_script__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace my_ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t SendScript_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &my_ur_msgs__action__SendScript__get_type_hash,
  &my_ur_msgs__action__SendScript__get_type_description,
  &my_ur_msgs__action__SendScript__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_ur_msgs::action::SendScript>()
{
  using ::my_ur_msgs::action::rosidl_typesupport_cpp::SendScript_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  SendScript_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_ur_msgs::action::SendScript::Impl::SendGoalService>();
  SendScript_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_ur_msgs::action::SendScript::Impl::GetResultService>();
  SendScript_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_ur_msgs::action::SendScript::Impl::CancelGoalService>();
  SendScript_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_ur_msgs::action::SendScript::Impl::FeedbackMessage>();
  SendScript_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_ur_msgs::action::SendScript::Impl::GoalStatusMessage>();
  return &SendScript_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, my_ur_msgs, action, SendScript)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<my_ur_msgs::action::SendScript>();
}

#ifdef __cplusplus
}
#endif
