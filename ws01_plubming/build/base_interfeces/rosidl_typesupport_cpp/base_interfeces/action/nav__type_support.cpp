// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from base_interfeces:action/Nav.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_interfeces/action/detail/nav__functions.h"
#include "base_interfeces/action/detail/nav__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_Goal_type_support_ids_t;

static const _Nav_Goal_type_support_ids_t _Nav_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_Goal_type_support_symbol_names_t _Nav_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_Goal)),
  }
};

typedef struct _Nav_Goal_type_support_data_t
{
  void * data[2];
} _Nav_Goal_type_support_data_t;

static _Nav_Goal_type_support_data_t _Nav_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_Goal_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_Goal__get_type_hash,
  &base_interfeces__action__Nav_Goal__get_type_description,
  &base_interfeces__action__Nav_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_Goal>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_Goal)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_Result_type_support_ids_t;

static const _Nav_Result_type_support_ids_t _Nav_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_Result_type_support_symbol_names_t _Nav_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_Result)),
  }
};

typedef struct _Nav_Result_type_support_data_t
{
  void * data[2];
} _Nav_Result_type_support_data_t;

static _Nav_Result_type_support_data_t _Nav_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_Result_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_Result__get_type_hash,
  &base_interfeces__action__Nav_Result__get_type_description,
  &base_interfeces__action__Nav_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_Result>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_Result)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_Feedback_type_support_ids_t;

static const _Nav_Feedback_type_support_ids_t _Nav_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_Feedback_type_support_symbol_names_t _Nav_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_Feedback)),
  }
};

typedef struct _Nav_Feedback_type_support_data_t
{
  void * data[2];
} _Nav_Feedback_type_support_data_t;

static _Nav_Feedback_type_support_data_t _Nav_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_Feedback_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_Feedback__get_type_hash,
  &base_interfeces__action__Nav_Feedback__get_type_description,
  &base_interfeces__action__Nav_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_Feedback>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_Feedback)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_Request_type_support_ids_t;

static const _Nav_SendGoal_Request_type_support_ids_t _Nav_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_Request_type_support_symbol_names_t _Nav_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_SendGoal_Request)),
  }
};

typedef struct _Nav_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_Request_type_support_data_t;

static _Nav_SendGoal_Request_type_support_data_t _Nav_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_Request_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_SendGoal_Request__get_type_hash,
  &base_interfeces__action__Nav_SendGoal_Request__get_type_description,
  &base_interfeces__action__Nav_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Request>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_SendGoal_Request)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_Response_type_support_ids_t;

static const _Nav_SendGoal_Response_type_support_ids_t _Nav_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_Response_type_support_symbol_names_t _Nav_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_SendGoal_Response)),
  }
};

typedef struct _Nav_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_Response_type_support_data_t;

static _Nav_SendGoal_Response_type_support_data_t _Nav_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_Response_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_SendGoal_Response__get_type_hash,
  &base_interfeces__action__Nav_SendGoal_Response__get_type_description,
  &base_interfeces__action__Nav_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Response>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_SendGoal_Response)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_Event_type_support_ids_t;

static const _Nav_SendGoal_Event_type_support_ids_t _Nav_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_Event_type_support_symbol_names_t _Nav_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_SendGoal_Event)),
  }
};

typedef struct _Nav_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_Event_type_support_data_t;

static _Nav_SendGoal_Event_type_support_data_t _Nav_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_Event_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_SendGoal_Event__get_type_hash,
  &base_interfeces__action__Nav_SendGoal_Event__get_type_description,
  &base_interfeces__action__Nav_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Event>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_SendGoal_Event)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_type_support_ids_t;

static const _Nav_SendGoal_type_support_ids_t _Nav_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_type_support_symbol_names_t _Nav_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_SendGoal)),
  }
};

typedef struct _Nav_SendGoal_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_type_support_data_t;

static _Nav_SendGoal_type_support_data_t _Nav_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_service_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Nav_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfeces::action::Nav_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<base_interfeces::action::Nav_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<base_interfeces::action::Nav_SendGoal>,
  &base_interfeces__action__Nav_SendGoal__get_type_hash,
  &base_interfeces__action__Nav_SendGoal__get_type_description,
  &base_interfeces__action__Nav_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<base_interfeces::action::Nav_SendGoal>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<base_interfeces::action::Nav_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_Request_type_support_ids_t;

static const _Nav_GetResult_Request_type_support_ids_t _Nav_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_Request_type_support_symbol_names_t _Nav_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_GetResult_Request)),
  }
};

typedef struct _Nav_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_Request_type_support_data_t;

static _Nav_GetResult_Request_type_support_data_t _Nav_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_Request_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_GetResult_Request__get_type_hash,
  &base_interfeces__action__Nav_GetResult_Request__get_type_description,
  &base_interfeces__action__Nav_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Request>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_GetResult_Request)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_Response_type_support_ids_t;

static const _Nav_GetResult_Response_type_support_ids_t _Nav_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_Response_type_support_symbol_names_t _Nav_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_GetResult_Response)),
  }
};

typedef struct _Nav_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_Response_type_support_data_t;

static _Nav_GetResult_Response_type_support_data_t _Nav_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_Response_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_GetResult_Response__get_type_hash,
  &base_interfeces__action__Nav_GetResult_Response__get_type_description,
  &base_interfeces__action__Nav_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Response>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_GetResult_Response)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_Event_type_support_ids_t;

static const _Nav_GetResult_Event_type_support_ids_t _Nav_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_Event_type_support_symbol_names_t _Nav_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_GetResult_Event)),
  }
};

typedef struct _Nav_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_Event_type_support_data_t;

static _Nav_GetResult_Event_type_support_data_t _Nav_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_Event_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_GetResult_Event__get_type_hash,
  &base_interfeces__action__Nav_GetResult_Event__get_type_description,
  &base_interfeces__action__Nav_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Event>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_GetResult_Event)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_type_support_ids_t;

static const _Nav_GetResult_type_support_ids_t _Nav_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_type_support_symbol_names_t _Nav_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_GetResult)),
  }
};

typedef struct _Nav_GetResult_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_type_support_data_t;

static _Nav_GetResult_type_support_data_t _Nav_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_service_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Nav_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfeces::action::Nav_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<base_interfeces::action::Nav_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<base_interfeces::action::Nav_GetResult>,
  &base_interfeces__action__Nav_GetResult__get_type_hash,
  &base_interfeces__action__Nav_GetResult__get_type_description,
  &base_interfeces__action__Nav_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<base_interfeces::action::Nav_GetResult>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<base_interfeces::action::Nav_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Nav_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_FeedbackMessage_type_support_ids_t;

static const _Nav_FeedbackMessage_type_support_ids_t _Nav_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Nav_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_FeedbackMessage_type_support_symbol_names_t _Nav_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfeces, action, Nav_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfeces, action, Nav_FeedbackMessage)),
  }
};

typedef struct _Nav_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Nav_FeedbackMessage_type_support_data_t;

static _Nav_FeedbackMessage_type_support_data_t _Nav_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_FeedbackMessage_message_typesupport_map = {
  2,
  "base_interfeces",
  &_Nav_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfeces__action__Nav_FeedbackMessage__get_type_hash,
  &base_interfeces__action__Nav_FeedbackMessage__get_type_description,
  &base_interfeces__action__Nav_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfeces::action::Nav_FeedbackMessage>()
{
  return &::base_interfeces::action::rosidl_typesupport_cpp::Nav_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav_FeedbackMessage)() {
  return get_message_type_support_handle<base_interfeces::action::Nav_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "base_interfeces/action/detail/nav__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace base_interfeces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Nav_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &base_interfeces__action__Nav__get_type_hash,
  &base_interfeces__action__Nav__get_type_description,
  &base_interfeces__action__Nav__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfeces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<base_interfeces::action::Nav>()
{
  using ::base_interfeces::action::rosidl_typesupport_cpp::Nav_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Nav_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::base_interfeces::action::Nav::Impl::SendGoalService>();
  Nav_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::base_interfeces::action::Nav::Impl::GetResultService>();
  Nav_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::base_interfeces::action::Nav::Impl::CancelGoalService>();
  Nav_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::base_interfeces::action::Nav::Impl::FeedbackMessage>();
  Nav_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::base_interfeces::action::Nav::Impl::GoalStatusMessage>();
  return &Nav_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfeces, action, Nav)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<base_interfeces::action::Nav>();
}

#ifdef __cplusplus
}
#endif
