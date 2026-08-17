// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces/srv/detail/face_detector__rosidl_typesupport_introspection_c.h"
#include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces/srv/detail/face_detector__functions.h"
#include "base_interfaces/srv/detail/face_detector__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces__srv__FaceDetector_Request__init(message_memory);
}

void base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_fini_function(void * message_memory)
{
  base_interfaces__srv__FaceDetector_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_members = {
  "base_interfaces__srv",  // message namespace
  "FaceDetector_Request",  // message name
  1,  // number of fields
  sizeof(base_interfaces__srv__FaceDetector_Request),
  false,  // has_any_key_member_
  base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_member_array,  // message members
  base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_type_support_handle = {
  0,
  &base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_members,
  get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Request__get_type_hash,
  &base_interfaces__srv__FaceDetector_Request__get_type_description,
  &base_interfaces__srv__FaceDetector_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Request)() {
  base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces/srv/detail/face_detector__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__functions.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__struct.h"


// Include directives for member types
// Member `top`
// Member `right`
// Member `bottom`
// Member `left`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces__srv__FaceDetector_Response__init(message_memory);
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_fini_function(void * message_memory)
{
  base_interfaces__srv__FaceDetector_Response__fini(message_memory);
}

size_t base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__top(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__top(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__top(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__top(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__top(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__top(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__top(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__top(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__right(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__right(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__right(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__right(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__right(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__right(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__bottom(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__bottom(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__bottom(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__bottom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__bottom(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__bottom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__bottom(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__bottom(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__left(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__left(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__left(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__left(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__left(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__left(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_member_array[6] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Response, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "use_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Response, use_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "top",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Response, top),  // bytes offset in struct
    NULL,  // default value
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__top,  // size() function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__top,  // get_const(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__top,  // get(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__top,  // fetch(index, &value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__top,  // assign(index, value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__top,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Response, right),  // bytes offset in struct
    NULL,  // default value
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__right,  // size() function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__right,  // get_const(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__right,  // get(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__right,  // fetch(index, &value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__right,  // assign(index, value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__right,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "bottom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Response, bottom),  // bytes offset in struct
    NULL,  // default value
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__bottom,  // size() function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__bottom,  // get_const(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__bottom,  // get(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__bottom,  // fetch(index, &value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__bottom,  // assign(index, value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__bottom,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Response, left),  // bytes offset in struct
    NULL,  // default value
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__size_function__FaceDetector_Response__left,  // size() function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Response__left,  // get_const(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__get_function__FaceDetector_Response__left,  // get(index) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Response__left,  // fetch(index, &value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Response__left,  // assign(index, value) function pointer
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Response__left,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_members = {
  "base_interfaces__srv",  // message namespace
  "FaceDetector_Response",  // message name
  6,  // number of fields
  sizeof(base_interfaces__srv__FaceDetector_Response),
  false,  // has_any_key_member_
  base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_member_array,  // message members
  base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle = {
  0,
  &base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_members,
  get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Response__get_type_hash,
  &base_interfaces__srv__FaceDetector_Response__get_type_description,
  &base_interfaces__srv__FaceDetector_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Response)() {
  if (!base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces/srv/detail/face_detector__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__functions.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "base_interfaces/srv/face_detector.h"
// Member `request`
// Member `response`
// already included above
// #include "base_interfaces/srv/detail/face_detector__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces__srv__FaceDetector_Event__init(message_memory);
}

void base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_fini_function(void * message_memory)
{
  base_interfaces__srv__FaceDetector_Event__fini(message_memory);
}

size_t base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__size_function__FaceDetector_Event__request(
  const void * untyped_member)
{
  const base_interfaces__srv__FaceDetector_Request__Sequence * member =
    (const base_interfaces__srv__FaceDetector_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Event__request(
  const void * untyped_member, size_t index)
{
  const base_interfaces__srv__FaceDetector_Request__Sequence * member =
    (const base_interfaces__srv__FaceDetector_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_function__FaceDetector_Event__request(
  void * untyped_member, size_t index)
{
  base_interfaces__srv__FaceDetector_Request__Sequence * member =
    (base_interfaces__srv__FaceDetector_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const base_interfaces__srv__FaceDetector_Request * item =
    ((const base_interfaces__srv__FaceDetector_Request *)
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Event__request(untyped_member, index));
  base_interfaces__srv__FaceDetector_Request * value =
    (base_interfaces__srv__FaceDetector_Request *)(untyped_value);
  *value = *item;
}

void base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  base_interfaces__srv__FaceDetector_Request * item =
    ((base_interfaces__srv__FaceDetector_Request *)
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_function__FaceDetector_Event__request(untyped_member, index));
  const base_interfaces__srv__FaceDetector_Request * value =
    (const base_interfaces__srv__FaceDetector_Request *)(untyped_value);
  *item = *value;
}

bool base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Event__request(
  void * untyped_member, size_t size)
{
  base_interfaces__srv__FaceDetector_Request__Sequence * member =
    (base_interfaces__srv__FaceDetector_Request__Sequence *)(untyped_member);
  base_interfaces__srv__FaceDetector_Request__Sequence__fini(member);
  return base_interfaces__srv__FaceDetector_Request__Sequence__init(member, size);
}

size_t base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__size_function__FaceDetector_Event__response(
  const void * untyped_member)
{
  const base_interfaces__srv__FaceDetector_Response__Sequence * member =
    (const base_interfaces__srv__FaceDetector_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Event__response(
  const void * untyped_member, size_t index)
{
  const base_interfaces__srv__FaceDetector_Response__Sequence * member =
    (const base_interfaces__srv__FaceDetector_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_function__FaceDetector_Event__response(
  void * untyped_member, size_t index)
{
  base_interfaces__srv__FaceDetector_Response__Sequence * member =
    (base_interfaces__srv__FaceDetector_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const base_interfaces__srv__FaceDetector_Response * item =
    ((const base_interfaces__srv__FaceDetector_Response *)
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Event__response(untyped_member, index));
  base_interfaces__srv__FaceDetector_Response * value =
    (base_interfaces__srv__FaceDetector_Response *)(untyped_value);
  *value = *item;
}

void base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  base_interfaces__srv__FaceDetector_Response * item =
    ((base_interfaces__srv__FaceDetector_Response *)
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_function__FaceDetector_Event__response(untyped_member, index));
  const base_interfaces__srv__FaceDetector_Response * value =
    (const base_interfaces__srv__FaceDetector_Response *)(untyped_value);
  *item = *value;
}

bool base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Event__response(
  void * untyped_member, size_t size)
{
  base_interfaces__srv__FaceDetector_Response__Sequence * member =
    (base_interfaces__srv__FaceDetector_Response__Sequence *)(untyped_member);
  base_interfaces__srv__FaceDetector_Response__Sequence__fini(member);
  return base_interfaces__srv__FaceDetector_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Event, request),  // bytes offset in struct
    NULL,  // default value
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__size_function__FaceDetector_Event__request,  // size() function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Event__request,  // get_const(index) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_function__FaceDetector_Event__request,  // get(index) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Event__request,  // fetch(index, &value) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Event__request,  // assign(index, value) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(base_interfaces__srv__FaceDetector_Event, response),  // bytes offset in struct
    NULL,  // default value
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__size_function__FaceDetector_Event__response,  // size() function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_const_function__FaceDetector_Event__response,  // get_const(index) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__get_function__FaceDetector_Event__response,  // get(index) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__fetch_function__FaceDetector_Event__response,  // fetch(index, &value) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__assign_function__FaceDetector_Event__response,  // assign(index, value) function pointer
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__resize_function__FaceDetector_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_members = {
  "base_interfaces__srv",  // message namespace
  "FaceDetector_Event",  // message name
  3,  // number of fields
  sizeof(base_interfaces__srv__FaceDetector_Event),
  false,  // has_any_key_member_
  base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_member_array,  // message members
  base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_type_support_handle = {
  0,
  &base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_members,
  get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Event__get_type_hash,
  &base_interfaces__srv__FaceDetector_Event__get_type_description,
  &base_interfaces__srv__FaceDetector_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Event)() {
  base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Request)();
  base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Response)();
  if (!base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_members = {
  "base_interfaces__srv",  // service namespace
  "FaceDetector",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_Request_message_type_support_handle,
  NULL,  // response message
  // base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle
  NULL  // event_message
  // base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle
};


static rosidl_service_type_support_t base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_type_support_handle = {
  0,
  &base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_members,
  get_service_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Request__rosidl_typesupport_introspection_c__FaceDetector_Request_message_type_support_handle,
  &base_interfaces__srv__FaceDetector_Response__rosidl_typesupport_introspection_c__FaceDetector_Response_message_type_support_handle,
  &base_interfaces__srv__FaceDetector_Event__rosidl_typesupport_introspection_c__FaceDetector_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector)(void) {
  if (!base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_type_support_handle.typesupport_identifier) {
    base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Event)()->data;
  }

  return &base_interfaces__srv__detail__face_detector__rosidl_typesupport_introspection_c__FaceDetector_service_type_support_handle;
}
