// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "srv_pkg/srv/set_robot_speed.hpp"


#ifndef SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__STRUCT_HPP_
#define SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__srv_pkg__srv__SetRobotSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__srv_pkg__srv__SetRobotSpeed_Request __declspec(deprecated)
#endif

namespace srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotSpeed_Request_
{
  using Type = SetRobotSpeed_Request_<ContainerAllocator>;

  explicit SetRobotSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_speed = 0.0f;
      this->gradual = false;
    }
  }

  explicit SetRobotSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_speed = 0.0f;
      this->gradual = false;
    }
  }

  // field types and members
  using _target_speed_type =
    float;
  _target_speed_type target_speed;
  using _gradual_type =
    bool;
  _gradual_type gradual;

  // setters for named parameter idiom
  Type & set__target_speed(
    const float & _arg)
  {
    this->target_speed = _arg;
    return *this;
  }
  Type & set__gradual(
    const bool & _arg)
  {
    this->gradual = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_pkg__srv__SetRobotSpeed_Request
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_pkg__srv__SetRobotSpeed_Request
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotSpeed_Request_ & other) const
  {
    if (this->target_speed != other.target_speed) {
      return false;
    }
    if (this->gradual != other.gradual) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotSpeed_Request_

// alias to use template instance with default allocator
using SetRobotSpeed_Request =
  srv_pkg::srv::SetRobotSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_pkg


#ifndef _WIN32
# define DEPRECATED__srv_pkg__srv__SetRobotSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__srv_pkg__srv__SetRobotSpeed_Response __declspec(deprecated)
#endif

namespace srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotSpeed_Response_
{
  using Type = SetRobotSpeed_Response_<ContainerAllocator>;

  explicit SetRobotSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->applied_speed = 0.0f;
      this->message = "";
    }
  }

  explicit SetRobotSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->applied_speed = 0.0f;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _applied_speed_type =
    float;
  _applied_speed_type applied_speed;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__applied_speed(
    const float & _arg)
  {
    this->applied_speed = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_pkg__srv__SetRobotSpeed_Response
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_pkg__srv__SetRobotSpeed_Response
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotSpeed_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->applied_speed != other.applied_speed) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotSpeed_Response_

// alias to use template instance with default allocator
using SetRobotSpeed_Response =
  srv_pkg::srv::SetRobotSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_pkg


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__srv_pkg__srv__SetRobotSpeed_Event __attribute__((deprecated))
#else
# define DEPRECATED__srv_pkg__srv__SetRobotSpeed_Event __declspec(deprecated)
#endif

namespace srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotSpeed_Event_
{
  using Type = SetRobotSpeed_Event_<ContainerAllocator>;

  explicit SetRobotSpeed_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetRobotSpeed_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<srv_pkg::srv::SetRobotSpeed_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<srv_pkg::srv::SetRobotSpeed_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_pkg__srv__SetRobotSpeed_Event
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_pkg__srv__SetRobotSpeed_Event
    std::shared_ptr<srv_pkg::srv::SetRobotSpeed_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotSpeed_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotSpeed_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotSpeed_Event_

// alias to use template instance with default allocator
using SetRobotSpeed_Event =
  srv_pkg::srv::SetRobotSpeed_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_pkg

namespace srv_pkg
{

namespace srv
{

struct SetRobotSpeed
{
  using Request = srv_pkg::srv::SetRobotSpeed_Request;
  using Response = srv_pkg::srv::SetRobotSpeed_Response;
  using Event = srv_pkg::srv::SetRobotSpeed_Event;
};

}  // namespace srv

}  // namespace srv_pkg

#endif  // SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__STRUCT_HPP_
