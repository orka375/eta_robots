// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/power_board_motor_status.h"


#ifndef MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BRAKE_STATUS_BRAKED_BIT'.
/**
  * Status bits for brake feedback.
  *  is "1" if brake is supposed to be braked
 */
enum
{
  mir_msgs__msg__PowerBoardMotorStatus__BRAKE_STATUS_BRAKED_BIT = 1
};

/// Constant 'BRAKE_STATUS_FB_BIT'.
/**
  * is "1" if brake feedback sensor is activated (brake is released)
 */
enum
{
  mir_msgs__msg__PowerBoardMotorStatus__BRAKE_STATUS_FB_BIT = 4
};

/// Constant 'BRAKE_STATUS_TRANSITION_BIT'.
enum
{
  mir_msgs__msg__PowerBoardMotorStatus__BRAKE_STATUS_TRANSITION_BIT = 128
};

/// Struct defined in msg/PowerBoardMotorStatus in the package mir_msgs.
typedef struct mir_msgs__msg__PowerBoardMotorStatus
{
  uint16_t left_motor_ctrl_word;
  int32_t left_motor_speed;
  int32_t left_motor_encoder;
  uint16_t left_motor_status;
  uint8_t left_motor_error;
  uint32_t left_motor_error_hist1;
  uint32_t left_motor_error_hist2;
  int32_t left_motor_current;
  uint16_t left_motor_i2t_motor;
  uint16_t left_motor_i2t_controller;
  int16_t left_motor_temperature;
  uint16_t right_motor_ctrl_word;
  int32_t right_motor_speed;
  int32_t right_motor_encoder;
  uint16_t right_motor_status;
  uint8_t right_motor_error;
  uint32_t right_motor_error_hist1;
  uint32_t right_motor_error_hist2;
  int32_t right_motor_current;
  uint16_t right_motor_i2t_motor;
  uint16_t right_motor_i2t_controller;
  int16_t right_motor_temperature;
  /// So error combinations are - (Any combination with the TRANSITION bit set are valid)
  ///  BRAKED FB TRANSITION STATUSWORD
  /// 0  0 0   0x00   Brake is suppused to be released, but FB indicate braked. We are not in transition.
  /// 1  1 0   0x05   Brake is suppused to be braked, but FB indicate released. We are not in transition.
  uint8_t brake_left_status;
  uint8_t brake_right_status;
} mir_msgs__msg__PowerBoardMotorStatus;

// Struct for a sequence of mir_msgs__msg__PowerBoardMotorStatus.
typedef struct mir_msgs__msg__PowerBoardMotorStatus__Sequence
{
  mir_msgs__msg__PowerBoardMotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__PowerBoardMotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__STRUCT_H_
