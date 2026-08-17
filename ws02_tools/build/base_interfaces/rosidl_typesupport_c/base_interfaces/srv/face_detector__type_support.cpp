// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from base_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_interfaces/srv/detail/face_detector__struct.h"
#include "base_interfaces/srv/detail/face_detector__type_support.h"
#include "base_interfaces/srv/detail/face_detector__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FaceDetector_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FaceDetector_Request_type_support_ids_t;

static const _FaceDetector_Request_type_support_ids_t _FaceDetector_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FaceDetector_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FaceDetector_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FaceDetector_Request_type_support_symbol_names_t _FaceDetector_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Request)),
  }
};

typedef struct _FaceDetector_Request_type_support_data_t
{
  void * data[2];
} _FaceDetector_Request_type_support_data_t;

static _FaceDetector_Request_type_support_data_t _FaceDetector_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FaceDetector_Request_message_typesupport_map = {
  2,
  "base_interfaces",
  &_FaceDetector_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FaceDetector_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FaceDetector_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FaceDetector_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FaceDetector_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Request__get_type_hash,
  &base_interfaces__srv__FaceDetector_Request__get_type_description,
  &base_interfaces__srv__FaceDetector_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces, srv, FaceDetector_Request)() {
  return &::base_interfaces::srv::rosidl_typesupport_c::FaceDetector_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__type_support.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FaceDetector_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FaceDetector_Response_type_support_ids_t;

static const _FaceDetector_Response_type_support_ids_t _FaceDetector_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FaceDetector_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FaceDetector_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FaceDetector_Response_type_support_symbol_names_t _FaceDetector_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Response)),
  }
};

typedef struct _FaceDetector_Response_type_support_data_t
{
  void * data[2];
} _FaceDetector_Response_type_support_data_t;

static _FaceDetector_Response_type_support_data_t _FaceDetector_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FaceDetector_Response_message_typesupport_map = {
  2,
  "base_interfaces",
  &_FaceDetector_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FaceDetector_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FaceDetector_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FaceDetector_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FaceDetector_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Response__get_type_hash,
  &base_interfaces__srv__FaceDetector_Response__get_type_description,
  &base_interfaces__srv__FaceDetector_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces, srv, FaceDetector_Response)() {
  return &::base_interfaces::srv::rosidl_typesupport_c::FaceDetector_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__type_support.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FaceDetector_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FaceDetector_Event_type_support_ids_t;

static const _FaceDetector_Event_type_support_ids_t _FaceDetector_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FaceDetector_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FaceDetector_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FaceDetector_Event_type_support_symbol_names_t _FaceDetector_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector_Event)),
  }
};

typedef struct _FaceDetector_Event_type_support_data_t
{
  void * data[2];
} _FaceDetector_Event_type_support_data_t;

static _FaceDetector_Event_type_support_data_t _FaceDetector_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FaceDetector_Event_message_typesupport_map = {
  2,
  "base_interfaces",
  &_FaceDetector_Event_message_typesupport_ids.typesupport_identifier[0],
  &_FaceDetector_Event_message_typesupport_symbol_names.symbol_name[0],
  &_FaceDetector_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FaceDetector_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FaceDetector_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &base_interfaces__srv__FaceDetector_Event__get_type_hash,
  &base_interfaces__srv__FaceDetector_Event__get_type_description,
  &base_interfaces__srv__FaceDetector_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces, srv, FaceDetector_Event)() {
  return &::base_interfaces::srv::rosidl_typesupport_c::FaceDetector_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces/srv/detail/face_detector__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _FaceDetector_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FaceDetector_type_support_ids_t;

static const _FaceDetector_type_support_ids_t _FaceDetector_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FaceDetector_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FaceDetector_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FaceDetector_type_support_symbol_names_t _FaceDetector_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces, srv, FaceDetector)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces, srv, FaceDetector)),
  }
};

typedef struct _FaceDetector_type_support_data_t
{
  void * data[2];
} _FaceDetector_type_support_data_t;

static _FaceDetector_type_support_data_t _FaceDetector_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FaceDetector_service_typesupport_map = {
  2,
  "base_interfaces",
  &_FaceDetector_service_typesupport_ids.typesupport_identifier[0],
  &_FaceDetector_service_typesupport_symbol_names.symbol_name[0],
  &_FaceDetector_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FaceDetector_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FaceDetector_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &FaceDetector_Request_message_type_support_handle,
  &FaceDetector_Response_message_type_support_handle,
  &FaceDetector_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces, srv, FaceDetector)() {
  return &::base_interfaces::srv::rosidl_typesupport_c::FaceDetector_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
