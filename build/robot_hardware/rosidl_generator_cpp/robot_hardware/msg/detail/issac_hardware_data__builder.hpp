// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_hardware:msg/IssacHardwareData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__BUILDER_HPP_
#define ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_hardware/msg/detail/issac_hardware_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_hardware
{

namespace msg
{

namespace builder
{

class Init_IssacHardwareData_expect_speed_r
{
public:
  explicit Init_IssacHardwareData_expect_speed_r(::robot_hardware::msg::IssacHardwareData & msg)
  : msg_(msg)
  {}
  ::robot_hardware::msg::IssacHardwareData expect_speed_r(::robot_hardware::msg::IssacHardwareData::_expect_speed_r_type arg)
  {
    msg_.expect_speed_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::msg::IssacHardwareData msg_;
};

class Init_IssacHardwareData_expect_speed_l
{
public:
  explicit Init_IssacHardwareData_expect_speed_l(::robot_hardware::msg::IssacHardwareData & msg)
  : msg_(msg)
  {}
  Init_IssacHardwareData_expect_speed_r expect_speed_l(::robot_hardware::msg::IssacHardwareData::_expect_speed_l_type arg)
  {
    msg_.expect_speed_l = std::move(arg);
    return Init_IssacHardwareData_expect_speed_r(msg_);
  }

private:
  ::robot_hardware::msg::IssacHardwareData msg_;
};

class Init_IssacHardwareData_real_speed_r
{
public:
  explicit Init_IssacHardwareData_real_speed_r(::robot_hardware::msg::IssacHardwareData & msg)
  : msg_(msg)
  {}
  Init_IssacHardwareData_expect_speed_l real_speed_r(::robot_hardware::msg::IssacHardwareData::_real_speed_r_type arg)
  {
    msg_.real_speed_r = std::move(arg);
    return Init_IssacHardwareData_expect_speed_l(msg_);
  }

private:
  ::robot_hardware::msg::IssacHardwareData msg_;
};

class Init_IssacHardwareData_real_speed_l
{
public:
  Init_IssacHardwareData_real_speed_l()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IssacHardwareData_real_speed_r real_speed_l(::robot_hardware::msg::IssacHardwareData::_real_speed_l_type arg)
  {
    msg_.real_speed_l = std::move(arg);
    return Init_IssacHardwareData_real_speed_r(msg_);
  }

private:
  ::robot_hardware::msg::IssacHardwareData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::msg::IssacHardwareData>()
{
  return robot_hardware::msg::builder::Init_IssacHardwareData_real_speed_l();
}

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__BUILDER_HPP_
