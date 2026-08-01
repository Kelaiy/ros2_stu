// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfeces:action/Nav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfeces/action/nav.hpp"


#ifndef BASE_INTERFECES__ACTION__DETAIL__NAV__TRAITS_HPP_
#define BASE_INTERFECES__ACTION__DETAIL__NAV__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "base_interfeces/action/detail/nav__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_x
  {
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << ", ";
  }

  // member: goal_y
  {
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << ", ";
  }

  // member: goal_theta
  {
    out << "goal_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << "\n";
  }

  // member: goal_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << "\n";
  }

  // member: goal_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_Goal>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_x,
    std::forward<T>(msg).goal_y,
    std::forward<T>(msg).goal_theta);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_Goal>()
{
  return "base_interfeces::action::Nav_Goal";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_Goal>()
{
  return "base_interfeces/action/Nav_Goal";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::action::Nav_Goal>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_Goal>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_x",
    "goal_y",
    "goal_theta",
  };
};

}  // namespace rosidl_generator_traits

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: tutle_x
  {
    out << "tutle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.tutle_x, out);
    out << ", ";
  }

  // member: tutle_y
  {
    out << "tutle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.tutle_y, out);
    out << ", ";
  }

  // member: tutle_thrta
  {
    out << "tutle_thrta: ";
    rosidl_generator_traits::value_to_yaml(msg.tutle_thrta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tutle_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tutle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.tutle_x, out);
    out << "\n";
  }

  // member: tutle_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tutle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.tutle_y, out);
    out << "\n";
  }

  // member: tutle_thrta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tutle_thrta: ";
    rosidl_generator_traits::value_to_yaml(msg.tutle_thrta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_Result>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).tutle_x,
    std::forward<T>(msg).tutle_y,
    std::forward<T>(msg).tutle_thrta);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_Result>()
{
  return "base_interfeces::action::Nav_Result";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_Result>()
{
  return "base_interfeces/action/Nav_Result";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::action::Nav_Result>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_Result>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "tutle_x",
    "tutle_y",
    "tutle_thrta",
  };
};

}  // namespace rosidl_generator_traits

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_Feedback & msg,
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
  const Nav_Feedback & msg,
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

inline std::string to_yaml(const Nav_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_Feedback>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).distance);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_Feedback>()
{
  return "base_interfeces::action::Nav_Feedback";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_Feedback>()
{
  return "base_interfeces/action/Nav_Feedback";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfeces::action::Nav_Feedback>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_Feedback>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "distance",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "base_interfeces/action/detail/nav__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_SendGoal_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).goal);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_SendGoal_Request>()
{
  return "base_interfeces::action::Nav_SendGoal_Request";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_SendGoal_Request>()
{
  return "base_interfeces/action/Nav_SendGoal_Request";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<base_interfeces::action::Nav_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::action::Nav_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_SendGoal_Request>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_SendGoal_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "goal",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_SendGoal_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).accepted,
    std::forward<T>(msg).stamp);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_SendGoal_Response>()
{
  return "base_interfeces::action::Nav_SendGoal_Response";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_SendGoal_Response>()
{
  return "base_interfeces/action/Nav_SendGoal_Response";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_SendGoal_Response>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_SendGoal_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "accepted",
    "stamp",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_SendGoal_Event & msg,
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
  const Nav_SendGoal_Event & msg,
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

inline std::string to_yaml(const Nav_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_SendGoal_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_SendGoal_Event>()
{
  return "base_interfeces::action::Nav_SendGoal_Event";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_SendGoal_Event>()
{
  return "base_interfeces/action/Nav_SendGoal_Event";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::action::Nav_SendGoal_Request>::value && has_bounded_size<base_interfeces::action::Nav_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_SendGoal_Event>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_SendGoal_Event>
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
constexpr const char * data_type<base_interfeces::action::Nav_SendGoal>()
{
  return "base_interfeces::action::Nav_SendGoal";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_SendGoal>()
{
  return "base_interfeces/action/Nav_SendGoal";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfeces::action::Nav_SendGoal_Request>::value &&
    has_fixed_size<base_interfeces::action::Nav_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfeces::action::Nav_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfeces::action::Nav_SendGoal_Request>::value &&
    has_bounded_size<base_interfeces::action::Nav_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<base_interfeces::action::Nav_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfeces::action::Nav_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfeces::action::Nav_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_GetResult_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).goal_id);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_GetResult_Request>()
{
  return "base_interfeces::action::Nav_GetResult_Request";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_GetResult_Request>()
{
  return "base_interfeces/action/Nav_GetResult_Request";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_GetResult_Request>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_GetResult_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfeces/action/detail/nav__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_GetResult_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).status,
    std::forward<T>(msg).result);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_GetResult_Response>()
{
  return "base_interfeces::action::Nav_GetResult_Response";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_GetResult_Response>()
{
  return "base_interfeces/action/Nav_GetResult_Response";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<base_interfeces::action::Nav_Result>::value> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::action::Nav_Result>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_GetResult_Response>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_GetResult_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "status",
    "result",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_GetResult_Event & msg,
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
  const Nav_GetResult_Event & msg,
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

inline std::string to_yaml(const Nav_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_GetResult_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_GetResult_Event>()
{
  return "base_interfeces::action::Nav_GetResult_Event";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_GetResult_Event>()
{
  return "base_interfeces/action/Nav_GetResult_Event";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::action::Nav_GetResult_Request>::value && has_bounded_size<base_interfeces::action::Nav_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_GetResult_Event>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_GetResult_Event>
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
constexpr const char * data_type<base_interfeces::action::Nav_GetResult>()
{
  return "base_interfeces::action::Nav_GetResult";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_GetResult>()
{
  return "base_interfeces/action/Nav_GetResult";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfeces::action::Nav_GetResult_Request>::value &&
    has_fixed_size<base_interfeces::action::Nav_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfeces::action::Nav_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfeces::action::Nav_GetResult_Request>::value &&
    has_bounded_size<base_interfeces::action::Nav_GetResult_Response>::value
  >
{
};

template<>
struct is_service<base_interfeces::action::Nav_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfeces::action::Nav_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfeces::action::Nav_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "base_interfeces/action/detail/nav__traits.hpp"

namespace base_interfeces
{

namespace action
{

inline void to_flow_style_yaml(
  const Nav_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nav_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nav_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::action::Nav_FeedbackMessage>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).feedback);
}

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav_FeedbackMessage>()
{
  return "base_interfeces::action::Nav_FeedbackMessage";
}

template<>
constexpr const char * name<base_interfeces::action::Nav_FeedbackMessage>()
{
  return "base_interfeces/action/Nav_FeedbackMessage";
}

template<>
struct has_fixed_size<base_interfeces::action::Nav_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<base_interfeces::action::Nav_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfeces::action::Nav_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<base_interfeces::action::Nav_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfeces::action::Nav_FeedbackMessage>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::action::Nav_FeedbackMessage>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "feedback",
  };
};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::action::Nav>()
{
  return "base_interfeces::action::Nav";
}

template<>
constexpr const char * name<base_interfeces::action::Nav>()
{
  return "base_interfeces/action/Nav";
}

template<>
struct is_action<base_interfeces::action::Nav>
  : std::true_type
{
};

template<>
struct is_action_goal<base_interfeces::action::Nav_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<base_interfeces::action::Nav_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<base_interfeces::action::Nav_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BASE_INTERFECES__ACTION__DETAIL__NAV__TRAITS_HPP_
