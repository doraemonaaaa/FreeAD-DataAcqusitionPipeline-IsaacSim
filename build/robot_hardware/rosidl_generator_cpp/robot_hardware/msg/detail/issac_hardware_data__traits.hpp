// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_hardware:msg/IssacHardwareData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__TRAITS_HPP_
#define ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_hardware/msg/detail/issac_hardware_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_hardware
{

namespace msg
{

inline void to_flow_style_yaml(
  const IssacHardwareData & msg,
  std::ostream & out)
{
  out << "{";
  // member: real_speed_l
  {
    out << "real_speed_l: ";
    rosidl_generator_traits::value_to_yaml(msg.real_speed_l, out);
    out << ", ";
  }

  // member: real_speed_r
  {
    out << "real_speed_r: ";
    rosidl_generator_traits::value_to_yaml(msg.real_speed_r, out);
    out << ", ";
  }

  // member: expect_speed_l
  {
    out << "expect_speed_l: ";
    rosidl_generator_traits::value_to_yaml(msg.expect_speed_l, out);
    out << ", ";
  }

  // member: expect_speed_r
  {
    out << "expect_speed_r: ";
    rosidl_generator_traits::value_to_yaml(msg.expect_speed_r, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IssacHardwareData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: real_speed_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_speed_l: ";
    rosidl_generator_traits::value_to_yaml(msg.real_speed_l, out);
    out << "\n";
  }

  // member: real_speed_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_speed_r: ";
    rosidl_generator_traits::value_to_yaml(msg.real_speed_r, out);
    out << "\n";
  }

  // member: expect_speed_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expect_speed_l: ";
    rosidl_generator_traits::value_to_yaml(msg.expect_speed_l, out);
    out << "\n";
  }

  // member: expect_speed_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expect_speed_r: ";
    rosidl_generator_traits::value_to_yaml(msg.expect_speed_r, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IssacHardwareData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_hardware

namespace rosidl_generator_traits
{

[[deprecated("use robot_hardware::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_hardware::msg::IssacHardwareData & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::msg::IssacHardwareData & msg)
{
  return robot_hardware::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::msg::IssacHardwareData>()
{
  return "robot_hardware::msg::IssacHardwareData";
}

template<>
inline const char * name<robot_hardware::msg::IssacHardwareData>()
{
  return "robot_hardware/msg/IssacHardwareData";
}

template<>
struct has_fixed_size<robot_hardware::msg::IssacHardwareData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_hardware::msg::IssacHardwareData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_hardware::msg::IssacHardwareData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__TRAITS_HPP_
