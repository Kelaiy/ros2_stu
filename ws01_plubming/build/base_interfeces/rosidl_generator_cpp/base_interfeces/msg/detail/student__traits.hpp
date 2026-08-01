// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfeces:msg/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfeces/msg/student.hpp"


#ifndef BASE_INTERFECES__MSG__DETAIL__STUDENT__TRAITS_HPP_
#define BASE_INTERFECES__MSG__DETAIL__STUDENT__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "base_interfeces/msg/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfeces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Student & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Student & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Student & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, base_interfeces::msg::Student>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).name,
    std::forward<T>(msg).age,
    std::forward<T>(msg).height);
}

}  // namespace msg

}  // namespace base_interfeces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<base_interfeces::msg::Student>()
{
  return "base_interfeces::msg::Student";
}

template<>
constexpr const char * name<base_interfeces::msg::Student>()
{
  return "base_interfeces/msg/Student";
}

template<>
struct has_fixed_size<base_interfeces::msg::Student>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfeces::msg::Student>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfeces::msg::Student>
  : std::true_type {};

template<>
struct MessageTraits<base_interfeces::msg::Student>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "name",
    "age",
    "height",
  };
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFECES__MSG__DETAIL__STUDENT__TRAITS_HPP_
