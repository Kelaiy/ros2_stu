// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces/srv/face_detector.hpp"


#ifndef BASE_INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_
#define BASE_INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "base_interfaces/srv/detail/face_detector__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceDetector_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceDetector_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceDetector_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfaces::srv::FaceDetector_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).image);
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfaces::srv::FaceDetector_Request>()
{
  return "base_interfaces::srv::FaceDetector_Request";
}

template<>
constexpr const char * name<base_interfaces::srv::FaceDetector_Request>()
{
  return "base_interfaces/srv/FaceDetector_Request";
}

template<>
struct has_fixed_size<base_interfaces::srv::FaceDetector_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<base_interfaces::srv::FaceDetector_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<base_interfaces::srv::FaceDetector_Request>
  : std::true_type {};

template<>
struct MessageTraits<base_interfaces::srv::FaceDetector_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "image",
  };
};

}  // namespace rosidl_generator_traits

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceDetector_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << ", ";
  }

  // member: use_time
  {
    out << "use_time: ";
    rosidl_generator_traits::value_to_yaml(msg.use_time, out);
    out << ", ";
  }

  // member: top
  {
    if (msg.top.size() == 0) {
      out << "top: []";
    } else {
      out << "top: [";
      size_t pending_items = msg.top.size();
      for (auto item : msg.top) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right
  {
    if (msg.right.size() == 0) {
      out << "right: []";
    } else {
      out << "right: [";
      size_t pending_items = msg.right.size();
      for (auto item : msg.right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bottom
  {
    if (msg.bottom.size() == 0) {
      out << "bottom: []";
    } else {
      out << "bottom: [";
      size_t pending_items = msg.bottom.size();
      for (auto item : msg.bottom) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left
  {
    if (msg.left.size() == 0) {
      out << "left: []";
    } else {
      out << "left: [";
      size_t pending_items = msg.left.size();
      for (auto item : msg.left) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const FaceDetector_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: use_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_time: ";
    rosidl_generator_traits::value_to_yaml(msg.use_time, out);
    out << "\n";
  }

  // member: top
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.top.size() == 0) {
      out << "top: []\n";
    } else {
      out << "top:\n";
      for (auto item : msg.top) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right.size() == 0) {
      out << "right: []\n";
    } else {
      out << "right:\n";
      for (auto item : msg.right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bottom.size() == 0) {
      out << "bottom: []\n";
    } else {
      out << "bottom:\n";
      for (auto item : msg.bottom) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left.size() == 0) {
      out << "left: []\n";
    } else {
      out << "left:\n";
      for (auto item : msg.left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceDetector_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfaces::srv::FaceDetector_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).number,
    std::forward<T>(msg).use_time,
    std::forward<T>(msg).top,
    std::forward<T>(msg).right,
    std::forward<T>(msg).bottom,
    std::forward<T>(msg).left);
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfaces::srv::FaceDetector_Response>()
{
  return "base_interfaces::srv::FaceDetector_Response";
}

template<>
constexpr const char * name<base_interfaces::srv::FaceDetector_Response>()
{
  return "base_interfaces/srv/FaceDetector_Response";
}

template<>
struct has_fixed_size<base_interfaces::srv::FaceDetector_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::FaceDetector_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces::srv::FaceDetector_Response>
  : std::true_type {};

template<>
struct MessageTraits<base_interfaces::srv::FaceDetector_Response>
{
  static constexpr std::size_t member_count = 6;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "number",
    "use_time",
    "top",
    "right",
    "bottom",
    "left",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceDetector_Event & msg,
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
  const FaceDetector_Event & msg,
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

inline std::string to_yaml(const FaceDetector_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfaces::srv::FaceDetector_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfaces::srv::FaceDetector_Event>()
{
  return "base_interfaces::srv::FaceDetector_Event";
}

template<>
constexpr const char * name<base_interfaces::srv::FaceDetector_Event>()
{
  return "base_interfaces/srv/FaceDetector_Event";
}

template<>
struct has_fixed_size<base_interfaces::srv::FaceDetector_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::FaceDetector_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfaces::srv::FaceDetector_Request>::value && has_bounded_size<base_interfaces::srv::FaceDetector_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfaces::srv::FaceDetector_Event>
  : std::true_type {};

template<>
struct MessageTraits<base_interfaces::srv::FaceDetector_Event>
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
constexpr const char * data_type<base_interfaces::srv::FaceDetector>()
{
  return "base_interfaces::srv::FaceDetector";
}

template<>
constexpr const char * name<base_interfaces::srv::FaceDetector>()
{
  return "base_interfaces/srv/FaceDetector";
}

template<>
struct has_fixed_size<base_interfaces::srv::FaceDetector>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces::srv::FaceDetector_Request>::value &&
    has_fixed_size<base_interfaces::srv::FaceDetector_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces::srv::FaceDetector>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces::srv::FaceDetector_Request>::value &&
    has_bounded_size<base_interfaces::srv::FaceDetector_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces::srv::FaceDetector>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces::srv::FaceDetector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces::srv::FaceDetector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_
