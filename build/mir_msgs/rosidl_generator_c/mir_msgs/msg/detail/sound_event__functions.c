// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/SoundEvent.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/sound_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sound_guid`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__SoundEvent__init(mir_msgs__msg__SoundEvent * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->time_stamp)) {
    mir_msgs__msg__SoundEvent__fini(msg);
    return false;
  }
  // sound_guid
  if (!rosidl_runtime_c__String__init(&msg->sound_guid)) {
    mir_msgs__msg__SoundEvent__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mir_msgs__msg__SoundEvent__fini(msg);
    return false;
  }
  // event
  return true;
}

void
mir_msgs__msg__SoundEvent__fini(mir_msgs__msg__SoundEvent * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  builtin_interfaces__msg__Time__fini(&msg->time_stamp);
  // sound_guid
  rosidl_runtime_c__String__fini(&msg->sound_guid);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // event
}

bool
mir_msgs__msg__SoundEvent__are_equal(const mir_msgs__msg__SoundEvent * lhs, const mir_msgs__msg__SoundEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // sound_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sound_guid), &(rhs->sound_guid)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // event
  if (lhs->event != rhs->event) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__SoundEvent__copy(
  const mir_msgs__msg__SoundEvent * input,
  mir_msgs__msg__SoundEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // sound_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->sound_guid), &(output->sound_guid)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // event
  output->event = input->event;
  return true;
}

mir_msgs__msg__SoundEvent *
mir_msgs__msg__SoundEvent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SoundEvent * msg = (mir_msgs__msg__SoundEvent *)allocator.allocate(sizeof(mir_msgs__msg__SoundEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__SoundEvent));
  bool success = mir_msgs__msg__SoundEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__SoundEvent__destroy(mir_msgs__msg__SoundEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__SoundEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__SoundEvent__Sequence__init(mir_msgs__msg__SoundEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SoundEvent * data = NULL;

  if (size) {
    data = (mir_msgs__msg__SoundEvent *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__SoundEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__SoundEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__SoundEvent__fini(&data[i - 1]);
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
mir_msgs__msg__SoundEvent__Sequence__fini(mir_msgs__msg__SoundEvent__Sequence * array)
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
      mir_msgs__msg__SoundEvent__fini(&array->data[i]);
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

mir_msgs__msg__SoundEvent__Sequence *
mir_msgs__msg__SoundEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SoundEvent__Sequence * array = (mir_msgs__msg__SoundEvent__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__SoundEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__SoundEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__SoundEvent__Sequence__destroy(mir_msgs__msg__SoundEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__SoundEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__SoundEvent__Sequence__are_equal(const mir_msgs__msg__SoundEvent__Sequence * lhs, const mir_msgs__msg__SoundEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__SoundEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__SoundEvent__Sequence__copy(
  const mir_msgs__msg__SoundEvent__Sequence * input,
  mir_msgs__msg__SoundEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__SoundEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__SoundEvent * data =
      (mir_msgs__msg__SoundEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__SoundEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__SoundEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__SoundEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
