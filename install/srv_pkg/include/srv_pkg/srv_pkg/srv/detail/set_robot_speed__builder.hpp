// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "srv_pkg/srv/set_robot_speed.hpp"


#ifndef SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__BUILDER_HPP_
#define SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv_pkg/srv/detail/set_robot_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv_pkg
{

namespace srv
{

namespace builder
{

class Init_SetRobotSpeed_Request_gradual
{
public:
  explicit Init_SetRobotSpeed_Request_gradual(::srv_pkg::srv::SetRobotSpeed_Request & msg)
  : msg_(msg)
  {}
  ::srv_pkg::srv::SetRobotSpeed_Request gradual(::srv_pkg::srv::SetRobotSpeed_Request::_gradual_type arg)
  {
    msg_.gradual = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Request msg_;
};

class Init_SetRobotSpeed_Request_target_speed
{
public:
  Init_SetRobotSpeed_Request_target_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotSpeed_Request_gradual target_speed(::srv_pkg::srv::SetRobotSpeed_Request::_target_speed_type arg)
  {
    msg_.target_speed = std::move(arg);
    return Init_SetRobotSpeed_Request_gradual(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_pkg::srv::SetRobotSpeed_Request>()
{
  return srv_pkg::srv::builder::Init_SetRobotSpeed_Request_target_speed();
}

}  // namespace srv_pkg


namespace srv_pkg
{

namespace srv
{

namespace builder
{

class Init_SetRobotSpeed_Response_message
{
public:
  explicit Init_SetRobotSpeed_Response_message(::srv_pkg::srv::SetRobotSpeed_Response & msg)
  : msg_(msg)
  {}
  ::srv_pkg::srv::SetRobotSpeed_Response message(::srv_pkg::srv::SetRobotSpeed_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Response msg_;
};

class Init_SetRobotSpeed_Response_applied_speed
{
public:
  explicit Init_SetRobotSpeed_Response_applied_speed(::srv_pkg::srv::SetRobotSpeed_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotSpeed_Response_message applied_speed(::srv_pkg::srv::SetRobotSpeed_Response::_applied_speed_type arg)
  {
    msg_.applied_speed = std::move(arg);
    return Init_SetRobotSpeed_Response_message(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Response msg_;
};

class Init_SetRobotSpeed_Response_success
{
public:
  Init_SetRobotSpeed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotSpeed_Response_applied_speed success(::srv_pkg::srv::SetRobotSpeed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetRobotSpeed_Response_applied_speed(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_pkg::srv::SetRobotSpeed_Response>()
{
  return srv_pkg::srv::builder::Init_SetRobotSpeed_Response_success();
}

}  // namespace srv_pkg


namespace srv_pkg
{

namespace srv
{

namespace builder
{

class Init_SetRobotSpeed_Event_response
{
public:
  explicit Init_SetRobotSpeed_Event_response(::srv_pkg::srv::SetRobotSpeed_Event & msg)
  : msg_(msg)
  {}
  ::srv_pkg::srv::SetRobotSpeed_Event response(::srv_pkg::srv::SetRobotSpeed_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Event msg_;
};

class Init_SetRobotSpeed_Event_request
{
public:
  explicit Init_SetRobotSpeed_Event_request(::srv_pkg::srv::SetRobotSpeed_Event & msg)
  : msg_(msg)
  {}
  Init_SetRobotSpeed_Event_response request(::srv_pkg::srv::SetRobotSpeed_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetRobotSpeed_Event_response(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Event msg_;
};

class Init_SetRobotSpeed_Event_info
{
public:
  Init_SetRobotSpeed_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotSpeed_Event_request info(::srv_pkg::srv::SetRobotSpeed_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetRobotSpeed_Event_request(msg_);
  }

private:
  ::srv_pkg::srv::SetRobotSpeed_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_pkg::srv::SetRobotSpeed_Event>()
{
  return srv_pkg::srv::builder::Init_SetRobotSpeed_Event_info();
}

}  // namespace srv_pkg

#endif  // SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__BUILDER_HPP_
