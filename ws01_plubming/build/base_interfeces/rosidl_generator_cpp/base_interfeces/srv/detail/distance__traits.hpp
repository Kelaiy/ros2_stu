// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfeces:srv/Distance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfeces/srv/distance.hpp"


#ifndef BASE_INTERFECES__SRV__DETAIL__DISTANCE__TRAITS_HPP_
#define BASE_INTERFECES__SRV__DETAIL__DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "base_interfeces/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfeces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::srv::Distance_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).x,
    std::forward<T>(msg).y,
    std::forward<T>(msg).theta);
}

}  // namespace srv

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::srv::Distance_Request>()
{
  return "base_interfeces::srv::Distance_Request";
}

template<>
constexpr const char * name<base_interfeces::srv::Distance_Request>()
{
  return "base_interfeces/srv/Distance_Request";
}

template<>
struct has_fixed_size<base_interfeces::srv::Distance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::srv::Distance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::srv::Distance_Request>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::srv::Distance_Request>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "x",
    "y",
    "theta",
  };
};

}  // namespace rosidl_generator_traits

namespace base_interfeces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::srv::Distance_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).distance);
}

}  // namespace srv

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::srv::Distance_Response>()
{
  return "base_interfeces::srv::Distance_Response";
}

template<>
constexpr const char * name<base_interfeces::srv::Distance_Response>()
{
  return "base_interfeces/srv/Distance_Response";
}

template<>
struct has_fixed_size<base_interfeces::srv::Distance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::srv::Distance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::srv::Distance_Response>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::srv::Distance_Response>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "distance",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_interfeces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Event & msg,
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
  const Distance_Event & msg,
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

inline std::string to_yaml(const Distance_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::srv::Distance_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::srv::Distance_Event>()
{
  return "base_interfeces::srv::Distance_Event";
}

template<>
constexpr const char * name<base_interfeces::srv::Distance_Event>()
{
  return "base_interfeces/srv/Distance_Event";
}

template<>
struct has_fixed_size<base_interfeces::srv::Distance_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfeces::srv::Distance_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::srv::Distance_Request>::value && has_bounded_size<base_interfeces::srv::Distance_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfeces::srv::Distance_Event>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::srv::Distance_Event>
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
constexpr const char * data_type<base_interfeces::srv::Distance>()
{
  return "base_interfeces::srv::Distance";
}

template<>
constexpr const char * name<base_interfeces::srv::Distance>()
{
  return "base_interfeces/srv/Distance";
}

template<>
struct has_fixed_size<base_interfeces::srv::Distance>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfeces::srv::Distance_Request>::value &&
    has_fixed_size<base_interfeces::srv::Distance_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfeces::srv::Distance>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfeces::srv::Distance_Request>::value &&
    has_bounded_size<base_interfeces::srv::Distance_Response>::value
  >
{
};

template<>
struct is_service<base_interfeces::srv::Distance>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfeces::srv::Distance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfeces::srv::Distance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFECES__SRV__DETAIL__DISTANCE__TRAITS_HPP_
