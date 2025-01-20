// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_hardware:msg/IssacHardwareData.idl
// generated code does not contain a copyright notice
#include "robot_hardware/msg/detail/issac_hardware_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_hardware__msg__IssacHardwareData__init(robot_hardware__msg__IssacHardwareData * msg)
{
  if (!msg) {
    return false;
  }
  // real_speed_l
  // real_speed_r
  // expect_speed_l
  // expect_speed_r
  return true;
}

void
robot_hardware__msg__IssacHardwareData__fini(robot_hardware__msg__IssacHardwareData * msg)
{
  if (!msg) {
    return;
  }
  // real_speed_l
  // real_speed_r
  // expect_speed_l
  // expect_speed_r
}

bool
robot_hardware__msg__IssacHardwareData__are_equal(const robot_hardware__msg__IssacHardwareData * lhs, const robot_hardware__msg__IssacHardwareData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // real_speed_l
  if (lhs->real_speed_l != rhs->real_speed_l) {
    return false;
  }
  // real_speed_r
  if (lhs->real_speed_r != rhs->real_speed_r) {
    return false;
  }
  // expect_speed_l
  if (lhs->expect_speed_l != rhs->expect_speed_l) {
    return false;
  }
  // expect_speed_r
  if (lhs->expect_speed_r != rhs->expect_speed_r) {
    return false;
  }
  return true;
}

bool
robot_hardware__msg__IssacHardwareData__copy(
  const robot_hardware__msg__IssacHardwareData * input,
  robot_hardware__msg__IssacHardwareData * output)
{
  if (!input || !output) {
    return false;
  }
  // real_speed_l
  output->real_speed_l = input->real_speed_l;
  // real_speed_r
  output->real_speed_r = input->real_speed_r;
  // expect_speed_l
  output->expect_speed_l = input->expect_speed_l;
  // expect_speed_r
  output->expect_speed_r = input->expect_speed_r;
  return true;
}

robot_hardware__msg__IssacHardwareData *
robot_hardware__msg__IssacHardwareData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__msg__IssacHardwareData * msg = (robot_hardware__msg__IssacHardwareData *)allocator.allocate(sizeof(robot_hardware__msg__IssacHardwareData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_hardware__msg__IssacHardwareData));
  bool success = robot_hardware__msg__IssacHardwareData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_hardware__msg__IssacHardwareData__destroy(robot_hardware__msg__IssacHardwareData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_hardware__msg__IssacHardwareData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_hardware__msg__IssacHardwareData__Sequence__init(robot_hardware__msg__IssacHardwareData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__msg__IssacHardwareData * data = NULL;

  if (size) {
    data = (robot_hardware__msg__IssacHardwareData *)allocator.zero_allocate(size, sizeof(robot_hardware__msg__IssacHardwareData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_hardware__msg__IssacHardwareData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_hardware__msg__IssacHardwareData__fini(&data[i - 1]);
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
robot_hardware__msg__IssacHardwareData__Sequence__fini(robot_hardware__msg__IssacHardwareData__Sequence * array)
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
      robot_hardware__msg__IssacHardwareData__fini(&array->data[i]);
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

robot_hardware__msg__IssacHardwareData__Sequence *
robot_hardware__msg__IssacHardwareData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__msg__IssacHardwareData__Sequence * array = (robot_hardware__msg__IssacHardwareData__Sequence *)allocator.allocate(sizeof(robot_hardware__msg__IssacHardwareData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_hardware__msg__IssacHardwareData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_hardware__msg__IssacHardwareData__Sequence__destroy(robot_hardware__msg__IssacHardwareData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_hardware__msg__IssacHardwareData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_hardware__msg__IssacHardwareData__Sequence__are_equal(const robot_hardware__msg__IssacHardwareData__Sequence * lhs, const robot_hardware__msg__IssacHardwareData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_hardware__msg__IssacHardwareData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_hardware__msg__IssacHardwareData__Sequence__copy(
  const robot_hardware__msg__IssacHardwareData__Sequence * input,
  robot_hardware__msg__IssacHardwareData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_hardware__msg__IssacHardwareData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_hardware__msg__IssacHardwareData * data =
      (robot_hardware__msg__IssacHardwareData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_hardware__msg__IssacHardwareData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_hardware__msg__IssacHardwareData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_hardware__msg__IssacHardwareData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
