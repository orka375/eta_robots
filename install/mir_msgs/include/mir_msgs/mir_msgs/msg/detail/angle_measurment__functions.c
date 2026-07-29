// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/AngleMeasurment.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/angle_measurment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mir_msgs__msg__AngleMeasurment__init(mir_msgs__msg__AngleMeasurment * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    mir_msgs__msg__AngleMeasurment__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__AngleMeasurment__fini(mir_msgs__msg__AngleMeasurment * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
mir_msgs__msg__AngleMeasurment__are_equal(const mir_msgs__msg__AngleMeasurment * lhs, const mir_msgs__msg__AngleMeasurment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__AngleMeasurment__copy(
  const mir_msgs__msg__AngleMeasurment * input,
  mir_msgs__msg__AngleMeasurment * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__AngleMeasurment *
mir_msgs__msg__AngleMeasurment__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__AngleMeasurment * msg = (mir_msgs__msg__AngleMeasurment *)allocator.allocate(sizeof(mir_msgs__msg__AngleMeasurment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__AngleMeasurment));
  bool success = mir_msgs__msg__AngleMeasurment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__AngleMeasurment__destroy(mir_msgs__msg__AngleMeasurment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__AngleMeasurment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__AngleMeasurment__Sequence__init(mir_msgs__msg__AngleMeasurment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__AngleMeasurment * data = NULL;

  if (size) {
    data = (mir_msgs__msg__AngleMeasurment *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__AngleMeasurment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__AngleMeasurment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__AngleMeasurment__fini(&data[i - 1]);
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
mir_msgs__msg__AngleMeasurment__Sequence__fini(mir_msgs__msg__AngleMeasurment__Sequence * array)
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
      mir_msgs__msg__AngleMeasurment__fini(&array->data[i]);
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

mir_msgs__msg__AngleMeasurment__Sequence *
mir_msgs__msg__AngleMeasurment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__AngleMeasurment__Sequence * array = (mir_msgs__msg__AngleMeasurment__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__AngleMeasurment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__AngleMeasurment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__AngleMeasurment__Sequence__destroy(mir_msgs__msg__AngleMeasurment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__AngleMeasurment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__AngleMeasurment__Sequence__are_equal(const mir_msgs__msg__AngleMeasurment__Sequence * lhs, const mir_msgs__msg__AngleMeasurment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__AngleMeasurment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__AngleMeasurment__Sequence__copy(
  const mir_msgs__msg__AngleMeasurment__Sequence * input,
  mir_msgs__msg__AngleMeasurment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__AngleMeasurment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__AngleMeasurment * data =
      (mir_msgs__msg__AngleMeasurment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__AngleMeasurment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__AngleMeasurment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__AngleMeasurment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
