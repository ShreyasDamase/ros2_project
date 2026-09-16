// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "srv_pkg/srv/set_robot_speed.h"


#ifndef SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__STRUCT_H_
#define SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetRobotSpeed in the package srv_pkg.
typedef struct srv_pkg__srv__SetRobotSpeed_Request
{
  float target_speed;
  bool gradual;
} srv_pkg__srv__SetRobotSpeed_Request;

// Struct for a sequence of srv_pkg__srv__SetRobotSpeed_Request.
typedef struct srv_pkg__srv__SetRobotSpeed_Request__Sequence
{
  srv_pkg__srv__SetRobotSpeed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_pkg__srv__SetRobotSpeed_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRobotSpeed in the package srv_pkg.
typedef struct srv_pkg__srv__SetRobotSpeed_Response
{
  bool success;
  float applied_speed;
  rosidl_runtime_c__String message;
} srv_pkg__srv__SetRobotSpeed_Response;

// Struct for a sequence of srv_pkg__srv__SetRobotSpeed_Response.
typedef struct srv_pkg__srv__SetRobotSpeed_Response__Sequence
{
  srv_pkg__srv__SetRobotSpeed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_pkg__srv__SetRobotSpeed_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  srv_pkg__srv__SetRobotSpeed_Event__request__MAX_SIZE = 1
};
// response
enum
{
  srv_pkg__srv__SetRobotSpeed_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetRobotSpeed in the package srv_pkg.
typedef struct srv_pkg__srv__SetRobotSpeed_Event
{
  service_msgs__msg__ServiceEventInfo info;
  srv_pkg__srv__SetRobotSpeed_Request__Sequence request;
  srv_pkg__srv__SetRobotSpeed_Response__Sequence response;
} srv_pkg__srv__SetRobotSpeed_Event;

// Struct for a sequence of srv_pkg__srv__SetRobotSpeed_Event.
typedef struct srv_pkg__srv__SetRobotSpeed_Event__Sequence
{
  srv_pkg__srv__SetRobotSpeed_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_pkg__srv__SetRobotSpeed_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__STRUCT_H_
