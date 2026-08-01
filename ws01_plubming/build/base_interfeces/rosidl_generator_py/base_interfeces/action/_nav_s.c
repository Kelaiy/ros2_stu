// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfeces:action/Nav.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfeces/action/detail/nav__struct.h"
#include "base_interfeces/action/detail/nav__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_Goal", (char *)PyUnicode_1BYTE_DATA(name_attr), 8) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_Goal * ros_message = _ros_message;
  {  // goal_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_theta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_Goal * ros_message = (base_interfeces__action__Nav_Goal *)raw_ros_message;
  {  // goal_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_Result", (char *)PyUnicode_1BYTE_DATA(name_attr), 10) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_Result * ros_message = _ros_message;
  {  // tutle_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "tutle_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tutle_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tutle_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "tutle_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tutle_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tutle_thrta
    PyObject * field = PyObject_GetAttrString(_pymsg, "tutle_thrta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tutle_thrta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_Result * ros_message = (base_interfeces__action__Nav_Result *)raw_ros_message;
  {  // tutle_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tutle_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tutle_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tutle_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tutle_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tutle_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tutle_thrta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tutle_thrta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tutle_thrta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_Feedback", (char *)PyUnicode_1BYTE_DATA(name_attr), 12) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_Feedback * ros_message = _ros_message;
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_Feedback * ros_message = (base_interfeces__action__Nav_Feedback *)raw_ros_message;
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool base_interfeces__action__nav__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_SendGoal_Request", (char *)PyUnicode_1BYTE_DATA(name_attr), 20) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!base_interfeces__action__nav__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_SendGoal_Request * ros_message = (base_interfeces__action__Nav_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = base_interfeces__action__nav__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_SendGoal_Response", (char *)PyUnicode_1BYTE_DATA(name_attr), 21) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_SendGoal_Response * ros_message = (base_interfeces__action__Nav_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool base_interfeces__action__nav__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__send_goal__request__convert_to_py(void * raw_ros_message);
bool base_interfeces__action__nav__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__send_goal__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__send_goal__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_SendGoal_Event", (char *)PyUnicode_1BYTE_DATA(name_attr), 18) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_SendGoal_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!base_interfeces__action__Nav_SendGoal_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create base_interfeces__action__Nav_SendGoal_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    base_interfeces__action__Nav_SendGoal_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!base_interfeces__action__nav__send_goal__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!base_interfeces__action__Nav_SendGoal_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create base_interfeces__action__Nav_SendGoal_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    base_interfeces__action__Nav_SendGoal_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!base_interfeces__action__nav__send_goal__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__send_goal__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_SendGoal_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_SendGoal_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_SendGoal_Event * ros_message = (base_interfeces__action__Nav_SendGoal_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    base_interfeces__action__Nav_SendGoal_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = base_interfeces__action__nav__send_goal__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    base_interfeces__action__Nav_SendGoal_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = base_interfeces__action__nav__send_goal__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_GetResult_Request", (char *)PyUnicode_1BYTE_DATA(name_attr), 21) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_GetResult_Request * ros_message = (base_interfeces__action__Nav_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

bool base_interfeces__action__nav__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_GetResult_Response", (char *)PyUnicode_1BYTE_DATA(name_attr), 22) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!base_interfeces__action__nav__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_GetResult_Response * ros_message = (base_interfeces__action__Nav_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = base_interfeces__action__nav__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool base_interfeces__action__nav__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__get_result__request__convert_to_py(void * raw_ros_message);
bool base_interfeces__action__nav__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__get_result__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__get_result__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_GetResult_Event", (char *)PyUnicode_1BYTE_DATA(name_attr), 19) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_GetResult_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!base_interfeces__action__Nav_GetResult_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create base_interfeces__action__Nav_GetResult_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    base_interfeces__action__Nav_GetResult_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!base_interfeces__action__nav__get_result__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!base_interfeces__action__Nav_GetResult_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create base_interfeces__action__Nav_GetResult_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    base_interfeces__action__Nav_GetResult_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!base_interfeces__action__nav__get_result__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__get_result__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_GetResult_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_GetResult_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_GetResult_Event * ros_message = (base_interfeces__action__Nav_GetResult_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    base_interfeces__action__Nav_GetResult_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = base_interfeces__action__nav__get_result__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    base_interfeces__action__Nav_GetResult_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = base_interfeces__action__nav__get_result__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfeces/action/detail/nav__struct.h"
// already included above
// #include "base_interfeces/action/detail/nav__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool base_interfeces__action__nav__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfeces__action__nav__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfeces__action__nav__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("base_interfeces.action._nav", (char *)PyUnicode_1BYTE_DATA(module_attr), 27) == 0);
    assert(strncmp("Nav_FeedbackMessage", (char *)PyUnicode_1BYTE_DATA(name_attr), 19) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  base_interfeces__action__Nav_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!base_interfeces__action__nav__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfeces__action__nav__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nav_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfeces.action._nav");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nav_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfeces__action__Nav_FeedbackMessage * ros_message = (base_interfeces__action__Nav_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = base_interfeces__action__nav__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
