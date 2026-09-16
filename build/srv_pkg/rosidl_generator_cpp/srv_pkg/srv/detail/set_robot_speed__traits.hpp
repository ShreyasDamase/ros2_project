// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "srv_pkg/srv/set_robot_speed.hpp"


#ifndef SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__TRAITS_HPP_
#define SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "srv_pkg/srv/detail/set_robot_speed__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotSpeed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_speed
  {
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << ", ";
  }

  // member: gradual
  {
    out << "gradual: ";
    rosidl_generator_traits::value_to_yaml(msg.gradual, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << "\n";
  }

  // member: gradual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gradual: ";
    rosidl_generator_traits::value_to_yaml(msg.gradual, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotSpeed_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, srv_pkg::srv::SetRobotSpeed_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).target_speed,
    std::forward<T>(msg).gradual);
}

}  // namespace srv

}  // namespace srv_pkg

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<srv_pkg::srv::SetRobotSpeed_Request>()
{
  return "srv_pkg::srv::SetRobotSpeed_Request";
}

template<>
constexpr const char * name<srv_pkg::srv::SetRobotSpeed_Request>()
{
  return "srv_pkg/srv/SetRobotSpeed_Request";
}

template<>
struct has_fixed_size<srv_pkg::srv::SetRobotSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_pkg::srv::SetRobotSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_pkg::srv::SetRobotSpeed_Request>
  : std::true_type {};

template<>
struct MessageTraits<srv_pkg::srv::SetRobotSpeed_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "target_speed",
    "gradual",
  };
};

}  // namespace rosidl_generator_traits

namespace srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotSpeed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: applied_speed
  {
    out << "applied_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_speed, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: applied_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "applied_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_speed, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotSpeed_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, srv_pkg::srv::SetRobotSpeed_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).success,
    std::forward<T>(msg).applied_speed,
    std::forward<T>(msg).message);
}

}  // namespace srv

}  // namespace srv_pkg

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<srv_pkg::srv::SetRobotSpeed_Response>()
{
  return "srv_pkg::srv::SetRobotSpeed_Response";
}

template<>
constexpr const char * name<srv_pkg::srv::SetRobotSpeed_Response>()
{
  return "srv_pkg/srv/SetRobotSpeed_Response";
}

template<>
struct has_fixed_size<srv_pkg::srv::SetRobotSpeed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<srv_pkg::srv::SetRobotSpeed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<srv_pkg::srv::SetRobotSpeed_Response>
  : std::true_type {};

template<>
struct MessageTraits<srv_pkg::srv::SetRobotSpeed_Response>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "success",
    "applied_speed",
    "message",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotSpeed_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotSpeed_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotSpeed_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, srv_pkg::srv::SetRobotSpeed_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace srv_pkg

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<srv_pkg::srv::SetRobotSpeed_Event>()
{
  return "srv_pkg::srv::SetRobotSpeed_Event";
}

template<>
constexpr const char * name<srv_pkg::srv::SetRobotSpeed_Event>()
{
  return "srv_pkg/srv/SetRobotSpeed_Event";
}

template<>
struct has_fixed_size<srv_pkg::srv::SetRobotSpeed_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<srv_pkg::srv::SetRobotSpeed_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<srv_pkg::srv::SetRobotSpeed_Request>::value && has_bounded_size<srv_pkg::srv::SetRobotSpeed_Response>::value> {};

template<>
struct is_message<srv_pkg::srv::SetRobotSpeed_Event>
  : std::true_type {};

template<>
struct MessageTraits<srv_pkg::srv::SetRobotSpeed_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<srv_pkg::srv::SetRobotSpeed>()
{
  return "srv_pkg::srv::SetRobotSpeed";
}

template<>
constexpr const char * name<srv_pkg::srv::SetRobotSpeed>()
{
  return "srv_pkg/srv/SetRobotSpeed";
}

template<>
struct has_fixed_size<srv_pkg::srv::SetRobotSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_pkg::srv::SetRobotSpeed_Request>::value &&
    has_fixed_size<srv_pkg::srv::SetRobotSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_pkg::srv::SetRobotSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_pkg::srv::SetRobotSpeed_Request>::value &&
    has_bounded_size<srv_pkg::srv::SetRobotSpeed_Response>::value
  >
{
};

template<>
struct is_service<srv_pkg::srv::SetRobotSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<srv_pkg::srv::SetRobotSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_pkg::srv::SetRobotSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SRV_PKG__SRV__DETAIL__SET_ROBOT_SPEED__TRAITS_HPP_
