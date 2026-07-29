// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/EncoderTestEntry.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/encoder_test_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `suggested_direction`
// Member `user_direction`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__EncoderTestEntry__init(mir_msgs__msg__EncoderTestEntry * msg)
{
  if (!msg) {
    return false;
  }
  // command_velocity
  // command_distance
  // left_dist
  // right_dist
  // suggested_direction
  if (!rosidl_runtime_c__String__init(&msg->suggested_direction)) {
    mir_msgs__msg__EncoderTestEntry__fini(msg);
    return false;
  }
  // user_direction
  if (!rosidl_runtime_c__String__init(&msg->user_direction)) {
    mir_msgs__msg__EncoderTestEntry__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__EncoderTestEntry__fini(mir_msgs__msg__EncoderTestEntry * msg)
{
  if (!msg) {
    return;
  }
  // command_velocity
  // command_distance
  // left_dist
  // right_dist
  // suggested_direction
  rosidl_runtime_c__String__fini(&msg->suggested_direction);
  // user_direction
  rosidl_runtime_c__String__fini(&msg->user_direction);
}

bool
mir_msgs__msg__EncoderTestEntry__are_equal(const mir_msgs__msg__EncoderTestEntry * lhs, const mir_msgs__msg__EncoderTestEntry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command_velocity
  if (lhs->command_velocity != rhs->command_velocity) {
    return false;
  }
  // command_distance
  if (lhs->command_distance != rhs->command_distance) {
    return false;
  }
  // left_dist
  if (lhs->left_dist != rhs->left_dist) {
    return false;
  }
  // right_dist
  if (lhs->right_dist != rhs->right_dist) {
    return false;
  }
  // suggested_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->suggested_direction), &(rhs->suggested_direction)))
  {
    return false;
  }
  // user_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_direction), &(rhs->user_direction)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__EncoderTestEntry__copy(
  const mir_msgs__msg__EncoderTestEntry * input,
  mir_msgs__msg__EncoderTestEntry * output)
{
  if (!input || !output) {
    return false;
  }
  // command_velocity
  output->command_velocity = input->command_velocity;
  // command_distance
  output->command_distance = input->command_distance;
  // left_dist
  output->left_dist = input->left_dist;
  // right_dist
  output->right_dist = input->right_dist;
  // suggested_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->suggested_direction), &(output->suggested_direction)))
  {
    return false;
  }
  // user_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->user_direction), &(output->user_direction)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__EncoderTestEntry *
mir_msgs__msg__EncoderTestEntry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__EncoderTestEntry * msg = (mir_msgs__msg__EncoderTestEntry *)allocator.allocate(sizeof(mir_msgs__msg__EncoderTestEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__EncoderTestEntry));
  bool success = mir_msgs__msg__EncoderTestEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__EncoderTestEntry__destroy(mir_msgs__msg__EncoderTestEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__EncoderTestEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__EncoderTestEntry__Sequence__init(mir_msgs__msg__EncoderTestEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__EncoderTestEntry * data = NULL;

  if (size) {
    data = (mir_msgs__msg__EncoderTestEntry *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__EncoderTestEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__EncoderTestEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__EncoderTestEntry__fini(&data[i - 1]);
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
mir_msgs__msg__EncoderTestEntry__Sequence__fini(mir_msgs__msg__EncoderTestEntry__Sequence * array)
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
      mir_msgs__msg__EncoderTestEntry__fini(&array->data[i]);
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

mir_msgs__msg__EncoderTestEntry__Sequence *
mir_msgs__msg__EncoderTestEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__EncoderTestEntry__Sequence * array = (mir_msgs__msg__EncoderTestEntry__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__EncoderTestEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__EncoderTestEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__EncoderTestEntry__Sequence__destroy(mir_msgs__msg__EncoderTestEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__EncoderTestEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__EncoderTestEntry__Sequence__are_equal(const mir_msgs__msg__EncoderTestEntry__Sequence * lhs, const mir_msgs__msg__EncoderTestEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__EncoderTestEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__EncoderTestEntry__Sequence__copy(
  const mir_msgs__msg__EncoderTestEntry__Sequence * input,
  mir_msgs__msg__EncoderTestEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__EncoderTestEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__EncoderTestEntry * data =
      (mir_msgs__msg__EncoderTestEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__EncoderTestEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__EncoderTestEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__EncoderTestEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
