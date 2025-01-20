cmake_minimum_required(VERSION 3.5)
project(message_filter_example)

# 查找必需的依赖项
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(message_filters REQUIRED)  # 添加 message_filters 依赖

# 定义可执行文件
add_executable(message_filter_example src/message_filter_example.cpp)

# 设置链接库
ament_target_dependencies(message_filter_example rclcpp sensor_msgs message_filters)

# 安装目标
install(TARGETS
  message_filter_example
  DESTINATION lib/${PROJECT_NAME})

ament_package()
