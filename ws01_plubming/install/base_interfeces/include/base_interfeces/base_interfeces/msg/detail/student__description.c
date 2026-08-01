// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfeces:msg/Student.idl
// generated code does not contain a copyright notice

#include "base_interfeces/msg/detail/student__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfeces
const rosidl_type_hash_t *
base_interfeces__msg__Student__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x82, 0x08, 0xeb, 0x5e, 0x2c, 0xa6, 0x1f,
      0x64, 0x24, 0x5c, 0x52, 0xcd, 0xe7, 0x23, 0x92,
      0x28, 0x51, 0x52, 0x9b, 0x20, 0xdd, 0xa1, 0x50,
      0x1a, 0xf1, 0x90, 0x8f, 0x7e, 0xbc, 0xf8, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_interfeces__msg__Student__TYPE_NAME[] = "base_interfeces/msg/Student";

// Define type names, field names, and default values
static char base_interfeces__msg__Student__FIELD_NAME__name[] = "name";
static char base_interfeces__msg__Student__FIELD_NAME__age[] = "age";
static char base_interfeces__msg__Student__FIELD_NAME__height[] = "height";

static rosidl_runtime_c__type_description__Field base_interfeces__msg__Student__FIELDS[] = {
  {
    {base_interfeces__msg__Student__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfeces__msg__Student__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfeces__msg__Student__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfeces__msg__Student__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfeces__msg__Student__TYPE_NAME, 27, 27},
      {base_interfeces__msg__Student__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string  name\n"
  "int32   age\n"
  "float64 height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfeces__msg__Student__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfeces__msg__Student__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfeces__msg__Student__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfeces__msg__Student__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
