// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/SkidDetectionDiff.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/skid_detection_diff__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mir_msgs__msg__SkidDetectionDiff__init(mir_msgs__msg__SkidDetectionDiff * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->time_stamp)) {
    mir_msgs__msg__SkidDetectionDiff__fini(msg);
    return false;
  }
  // enc_acc_x
  // enc_acc_y
  // enc_rot_th
  // imu_acc_x
  // imu_acc_y
  // imu_rot_th
  // diff_acc_x
  // diff_acc_y
  // diff_rot_th
  return true;
}

void
mir_msgs__msg__SkidDetectionDiff__fini(mir_msgs__msg__SkidDetectionDiff * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  builtin_interfaces__msg__Time__fini(&msg->time_stamp);
  // enc_acc_x
  // enc_acc_y
  // enc_rot_th
  // imu_acc_x
  // imu_acc_y
  // imu_rot_th
  // diff_acc_x
  // diff_acc_y
  // diff_rot_th
}

bool
mir_msgs__msg__SkidDetectionDiff__are_equal(const mir_msgs__msg__SkidDetectionDiff * lhs, const mir_msgs__msg__SkidDetectionDiff * rhs)
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
  // enc_acc_x
  if (lhs->enc_acc_x != rhs->enc_acc_x) {
    return false;
  }
  // enc_acc_y
  if (lhs->enc_acc_y != rhs->enc_acc_y) {
    return false;
  }
  // enc_rot_th
  if (lhs->enc_rot_th != rhs->enc_rot_th) {
    return false;
  }
  // imu_acc_x
  if (lhs->imu_acc_x != rhs->imu_acc_x) {
    return false;
  }
  // imu_acc_y
  if (lhs->imu_acc_y != rhs->imu_acc_y) {
    return false;
  }
  // imu_rot_th
  if (lhs->imu_rot_th != rhs->imu_rot_th) {
    return false;
  }
  // diff_acc_x
  if (lhs->diff_acc_x != rhs->diff_acc_x) {
    return false;
  }
  // diff_acc_y
  if (lhs->diff_acc_y != rhs->diff_acc_y) {
    return false;
  }
  // diff_rot_th
  if (lhs->diff_rot_th != rhs->diff_rot_th) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__SkidDetectionDiff__copy(
  const mir_msgs__msg__SkidDetectionDiff * input,
  mir_msgs__msg__SkidDetectionDiff * output)
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
  // enc_acc_x
  output->enc_acc_x = input->enc_acc_x;
  // enc_acc_y
  output->enc_acc_y = input->enc_acc_y;
  // enc_rot_th
  output->enc_rot_th = input->enc_rot_th;
  // imu_acc_x
  output->imu_acc_x = input->imu_acc_x;
  // imu_acc_y
  output->imu_acc_y = input->imu_acc_y;
  // imu_rot_th
  output->imu_rot_th = input->imu_rot_th;
  // diff_acc_x
  output->diff_acc_x = input->diff_acc_x;
  // diff_acc_y
  output->diff_acc_y = input->diff_acc_y;
  // diff_rot_th
  output->diff_rot_th = input->diff_rot_th;
  return true;
}

mir_msgs__msg__SkidDetectionDiff *
mir_msgs__msg__SkidDetectionDiff__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SkidDetectionDiff * msg = (mir_msgs__msg__SkidDetectionDiff *)allocator.allocate(sizeof(mir_msgs__msg__SkidDetectionDiff), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__SkidDetectionDiff));
  bool success = mir_msgs__msg__SkidDetectionDiff__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__SkidDetectionDiff__destroy(mir_msgs__msg__SkidDetectionDiff * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__SkidDetectionDiff__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__SkidDetectionDiff__Sequence__init(mir_msgs__msg__SkidDetectionDiff__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SkidDetectionDiff * data = NULL;

  if (size) {
    data = (mir_msgs__msg__SkidDetectionDiff *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__SkidDetectionDiff), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__SkidDetectionDiff__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__SkidDetectionDiff__fini(&data[i - 1]);
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
mir_msgs__msg__SkidDetectionDiff__Sequence__fini(mir_msgs__msg__SkidDetectionDiff__Sequence * array)
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
      mir_msgs__msg__SkidDetectionDiff__fini(&array->data[i]);
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

mir_msgs__msg__SkidDetectionDiff__Sequence *
mir_msgs__msg__SkidDetectionDiff__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SkidDetectionDiff__Sequence * array = (mir_msgs__msg__SkidDetectionDiff__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__SkidDetectionDiff__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__SkidDetectionDiff__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__SkidDetectionDiff__Sequence__destroy(mir_msgs__msg__SkidDetectionDiff__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__SkidDetectionDiff__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__SkidDetectionDiff__Sequence__are_equal(const mir_msgs__msg__SkidDetectionDiff__Sequence * lhs, const mir_msgs__msg__SkidDetectionDiff__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__SkidDetectionDiff__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__SkidDetectionDiff__Sequence__copy(
  const mir_msgs__msg__SkidDetectionDiff__Sequence * input,
  mir_msgs__msg__SkidDetectionDiff__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__SkidDetectionDiff);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__SkidDetectionDiff * data =
      (mir_msgs__msg__SkidDetectionDiff *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__SkidDetectionDiff__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__SkidDetectionDiff__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__SkidDetectionDiff__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
