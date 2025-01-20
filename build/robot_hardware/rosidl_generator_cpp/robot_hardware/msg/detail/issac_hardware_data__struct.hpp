// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_hardware:msg/IssacHardwareData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__STRUCT_HPP_
#define ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_hardware__msg__IssacHardwareData __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__msg__IssacHardwareData __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IssacHardwareData_
{
  using Type = IssacHardwareData_<ContainerAllocator>;

  explicit IssacHardwareData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real_speed_l = 0.0;
      this->real_speed_r = 0.0;
      this->expect_speed_l = 0.0;
      this->expect_speed_r = 0.0;
    }
  }

  explicit IssacHardwareData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real_speed_l = 0.0;
      this->real_speed_r = 0.0;
      this->expect_speed_l = 0.0;
      this->expect_speed_r = 0.0;
    }
  }

  // field types and members
  using _real_speed_l_type =
    double;
  _real_speed_l_type real_speed_l;
  using _real_speed_r_type =
    double;
  _real_speed_r_type real_speed_r;
  using _expect_speed_l_type =
    double;
  _expect_speed_l_type expect_speed_l;
  using _expect_speed_r_type =
    double;
  _expect_speed_r_type expect_speed_r;

  // setters for named parameter idiom
  Type & set__real_speed_l(
    const double & _arg)
  {
    this->real_speed_l = _arg;
    return *this;
  }
  Type & set__real_speed_r(
    const double & _arg)
  {
    this->real_speed_r = _arg;
    return *this;
  }
  Type & set__expect_speed_l(
    const double & _arg)
  {
    this->expect_speed_l = _arg;
    return *this;
  }
  Type & set__expect_speed_r(
    const double & _arg)
  {
    this->expect_speed_r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_hardware::msg::IssacHardwareData_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::msg::IssacHardwareData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::msg::IssacHardwareData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::msg::IssacHardwareData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__msg__IssacHardwareData
    std::shared_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__msg__IssacHardwareData
    std::shared_ptr<robot_hardware::msg::IssacHardwareData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IssacHardwareData_ & other) const
  {
    if (this->real_speed_l != other.real_speed_l) {
      return false;
    }
    if (this->real_speed_r != other.real_speed_r) {
      return false;
    }
    if (this->expect_speed_l != other.expect_speed_l) {
      return false;
    }
    if (this->expect_speed_r != other.expect_speed_r) {
      return false;
    }
    return true;
  }
  bool operator!=(const IssacHardwareData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IssacHardwareData_

// alias to use template instance with default allocator
using IssacHardwareData =
  robot_hardware::msg::IssacHardwareData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__MSG__DETAIL__ISSAC_HARDWARE_DATA__STRUCT_HPP_
