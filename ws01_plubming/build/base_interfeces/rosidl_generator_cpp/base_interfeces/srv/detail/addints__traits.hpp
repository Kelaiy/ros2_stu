// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfeces:srv/Addints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfeces/srv/addints.hpp"


#ifndef BASE_INTERFECES__SRV__DETAIL__ADDINTS__TRAITS_HPP_
#define BASE_INTERFECES__SRV__DETAIL__ADDINTS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "base_interfeces/srv/detail/addints__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfeces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addints_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::srv::Addints_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).num1,
    std::forward<T>(msg).num2);
}

}  // namespace srv

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::srv::Addints_Request>()
{
  return "base_interfeces::srv::Addints_Request";
}

template<>
constexpr const char * name<base_interfeces::srv::Addints_Request>()
{
  return "base_interfeces/srv/Addints_Request";
}

template<>
struct has_fixed_size<base_interfeces::srv::Addints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::srv::Addints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::srv::Addints_Request>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::srv::Addints_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "num1",
    "num2",
  };
};

}  // namespace rosidl_generator_traits

namespace base_interfeces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addints_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::srv::Addints_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).sum);
}

}  // namespace srv

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::srv::Addints_Response>()
{
  return "base_interfeces::srv::Addints_Response";
}

template<>
constexpr const char * name<base_interfeces::srv::Addints_Response>()
{
  return "base_interfeces/srv/Addints_Response";
}

template<>
struct has_fixed_size<base_interfeces::srv::Addints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::srv::Addints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::srv::Addints_Response>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::srv::Addints_Response>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "sum",
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
  const Addints_Event & msg,
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
  const Addints_Event & msg,
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

inline std::string to_yaml(const Addints_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::srv::Addints_Event>, int> = 0>
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
constexpr const char * data_type<base_interfeces::srv::Addints_Event>()
{
  return "base_interfeces::srv::Addints_Event";
}

template<>
constexpr const char * name<base_interfeces::srv::Addints_Event>()
{
  return "base_interfeces/srv/Addints_Event";
}

template<>
struct has_fixed_size<base_interfeces::srv::Addints_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfeces::srv::Addints_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::srv::Addints_Request>::value && has_bounded_size<base_interfeces::srv::Addints_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfeces::srv::Addints_Event>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::srv::Addints_Event>
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
constexpr const char * data_type<base_interfeces::srv::Addints>()
{
  return "base_interfeces::srv::Addints";
}

template<>
constexpr const char * name<base_interfeces::srv::Addints>()
{
  return "base_interfeces/srv/Addints";
}

template<>
struct has_fixed_size<base_interfeces::srv::Addints>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfeces::srv::Addints_Request>::value &&
    has_fixed_size<base_interfeces::srv::Addints_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfeces::srv::Addints>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfeces::srv::Addints_Request>::value &&
    has_bounded_size<base_interfeces::srv::Addints_Response>::value
  >
{
};

template<>
struct is_service<base_interfeces::srv::Addints>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfeces::srv::Addints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfeces::srv::Addints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFECES__SRV__DETAIL__ADDINTS__TRAITS_HPP_
