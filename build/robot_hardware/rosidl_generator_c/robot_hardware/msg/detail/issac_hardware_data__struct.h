// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_hardware:msg/IssacHardwareData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__STRUCT_H_
#define ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IssacHardwareData in the package robot_hardware.
typedef struct robot_hardware__msg__IssacHardwareData
{
  double real_speed_l;
  double real_speed_r;
  double expect_speed_l;
  double expect_speed_r;
} robot_hardware__msg__IssacHardwareData;

// Struct for a sequence of robot_hardware__msg__IssacHardwareData.
typedef struct robot_hardware__msg__IssacHardwareData__Sequence
{
  robot_hardware__msg__IssacHardwareData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_hardware__msg__IssacHardwareData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__STRUCT_H_
