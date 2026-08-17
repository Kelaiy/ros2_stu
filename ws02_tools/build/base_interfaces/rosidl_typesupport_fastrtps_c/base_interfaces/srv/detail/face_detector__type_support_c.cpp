// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice
#include "base_interfaces/srv/detail/face_detector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces/srv/detail/face_detector__struct.h"
#include "base_interfaces/srv/detail/face_detector__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/image__functions.h"  // image

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
bool cdr_serialize_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
bool cdr_deserialize_sensor_msgs__msg__Image(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Image * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
bool cdr_serialize_key_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t get_serialized_size_key_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t max_serialized_size_key_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _FaceDetector_Request__ros_msg_type = base_interfaces__srv__FaceDetector_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_serialize_base_interfaces__srv__FaceDetector_Request(
  const base_interfaces__srv__FaceDetector_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: image
  {
    cdr_serialize_sensor_msgs__msg__Image(
      &ros_message->image, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_deserialize_base_interfaces__srv__FaceDetector_Request(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces__srv__FaceDetector_Request * ros_message)
{
  // Field name: image
  {
    cdr_deserialize_sensor_msgs__msg__Image(cdr, &ros_message->image);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t get_serialized_size_base_interfaces__srv__FaceDetector_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Request__ros_msg_type * ros_message = static_cast<const _FaceDetector_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: image
  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t max_serialized_size_base_interfaces__srv__FaceDetector_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces__srv__FaceDetector_Request;
    is_plain =
      (
      offsetof(DataType, image) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_serialize_key_base_interfaces__srv__FaceDetector_Request(
  const base_interfaces__srv__FaceDetector_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: image
  {
    cdr_serialize_key_sensor_msgs__msg__Image(
      &ros_message->image, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t get_serialized_size_key_base_interfaces__srv__FaceDetector_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Request__ros_msg_type * ros_message = static_cast<const _FaceDetector_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: image
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t max_serialized_size_key_base_interfaces__srv__FaceDetector_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces__srv__FaceDetector_Request;
    is_plain =
      (
      offsetof(DataType, image) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FaceDetector_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const base_interfaces__srv__FaceDetector_Request * ros_message = static_cast<const base_interfaces__srv__FaceDetector_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_base_interfaces__srv__FaceDetector_Request(ros_message, cdr);
}

static bool _FaceDetector_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  base_interfaces__srv__FaceDetector_Request * ros_message = static_cast<base_interfaces__srv__FaceDetector_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_base_interfaces__srv__FaceDetector_Request(cdr, ros_message);
}

static uint32_t _FaceDetector_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces__srv__FaceDetector_Request(
      untyped_ros_message, 0));
}

static size_t _FaceDetector_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_base_interfaces__srv__FaceDetector_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FaceDetector_Request = {
  "base_interfaces::srv",
  "FaceDetector_Request",
  _FaceDetector_Request__cdr_serialize,
  _FaceDetector_Request__cdr_deserialize,
  _FaceDetector_Request__get_serialized_size,
  _FaceDetector_Request__max_serialized_size,
  nullptr,
  false,
  nullptr,
  nullptr
};

static rosidl_message_type_support_t _FaceDetector_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceDetector_Request,
  get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Request__get_type_hash,
  &base_interfaces__srv__FaceDetector_Request__get_type_description,
  &base_interfaces__srv__FaceDetector_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Request)() {
  return &_FaceDetector_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // bottom, left, right, top
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bottom, left, right, top

// forward declare type support functions


using _FaceDetector_Response__ros_msg_type = base_interfaces__srv__FaceDetector_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_serialize_base_interfaces__srv__FaceDetector_Response(
  const base_interfaces__srv__FaceDetector_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: number
  {
    cdr << ros_message->number;
  }

  // Field name: use_time
  {
    cdr << ros_message->use_time;
  }

  // Field name: top
  {
    size_t size = ros_message->top.size;
    auto array_ptr = ros_message->top.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: right
  {
    size_t size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bottom
  {
    size_t size = ros_message->bottom.size;
    auto array_ptr = ros_message->bottom.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: left
  {
    size_t size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_deserialize_base_interfaces__srv__FaceDetector_Response(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces__srv__FaceDetector_Response * ros_message)
{
  // Field name: number
  {
    cdr >> ros_message->number;
  }

  // Field name: use_time
  {
    cdr >> ros_message->use_time;
  }

  // Field name: top
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->top.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->top);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->top, size)) {
      fprintf(stderr, "failed to create array for field 'top'");
      return false;
    }
    auto array_ptr = ros_message->top.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->right.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->right);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->right, size)) {
      fprintf(stderr, "failed to create array for field 'right'");
      return false;
    }
    auto array_ptr = ros_message->right.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: bottom
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->bottom.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->bottom);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->bottom, size)) {
      fprintf(stderr, "failed to create array for field 'bottom'");
      return false;
    }
    auto array_ptr = ros_message->bottom.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->left.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->left);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->left, size)) {
      fprintf(stderr, "failed to create array for field 'left'");
      return false;
    }
    auto array_ptr = ros_message->left.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t get_serialized_size_base_interfaces__srv__FaceDetector_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Response__ros_msg_type * ros_message = static_cast<const _FaceDetector_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: number
  {
    size_t item_size = sizeof(ros_message->number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_time
  {
    size_t item_size = sizeof(ros_message->use_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: top
  {
    size_t array_size = ros_message->top.size;
    auto array_ptr = ros_message->top.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right
  {
    size_t array_size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bottom
  {
    size_t array_size = ros_message->bottom.size;
    auto array_ptr = ros_message->bottom.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left
  {
    size_t array_size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t max_serialized_size_base_interfaces__srv__FaceDetector_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: use_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: top
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bottom
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: left
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces__srv__FaceDetector_Response;
    is_plain =
      (
      offsetof(DataType, left) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_serialize_key_base_interfaces__srv__FaceDetector_Response(
  const base_interfaces__srv__FaceDetector_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: number
  {
    cdr << ros_message->number;
  }

  // Field name: use_time
  {
    cdr << ros_message->use_time;
  }

  // Field name: top
  {
    size_t size = ros_message->top.size;
    auto array_ptr = ros_message->top.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: right
  {
    size_t size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bottom
  {
    size_t size = ros_message->bottom.size;
    auto array_ptr = ros_message->bottom.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: left
  {
    size_t size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t get_serialized_size_key_base_interfaces__srv__FaceDetector_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Response__ros_msg_type * ros_message = static_cast<const _FaceDetector_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: number
  {
    size_t item_size = sizeof(ros_message->number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_time
  {
    size_t item_size = sizeof(ros_message->use_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: top
  {
    size_t array_size = ros_message->top.size;
    auto array_ptr = ros_message->top.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right
  {
    size_t array_size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bottom
  {
    size_t array_size = ros_message->bottom.size;
    auto array_ptr = ros_message->bottom.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left
  {
    size_t array_size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t max_serialized_size_key_base_interfaces__srv__FaceDetector_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: use_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: top
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bottom
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: left
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces__srv__FaceDetector_Response;
    is_plain =
      (
      offsetof(DataType, left) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FaceDetector_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const base_interfaces__srv__FaceDetector_Response * ros_message = static_cast<const base_interfaces__srv__FaceDetector_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_base_interfaces__srv__FaceDetector_Response(ros_message, cdr);
}

static bool _FaceDetector_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  base_interfaces__srv__FaceDetector_Response * ros_message = static_cast<base_interfaces__srv__FaceDetector_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_base_interfaces__srv__FaceDetector_Response(cdr, ros_message);
}

static uint32_t _FaceDetector_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces__srv__FaceDetector_Response(
      untyped_ros_message, 0));
}

static size_t _FaceDetector_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_base_interfaces__srv__FaceDetector_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FaceDetector_Response = {
  "base_interfaces::srv",
  "FaceDetector_Response",
  _FaceDetector_Response__cdr_serialize,
  _FaceDetector_Response__cdr_deserialize,
  _FaceDetector_Response__get_serialized_size,
  _FaceDetector_Response__max_serialized_size,
  nullptr,
  false,
  nullptr,
  nullptr
};

static rosidl_message_type_support_t _FaceDetector_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceDetector_Response,
  get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Response__get_type_hash,
  &base_interfaces__srv__FaceDetector_Response__get_type_description,
  &base_interfaces__srv__FaceDetector_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Response)() {
  return &_FaceDetector_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_base_interfaces__srv__FaceDetector_Request(
  const base_interfaces__srv__FaceDetector_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_base_interfaces__srv__FaceDetector_Request(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces__srv__FaceDetector_Request * ros_message);

size_t get_serialized_size_base_interfaces__srv__FaceDetector_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_base_interfaces__srv__FaceDetector_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_base_interfaces__srv__FaceDetector_Request(
  const base_interfaces__srv__FaceDetector_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_base_interfaces__srv__FaceDetector_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_base_interfaces__srv__FaceDetector_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Request)();

bool cdr_serialize_base_interfaces__srv__FaceDetector_Response(
  const base_interfaces__srv__FaceDetector_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_base_interfaces__srv__FaceDetector_Response(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces__srv__FaceDetector_Response * ros_message);

size_t get_serialized_size_base_interfaces__srv__FaceDetector_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_base_interfaces__srv__FaceDetector_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_base_interfaces__srv__FaceDetector_Response(
  const base_interfaces__srv__FaceDetector_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_base_interfaces__srv__FaceDetector_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_base_interfaces__srv__FaceDetector_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _FaceDetector_Event__ros_msg_type = base_interfaces__srv__FaceDetector_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_serialize_base_interfaces__srv__FaceDetector_Event(
  const base_interfaces__srv__FaceDetector_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_base_interfaces__srv__FaceDetector_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_base_interfaces__srv__FaceDetector_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_deserialize_base_interfaces__srv__FaceDetector_Event(
  eprosima::fastcdr::Cdr & cdr,
  base_interfaces__srv__FaceDetector_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      base_interfaces__srv__FaceDetector_Request__Sequence__fini(&ros_message->request);
    }
    if (!base_interfaces__srv__FaceDetector_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_base_interfaces__srv__FaceDetector_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      base_interfaces__srv__FaceDetector_Response__Sequence__fini(&ros_message->response);
    }
    if (!base_interfaces__srv__FaceDetector_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_base_interfaces__srv__FaceDetector_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t get_serialized_size_base_interfaces__srv__FaceDetector_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Event__ros_msg_type * ros_message = static_cast<const _FaceDetector_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_base_interfaces__srv__FaceDetector_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_base_interfaces__srv__FaceDetector_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t max_serialized_size_base_interfaces__srv__FaceDetector_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_base_interfaces__srv__FaceDetector_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_base_interfaces__srv__FaceDetector_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces__srv__FaceDetector_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
bool cdr_serialize_key_base_interfaces__srv__FaceDetector_Event(
  const base_interfaces__srv__FaceDetector_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_base_interfaces__srv__FaceDetector_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_base_interfaces__srv__FaceDetector_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t get_serialized_size_key_base_interfaces__srv__FaceDetector_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Event__ros_msg_type * ros_message = static_cast<const _FaceDetector_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_base_interfaces__srv__FaceDetector_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_base_interfaces__srv__FaceDetector_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces
size_t max_serialized_size_key_base_interfaces__srv__FaceDetector_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_base_interfaces__srv__FaceDetector_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_base_interfaces__srv__FaceDetector_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_interfaces__srv__FaceDetector_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FaceDetector_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const base_interfaces__srv__FaceDetector_Event * ros_message = static_cast<const base_interfaces__srv__FaceDetector_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_base_interfaces__srv__FaceDetector_Event(ros_message, cdr);
}

static bool _FaceDetector_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  base_interfaces__srv__FaceDetector_Event * ros_message = static_cast<base_interfaces__srv__FaceDetector_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_base_interfaces__srv__FaceDetector_Event(cdr, ros_message);
}

static uint32_t _FaceDetector_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces__srv__FaceDetector_Event(
      untyped_ros_message, 0));
}

static size_t _FaceDetector_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_base_interfaces__srv__FaceDetector_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FaceDetector_Event = {
  "base_interfaces::srv",
  "FaceDetector_Event",
  _FaceDetector_Event__cdr_serialize,
  _FaceDetector_Event__cdr_deserialize,
  _FaceDetector_Event__get_serialized_size,
  _FaceDetector_Event__max_serialized_size,
  nullptr,
  false,
  nullptr,
  nullptr
};

static rosidl_message_type_support_t _FaceDetector_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceDetector_Event,
  get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Event__get_type_hash,
  &base_interfaces__srv__FaceDetector_Event__get_type_description,
  &base_interfaces__srv__FaceDetector_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Event)() {
  return &_FaceDetector_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces/srv/face_detector.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FaceDetector__callbacks = {
  "base_interfaces::srv",
  "FaceDetector",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Response)(),
};

static rosidl_service_type_support_t FaceDetector__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FaceDetector__callbacks,
  get_service_typesupport_handle_function,
  &_FaceDetector_Request__type_support,
  &_FaceDetector_Response__type_support,
  &_FaceDetector_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_interfaces,
    srv,
    FaceDetector
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_interfaces,
    srv,
    FaceDetector
  ),
  &base_interfaces__srv__FaceDetector__get_type_hash,
  &base_interfaces__srv__FaceDetector__get_type_description,
  &base_interfaces__srv__FaceDetector__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector)() {
  return &FaceDetector__handle;
}

#if defined(__cplusplus)
}
#endif
