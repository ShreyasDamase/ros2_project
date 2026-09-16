// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice

#include "srv_pkg/srv/detail/set_robot_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__SetRobotSpeed__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x9e, 0xa2, 0x85, 0x06, 0x6a, 0x0b, 0x20,
      0x9b, 0x86, 0x85, 0x34, 0x9d, 0x08, 0x4e, 0x0b,
      0x41, 0xf8, 0xa4, 0x91, 0xe1, 0xde, 0xa8, 0x47,
      0xb1, 0xf4, 0xf2, 0x09, 0x79, 0x02, 0xaf, 0x36,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__SetRobotSpeed_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x75, 0x46, 0xdb, 0x03, 0xcb, 0xaa, 0x2d,
      0x00, 0x4f, 0xe0, 0xc2, 0x53, 0x83, 0x01, 0xc6,
      0x41, 0x6b, 0xd9, 0x50, 0x84, 0x65, 0xf5, 0x5a,
      0x9a, 0x55, 0xbd, 0x80, 0xc0, 0xd2, 0x27, 0x3d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__SetRobotSpeed_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x24, 0x32, 0xac, 0x66, 0xe3, 0xb4, 0xfa,
      0x3c, 0x08, 0xfd, 0x41, 0x54, 0xe5, 0xd1, 0x4f,
      0x7e, 0xf7, 0xf4, 0x3e, 0x94, 0xb4, 0x1e, 0x73,
      0x59, 0x4e, 0xaf, 0xae, 0x95, 0xe4, 0x73, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__SetRobotSpeed_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0xda, 0xd7, 0x35, 0x86, 0x65, 0x7d, 0xd2,
      0x65, 0x13, 0xa1, 0x30, 0x43, 0x28, 0xff, 0xcc,
      0x82, 0x54, 0x43, 0x23, 0x23, 0x84, 0x8b, 0x1c,
      0x3a, 0x38, 0xeb, 0x39, 0xf3, 0x73, 0x41, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char srv_pkg__srv__SetRobotSpeed__TYPE_NAME[] = "srv_pkg/srv/SetRobotSpeed";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char srv_pkg__srv__SetRobotSpeed_Event__TYPE_NAME[] = "srv_pkg/srv/SetRobotSpeed_Event";
static char srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME[] = "srv_pkg/srv/SetRobotSpeed_Request";
static char srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME[] = "srv_pkg/srv/SetRobotSpeed_Response";

// Define type names, field names, and default values
static char srv_pkg__srv__SetRobotSpeed__FIELD_NAME__request_message[] = "request_message";
static char srv_pkg__srv__SetRobotSpeed__FIELD_NAME__response_message[] = "response_message";
static char srv_pkg__srv__SetRobotSpeed__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__SetRobotSpeed__FIELDS[] = {
  {
    {srv_pkg__srv__SetRobotSpeed__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {srv_pkg__srv__SetRobotSpeed_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription srv_pkg__srv__SetRobotSpeed__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__SetRobotSpeed__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__SetRobotSpeed__TYPE_NAME, 25, 25},
      {srv_pkg__srv__SetRobotSpeed__FIELDS, 3, 3},
    },
    {srv_pkg__srv__SetRobotSpeed__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = srv_pkg__srv__SetRobotSpeed_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = srv_pkg__srv__SetRobotSpeed_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = srv_pkg__srv__SetRobotSpeed_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char srv_pkg__srv__SetRobotSpeed_Request__FIELD_NAME__target_speed[] = "target_speed";
static char srv_pkg__srv__SetRobotSpeed_Request__FIELD_NAME__gradual[] = "gradual";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__SetRobotSpeed_Request__FIELDS[] = {
  {
    {srv_pkg__srv__SetRobotSpeed_Request__FIELD_NAME__target_speed, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Request__FIELD_NAME__gradual, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__SetRobotSpeed_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME, 33, 33},
      {srv_pkg__srv__SetRobotSpeed_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char srv_pkg__srv__SetRobotSpeed_Response__FIELD_NAME__success[] = "success";
static char srv_pkg__srv__SetRobotSpeed_Response__FIELD_NAME__applied_speed[] = "applied_speed";
static char srv_pkg__srv__SetRobotSpeed_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__SetRobotSpeed_Response__FIELDS[] = {
  {
    {srv_pkg__srv__SetRobotSpeed_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Response__FIELD_NAME__applied_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__SetRobotSpeed_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME, 34, 34},
      {srv_pkg__srv__SetRobotSpeed_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char srv_pkg__srv__SetRobotSpeed_Event__FIELD_NAME__info[] = "info";
static char srv_pkg__srv__SetRobotSpeed_Event__FIELD_NAME__request[] = "request";
static char srv_pkg__srv__SetRobotSpeed_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__SetRobotSpeed_Event__FIELDS[] = {
  {
    {srv_pkg__srv__SetRobotSpeed_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription srv_pkg__srv__SetRobotSpeed_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__SetRobotSpeed_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__SetRobotSpeed_Event__TYPE_NAME, 31, 31},
      {srv_pkg__srv__SetRobotSpeed_Event__FIELDS, 3, 3},
    },
    {srv_pkg__srv__SetRobotSpeed_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = srv_pkg__srv__SetRobotSpeed_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = srv_pkg__srv__SetRobotSpeed_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 target_speed\n"
  "bool gradual\n"
  "---\n"
  "bool success\n"
  "float32 applied_speed\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__SetRobotSpeed__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__SetRobotSpeed__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 88, 88},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__SetRobotSpeed_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__SetRobotSpeed_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__SetRobotSpeed_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__SetRobotSpeed_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__SetRobotSpeed_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__SetRobotSpeed_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__SetRobotSpeed__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__SetRobotSpeed__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *srv_pkg__srv__SetRobotSpeed_Event__get_individual_type_description_source(NULL);
    sources[4] = *srv_pkg__srv__SetRobotSpeed_Request__get_individual_type_description_source(NULL);
    sources[5] = *srv_pkg__srv__SetRobotSpeed_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__SetRobotSpeed_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__SetRobotSpeed_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__SetRobotSpeed_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__SetRobotSpeed_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__SetRobotSpeed_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__SetRobotSpeed_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *srv_pkg__srv__SetRobotSpeed_Request__get_individual_type_description_source(NULL);
    sources[4] = *srv_pkg__srv__SetRobotSpeed_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
