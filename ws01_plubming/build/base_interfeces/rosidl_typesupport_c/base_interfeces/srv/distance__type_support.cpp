// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from base_interfeces:srv/Distance.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_interfeces/srv/detail/distance__struct.h"
#include "base_interfeces/srv/detail/distance__type_support.h"
#include "base_interfeces/srv/detail/distance__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Distance_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Distance_Request_type_support_ids_t;

static const _Distance_Request_type_support_ids_t _Distance_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Distance_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Distance_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Distance_Request_type_support_symbol_names_t _Distance_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfeces, srv, Distance_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfeces, srv, Distance_Request)),
  }
};

typedef struct _Distance_Request_type_support_data_t
{
  void * data[2];
} _Distance_Request_type_support_data_t;

static _Distance_Request_type_support_data_t _Distance_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Distance_Request_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Distance_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Distance_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Distance_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Distance_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Distance_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &base_interfeces__srv__Distance_Request__get_type_hash,
  &base_interfeces__srv__Distance_Request__get_type_description,
  &base_interfeces__srv__Distance_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfeces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfeces, srv, Distance_Request)() {
  return &::base_interfeces::srv::rosidl_typesupport_c::Distance_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/srv/detail/distance__struct.h"
// already included above
// #include "base_interfeces/srv/detail/distance__type_support.h"
// already included above
// #include "base_interfeces/srv/detail/distance__functions.h"
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

namespace base_interfeces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Distance_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Distance_Response_type_support_ids_t;

static const _Distance_Response_type_support_ids_t _Distance_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Distance_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Distance_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Distance_Response_type_support_symbol_names_t _Distance_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfeces, srv, Distance_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfeces, srv, Distance_Response)),
  }
};

typedef struct _Distance_Response_type_support_data_t
{
  void * data[2];
} _Distance_Response_type_support_data_t;

static _Distance_Response_type_support_data_t _Distance_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Distance_Response_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Distance_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Distance_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Distance_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Distance_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Distance_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &base_interfeces__srv__Distance_Response__get_type_hash,
  &base_interfeces__srv__Distance_Response__get_type_description,
  &base_interfeces__srv__Distance_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfeces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfeces, srv, Distance_Response)() {
  return &::base_interfeces::srv::rosidl_typesupport_c::Distance_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/srv/detail/distance__struct.h"
// already included above
// #include "base_interfeces/srv/detail/distance__type_support.h"
// already included above
// #include "base_interfeces/srv/detail/distance__functions.h"
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

namespace base_interfeces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Distance_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Distance_Event_type_support_ids_t;

static const _Distance_Event_type_support_ids_t _Distance_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Distance_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Distance_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Distance_Event_type_support_symbol_names_t _Distance_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfeces, srv, Distance_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfeces, srv, Distance_Event)),
  }
};

typedef struct _Distance_Event_type_support_data_t
{
  void * data[2];
} _Distance_Event_type_support_data_t;

static _Distance_Event_type_support_data_t _Distance_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Distance_Event_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Distance_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Distance_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Distance_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Distance_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Distance_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &base_interfeces__srv__Distance_Event__get_type_hash,
  &base_interfeces__srv__Distance_Event__get_type_description,
  &base_interfeces__srv__Distance_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfeces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfeces, srv, Distance_Event)() {
  return &::base_interfeces::srv::rosidl_typesupport_c::Distance_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfeces/srv/detail/distance__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace base_interfeces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Distance_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Distance_type_support_ids_t;

static const _Distance_type_support_ids_t _Distance_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Distance_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Distance_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Distance_type_support_symbol_names_t _Distance_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfeces, srv, Distance)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfeces, srv, Distance)),
  }
};

typedef struct _Distance_type_support_data_t
{
  void * data[2];
} _Distance_type_support_data_t;

static _Distance_type_support_data_t _Distance_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Distance_service_typesupport_map = {
  2,
  "base_interfeces",
  &_Distance_service_typesupport_ids.typesupport_identifier[0],
  &_Distance_service_typesupport_symbol_names.symbol_name[0],
  &_Distance_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Distance_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Distance_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Distance_Request_message_type_support_handle,
  &Distance_Response_message_type_support_handle,
  &Distance_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_interfeces,
    srv,
    Distance
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_interfeces,
    srv,
    Distance
  ),
  &base_interfeces__srv__Distance__get_type_hash,
  &base_interfeces__srv__Distance__get_type_description,
  &base_interfeces__srv__Distance__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace base_interfeces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, base_interfeces, srv, Distance)() {
  return &::base_interfeces::srv::rosidl_typesupport_c::Distance_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
