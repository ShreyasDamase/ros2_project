// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srv_pkg:srv/SetRobotSpeed.idl
// generated code does not contain a copyright notice
#include "srv_pkg/srv/detail/set_robot_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
srv_pkg__srv__SetRobotSpeed_Request__init(srv_pkg__srv__SetRobotSpeed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_speed
  // gradual
  return true;
}

void
srv_pkg__srv__SetRobotSpeed_Request__fini(srv_pkg__srv__SetRobotSpeed_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_speed
  // gradual
}

bool
srv_pkg__srv__SetRobotSpeed_Request__are_equal(const srv_pkg__srv__SetRobotSpeed_Request * lhs, const srv_pkg__srv__SetRobotSpeed_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_speed
  if (lhs->target_speed != rhs->target_speed) {
    return false;
  }
  // gradual
  if (lhs->gradual != rhs->gradual) {
    return false;
  }
  return true;
}

bool
srv_pkg__srv__SetRobotSpeed_Request__copy(
  const srv_pkg__srv__SetRobotSpeed_Request * input,
  srv_pkg__srv__SetRobotSpeed_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_speed
  output->target_speed = input->target_speed;
  // gradual
  output->gradual = input->gradual;
  return true;
}

srv_pkg__srv__SetRobotSpeed_Request *
srv_pkg__srv__SetRobotSpeed_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Request * msg = (srv_pkg__srv__SetRobotSpeed_Request *)allocator.allocate(sizeof(srv_pkg__srv__SetRobotSpeed_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_pkg__srv__SetRobotSpeed_Request));
  bool success = srv_pkg__srv__SetRobotSpeed_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srv_pkg__srv__SetRobotSpeed_Request__destroy(srv_pkg__srv__SetRobotSpeed_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srv_pkg__srv__SetRobotSpeed_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srv_pkg__srv__SetRobotSpeed_Request__Sequence__init(srv_pkg__srv__SetRobotSpeed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(srv_pkg__srv__SetRobotSpeed_Request)) {
      return false;
    }
    data = (srv_pkg__srv__SetRobotSpeed_Request *)allocator.zero_allocate(size, sizeof(srv_pkg__srv__SetRobotSpeed_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_pkg__srv__SetRobotSpeed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_pkg__srv__SetRobotSpeed_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srv_pkg__srv__SetRobotSpeed_Request__Sequence__fini(srv_pkg__srv__SetRobotSpeed_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_pkg__srv__SetRobotSpeed_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srv_pkg__srv__SetRobotSpeed_Request__Sequence *
srv_pkg__srv__SetRobotSpeed_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Request__Sequence * array = (srv_pkg__srv__SetRobotSpeed_Request__Sequence *)allocator.allocate(sizeof(srv_pkg__srv__SetRobotSpeed_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srv_pkg__srv__SetRobotSpeed_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srv_pkg__srv__SetRobotSpeed_Request__Sequence__destroy(srv_pkg__srv__SetRobotSpeed_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srv_pkg__srv__SetRobotSpeed_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srv_pkg__srv__SetRobotSpeed_Request__Sequence__are_equal(const srv_pkg__srv__SetRobotSpeed_Request__Sequence * lhs, const srv_pkg__srv__SetRobotSpeed_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srv_pkg__srv__SetRobotSpeed_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__SetRobotSpeed_Request__Sequence__copy(
  const srv_pkg__srv__SetRobotSpeed_Request__Sequence * input,
  srv_pkg__srv__SetRobotSpeed_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(srv_pkg__srv__SetRobotSpeed_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(srv_pkg__srv__SetRobotSpeed_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srv_pkg__srv__SetRobotSpeed_Request * data =
      (srv_pkg__srv__SetRobotSpeed_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srv_pkg__srv__SetRobotSpeed_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srv_pkg__srv__SetRobotSpeed_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srv_pkg__srv__SetRobotSpeed_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
srv_pkg__srv__SetRobotSpeed_Response__init(srv_pkg__srv__SetRobotSpeed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // applied_speed
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    srv_pkg__srv__SetRobotSpeed_Response__fini(msg);
    return false;
  }
  return true;
}

void
srv_pkg__srv__SetRobotSpeed_Response__fini(srv_pkg__srv__SetRobotSpeed_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // applied_speed
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
srv_pkg__srv__SetRobotSpeed_Response__are_equal(const srv_pkg__srv__SetRobotSpeed_Response * lhs, const srv_pkg__srv__SetRobotSpeed_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // applied_speed
  if (lhs->applied_speed != rhs->applied_speed) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
srv_pkg__srv__SetRobotSpeed_Response__copy(
  const srv_pkg__srv__SetRobotSpeed_Response * input,
  srv_pkg__srv__SetRobotSpeed_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // applied_speed
  output->applied_speed = input->applied_speed;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

srv_pkg__srv__SetRobotSpeed_Response *
srv_pkg__srv__SetRobotSpeed_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Response * msg = (srv_pkg__srv__SetRobotSpeed_Response *)allocator.allocate(sizeof(srv_pkg__srv__SetRobotSpeed_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_pkg__srv__SetRobotSpeed_Response));
  bool success = srv_pkg__srv__SetRobotSpeed_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srv_pkg__srv__SetRobotSpeed_Response__destroy(srv_pkg__srv__SetRobotSpeed_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srv_pkg__srv__SetRobotSpeed_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srv_pkg__srv__SetRobotSpeed_Response__Sequence__init(srv_pkg__srv__SetRobotSpeed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(srv_pkg__srv__SetRobotSpeed_Response)) {
      return false;
    }
    data = (srv_pkg__srv__SetRobotSpeed_Response *)allocator.zero_allocate(size, sizeof(srv_pkg__srv__SetRobotSpeed_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_pkg__srv__SetRobotSpeed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_pkg__srv__SetRobotSpeed_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srv_pkg__srv__SetRobotSpeed_Response__Sequence__fini(srv_pkg__srv__SetRobotSpeed_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_pkg__srv__SetRobotSpeed_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srv_pkg__srv__SetRobotSpeed_Response__Sequence *
srv_pkg__srv__SetRobotSpeed_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Response__Sequence * array = (srv_pkg__srv__SetRobotSpeed_Response__Sequence *)allocator.allocate(sizeof(srv_pkg__srv__SetRobotSpeed_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srv_pkg__srv__SetRobotSpeed_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srv_pkg__srv__SetRobotSpeed_Response__Sequence__destroy(srv_pkg__srv__SetRobotSpeed_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srv_pkg__srv__SetRobotSpeed_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srv_pkg__srv__SetRobotSpeed_Response__Sequence__are_equal(const srv_pkg__srv__SetRobotSpeed_Response__Sequence * lhs, const srv_pkg__srv__SetRobotSpeed_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srv_pkg__srv__SetRobotSpeed_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__SetRobotSpeed_Response__Sequence__copy(
  const srv_pkg__srv__SetRobotSpeed_Response__Sequence * input,
  srv_pkg__srv__SetRobotSpeed_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(srv_pkg__srv__SetRobotSpeed_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(srv_pkg__srv__SetRobotSpeed_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srv_pkg__srv__SetRobotSpeed_Response * data =
      (srv_pkg__srv__SetRobotSpeed_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srv_pkg__srv__SetRobotSpeed_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srv_pkg__srv__SetRobotSpeed_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srv_pkg__srv__SetRobotSpeed_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "srv_pkg/srv/detail/set_robot_speed__functions.h"

bool
srv_pkg__srv__SetRobotSpeed_Event__init(srv_pkg__srv__SetRobotSpeed_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    srv_pkg__srv__SetRobotSpeed_Event__fini(msg);
    return false;
  }
  // request
  if (!srv_pkg__srv__SetRobotSpeed_Request__Sequence__init(&msg->request, 0)) {
    srv_pkg__srv__SetRobotSpeed_Event__fini(msg);
    return false;
  }
  // response
  if (!srv_pkg__srv__SetRobotSpeed_Response__Sequence__init(&msg->response, 0)) {
    srv_pkg__srv__SetRobotSpeed_Event__fini(msg);
    return false;
  }
  return true;
}

void
srv_pkg__srv__SetRobotSpeed_Event__fini(srv_pkg__srv__SetRobotSpeed_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  srv_pkg__srv__SetRobotSpeed_Request__Sequence__fini(&msg->request);
  // response
  srv_pkg__srv__SetRobotSpeed_Response__Sequence__fini(&msg->response);
}

bool
srv_pkg__srv__SetRobotSpeed_Event__are_equal(const srv_pkg__srv__SetRobotSpeed_Event * lhs, const srv_pkg__srv__SetRobotSpeed_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!srv_pkg__srv__SetRobotSpeed_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!srv_pkg__srv__SetRobotSpeed_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
srv_pkg__srv__SetRobotSpeed_Event__copy(
  const srv_pkg__srv__SetRobotSpeed_Event * input,
  srv_pkg__srv__SetRobotSpeed_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!srv_pkg__srv__SetRobotSpeed_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!srv_pkg__srv__SetRobotSpeed_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

srv_pkg__srv__SetRobotSpeed_Event *
srv_pkg__srv__SetRobotSpeed_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Event * msg = (srv_pkg__srv__SetRobotSpeed_Event *)allocator.allocate(sizeof(srv_pkg__srv__SetRobotSpeed_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_pkg__srv__SetRobotSpeed_Event));
  bool success = srv_pkg__srv__SetRobotSpeed_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srv_pkg__srv__SetRobotSpeed_Event__destroy(srv_pkg__srv__SetRobotSpeed_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srv_pkg__srv__SetRobotSpeed_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srv_pkg__srv__SetRobotSpeed_Event__Sequence__init(srv_pkg__srv__SetRobotSpeed_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(srv_pkg__srv__SetRobotSpeed_Event)) {
      return false;
    }
    data = (srv_pkg__srv__SetRobotSpeed_Event *)allocator.zero_allocate(size, sizeof(srv_pkg__srv__SetRobotSpeed_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_pkg__srv__SetRobotSpeed_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_pkg__srv__SetRobotSpeed_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srv_pkg__srv__SetRobotSpeed_Event__Sequence__fini(srv_pkg__srv__SetRobotSpeed_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_pkg__srv__SetRobotSpeed_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srv_pkg__srv__SetRobotSpeed_Event__Sequence *
srv_pkg__srv__SetRobotSpeed_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srv_pkg__srv__SetRobotSpeed_Event__Sequence * array = (srv_pkg__srv__SetRobotSpeed_Event__Sequence *)allocator.allocate(sizeof(srv_pkg__srv__SetRobotSpeed_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srv_pkg__srv__SetRobotSpeed_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srv_pkg__srv__SetRobotSpeed_Event__Sequence__destroy(srv_pkg__srv__SetRobotSpeed_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srv_pkg__srv__SetRobotSpeed_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srv_pkg__srv__SetRobotSpeed_Event__Sequence__are_equal(const srv_pkg__srv__SetRobotSpeed_Event__Sequence * lhs, const srv_pkg__srv__SetRobotSpeed_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srv_pkg__srv__SetRobotSpeed_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srv_pkg__srv__SetRobotSpeed_Event__Sequence__copy(
  const srv_pkg__srv__SetRobotSpeed_Event__Sequence * input,
  srv_pkg__srv__SetRobotSpeed_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(srv_pkg__srv__SetRobotSpeed_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(srv_pkg__srv__SetRobotSpeed_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srv_pkg__srv__SetRobotSpeed_Event * data =
      (srv_pkg__srv__SetRobotSpeed_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srv_pkg__srv__SetRobotSpeed_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srv_pkg__srv__SetRobotSpeed_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srv_pkg__srv__SetRobotSpeed_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
