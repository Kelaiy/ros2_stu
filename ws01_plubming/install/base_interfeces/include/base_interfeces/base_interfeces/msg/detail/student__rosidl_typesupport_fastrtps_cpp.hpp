// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from base_interfeces:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFECES__MSG__DETAIL__STUDENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BASE_INTERFECES__MSG__DETAIL__STUDENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "base_interfeces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "base_interfeces/msg/detail/student__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace base_interfeces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
cdr_serialize(
  const base_interfeces::msg::Student & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  base_interfeces::msg::Student & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
get_serialized_size(
  const base_interfeces::msg::Student & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
max_serialized_size_Student(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
cdr_serialize_key(
  const base_interfeces::msg::Student & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
get_serialized_size_key(
  const base_interfeces::msg::Student & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
max_serialized_size_key_Student(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace base_interfeces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_base_interfeces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, msg, Student)();

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFECES__MSG__DETAIL__STUDENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
