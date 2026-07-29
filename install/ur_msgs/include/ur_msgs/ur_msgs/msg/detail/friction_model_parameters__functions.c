// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/friction_model_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `viscous_scale`
// Member `coulomb_scale`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ur_msgs__msg__FrictionModelParameters__init(ur_msgs__msg__FrictionModelParameters * msg)
{
  if (!msg) {
    return false;
  }
  // viscous_scale
  if (!rosidl_runtime_c__double__Sequence__init(&msg->viscous_scale, 0)) {
    ur_msgs__msg__FrictionModelParameters__fini(msg);
    return false;
  }
  // coulomb_scale
  if (!rosidl_runtime_c__double__Sequence__init(&msg->coulomb_scale, 0)) {
    ur_msgs__msg__FrictionModelParameters__fini(msg);
    return false;
  }
  return true;
}

void
ur_msgs__msg__FrictionModelParameters__fini(ur_msgs__msg__FrictionModelParameters * msg)
{
  if (!msg) {
    return;
  }
  // viscous_scale
  rosidl_runtime_c__double__Sequence__fini(&msg->viscous_scale);
  // coulomb_scale
  rosidl_runtime_c__double__Sequence__fini(&msg->coulomb_scale);
}

bool
ur_msgs__msg__FrictionModelParameters__are_equal(const ur_msgs__msg__FrictionModelParameters * lhs, const ur_msgs__msg__FrictionModelParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // viscous_scale
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->viscous_scale), &(rhs->viscous_scale)))
  {
    return false;
  }
  // coulomb_scale
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->coulomb_scale), &(rhs->coulomb_scale)))
  {
    return false;
  }
  return true;
}

bool
ur_msgs__msg__FrictionModelParameters__copy(
  const ur_msgs__msg__FrictionModelParameters * input,
  ur_msgs__msg__FrictionModelParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // viscous_scale
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->viscous_scale), &(output->viscous_scale)))
  {
    return false;
  }
  // coulomb_scale
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->coulomb_scale), &(output->coulomb_scale)))
  {
    return false;
  }
  return true;
}

ur_msgs__msg__FrictionModelParameters *
ur_msgs__msg__FrictionModelParameters__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_msgs__msg__FrictionModelParameters * msg = (ur_msgs__msg__FrictionModelParameters *)allocator.allocate(sizeof(ur_msgs__msg__FrictionModelParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_msgs__msg__FrictionModelParameters));
  bool success = ur_msgs__msg__FrictionModelParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_msgs__msg__FrictionModelParameters__destroy(ur_msgs__msg__FrictionModelParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_msgs__msg__FrictionModelParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_msgs__msg__FrictionModelParameters__Sequence__init(ur_msgs__msg__FrictionModelParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_msgs__msg__FrictionModelParameters * data = NULL;

  if (size) {
    data = (ur_msgs__msg__FrictionModelParameters *)allocator.zero_allocate(size, sizeof(ur_msgs__msg__FrictionModelParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_msgs__msg__FrictionModelParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_msgs__msg__FrictionModelParameters__fini(&data[i - 1]);
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
ur_msgs__msg__FrictionModelParameters__Sequence__fini(ur_msgs__msg__FrictionModelParameters__Sequence * array)
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
      ur_msgs__msg__FrictionModelParameters__fini(&array->data[i]);
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

ur_msgs__msg__FrictionModelParameters__Sequence *
ur_msgs__msg__FrictionModelParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_msgs__msg__FrictionModelParameters__Sequence * array = (ur_msgs__msg__FrictionModelParameters__Sequence *)allocator.allocate(sizeof(ur_msgs__msg__FrictionModelParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_msgs__msg__FrictionModelParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_msgs__msg__FrictionModelParameters__Sequence__destroy(ur_msgs__msg__FrictionModelParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_msgs__msg__FrictionModelParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_msgs__msg__FrictionModelParameters__Sequence__are_equal(const ur_msgs__msg__FrictionModelParameters__Sequence * lhs, const ur_msgs__msg__FrictionModelParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_msgs__msg__FrictionModelParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_msgs__msg__FrictionModelParameters__Sequence__copy(
  const ur_msgs__msg__FrictionModelParameters__Sequence * input,
  ur_msgs__msg__FrictionModelParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_msgs__msg__FrictionModelParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_msgs__msg__FrictionModelParameters * data =
      (ur_msgs__msg__FrictionModelParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_msgs__msg__FrictionModelParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_msgs__msg__FrictionModelParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_msgs__msg__FrictionModelParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
