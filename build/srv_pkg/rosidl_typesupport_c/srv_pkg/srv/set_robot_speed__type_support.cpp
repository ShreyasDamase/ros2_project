// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "srv_pkg/srv/detail/set_robot_speed__struct.h"
#include "srv_pkg/srv/detail/set_robot_speed__type_support.h"
#include "srv_pkg/srv/detail/set_robot_speed__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetRobotSpeed_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotSpeed_Request_type_support_ids_t;

static const _SetRobotSpeed_Request_type_support_ids_t _SetRobotSpeed_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetRobotSpeed_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotSpeed_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotSpeed_Request_type_support_symbol_names_t _SetRobotSpeed_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_pkg, srv, SetRobotSpeed_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, SetRobotSpeed_Request)),
  }
};

typedef struct _SetRobotSpeed_Request_type_support_data_t
{
  void * data[2];
} _SetRobotSpeed_Request_type_support_data_t;

static _SetRobotSpeed_Request_type_support_data_t _SetRobotSpeed_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotSpeed_Request_message_typesupport_map = {
  2,
  "srv_pkg",
  &_SetRobotSpeed_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotSpeed_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotSpeed_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotSpeed_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotSpeed_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &srv_pkg__srv__SetRobotSpeed_Request__get_type_hash,
  &srv_pkg__srv__SetRobotSpeed_Request__get_type_description,
  &srv_pkg__srv__SetRobotSpeed_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, srv_pkg, srv, SetRobotSpeed_Request)() {
  return &::srv_pkg::srv::rosidl_typesupport_c::SetRobotSpeed_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__struct.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__type_support.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__functions.h"
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

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetRobotSpeed_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotSpeed_Response_type_support_ids_t;

static const _SetRobotSpeed_Response_type_support_ids_t _SetRobotSpeed_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetRobotSpeed_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotSpeed_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotSpeed_Response_type_support_symbol_names_t _SetRobotSpeed_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_pkg, srv, SetRobotSpeed_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, SetRobotSpeed_Response)),
  }
};

typedef struct _SetRobotSpeed_Response_type_support_data_t
{
  void * data[2];
} _SetRobotSpeed_Response_type_support_data_t;

static _SetRobotSpeed_Response_type_support_data_t _SetRobotSpeed_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotSpeed_Response_message_typesupport_map = {
  2,
  "srv_pkg",
  &_SetRobotSpeed_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotSpeed_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotSpeed_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotSpeed_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotSpeed_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &srv_pkg__srv__SetRobotSpeed_Response__get_type_hash,
  &srv_pkg__srv__SetRobotSpeed_Response__get_type_description,
  &srv_pkg__srv__SetRobotSpeed_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, srv_pkg, srv, SetRobotSpeed_Response)() {
  return &::srv_pkg::srv::rosidl_typesupport_c::SetRobotSpeed_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__struct.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__type_support.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__functions.h"
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

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetRobotSpeed_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotSpeed_Event_type_support_ids_t;

static const _SetRobotSpeed_Event_type_support_ids_t _SetRobotSpeed_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetRobotSpeed_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotSpeed_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotSpeed_Event_type_support_symbol_names_t _SetRobotSpeed_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_pkg, srv, SetRobotSpeed_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, SetRobotSpeed_Event)),
  }
};

typedef struct _SetRobotSpeed_Event_type_support_data_t
{
  void * data[2];
} _SetRobotSpeed_Event_type_support_data_t;

static _SetRobotSpeed_Event_type_support_data_t _SetRobotSpeed_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotSpeed_Event_message_typesupport_map = {
  2,
  "srv_pkg",
  &_SetRobotSpeed_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotSpeed_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotSpeed_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotSpeed_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotSpeed_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &srv_pkg__srv__SetRobotSpeed_Event__get_type_hash,
  &srv_pkg__srv__SetRobotSpeed_Event__get_type_description,
  &srv_pkg__srv__SetRobotSpeed_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, srv_pkg, srv, SetRobotSpeed_Event)() {
  return &::srv_pkg::srv::rosidl_typesupport_c::SetRobotSpeed_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace srv_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetRobotSpeed_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotSpeed_type_support_ids_t;

static const _SetRobotSpeed_type_support_ids_t _SetRobotSpeed_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetRobotSpeed_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotSpeed_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotSpeed_type_support_symbol_names_t _SetRobotSpeed_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_pkg, srv, SetRobotSpeed)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_pkg, srv, SetRobotSpeed)),
  }
};

typedef struct _SetRobotSpeed_type_support_data_t
{
  void * data[2];
} _SetRobotSpeed_type_support_data_t;

static _SetRobotSpeed_type_support_data_t _SetRobotSpeed_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotSpeed_service_typesupport_map = {
  2,
  "srv_pkg",
  &_SetRobotSpeed_service_typesupport_ids.typesupport_identifier[0],
  &_SetRobotSpeed_service_typesupport_symbol_names.symbol_name[0],
  &_SetRobotSpeed_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetRobotSpeed_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotSpeed_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetRobotSpeed_Request_message_type_support_handle,
  &SetRobotSpeed_Response_message_type_support_handle,
  &SetRobotSpeed_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    srv_pkg,
    srv,
    SetRobotSpeed
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    srv_pkg,
    srv,
    SetRobotSpeed
  ),
  &srv_pkg__srv__SetRobotSpeed__get_type_hash,
  &srv_pkg__srv__SetRobotSpeed__get_type_description,
  &srv_pkg__srv__SetRobotSpeed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, srv_pkg, srv, SetRobotSpeed)() {
  return &::srv_pkg::srv::rosidl_typesupport_c::SetRobotSpeed_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
