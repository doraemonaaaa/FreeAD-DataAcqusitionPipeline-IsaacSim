#include "rclcpp/rclcpp.hpp"
#include "robot_hardware/msg/issac_hardware_data.hpp"  // 引入 IssacHardwareData 消息


namespace issac_bridge
{
class IssacBridge : public rclcpp::Node
{
public:
    IssacBridge()
    : Node("isaac_bridge_node")
    {
        // 订阅来自Isaac Sim的轮速命令
        wheel_speed_sub_ = this->create_subscription<robot_hardware::msg::IssacHardwareData>(
            "/isaac/robot/expect_speed", 10, std::bind(&IssacBridge::wheel_speed_callback, this, std::placeholders::_1));

        // 定期发布当前硬件的速度信息（如果需要）
        real_speed_pub_ = this->create_publisher<robot_hardware::msg::IssacHardwareData>("/isaac/robot/real_speed", 10);
    }

    // 回调函数：接收来自Isaac Sim的轮速命令
    void wheel_speed_callback(const robot_hardware::msg::IssacHardwareData::SharedPtr msg)
    {
        // 接收到的速度命令存储在硬件数据对象中
        hardware_data_.real_speed_l = msg->real_speed_l;
        hardware_data_.real_speed_r = msg->real_speed_r;
    }

    // 获取当前硬件的实际速度
    std::tuple<double, double> read_motor_vel()
    {
        double vel_l, vel_r;
        vel_l = hardware_data_.real_speed_l;
        vel_r = hardware_data_.real_speed_r;
        return std::make_tuple(vel_l, vel_r);
    }

    // 设置轮子期望速度并发布
    void set_motor_vel(double vel_l, double vel_r)
    {
        auto msg = robot_hardware::msg::IssacHardwareData();
        msg.expect_speed_l = vel_l;  // 设置期望的左轮速度
        msg.expect_speed_r = vel_r; // 设置期望的右轮速度
        real_speed_pub_->publish(msg);    // 发布期望速度
    }

private:
    rclcpp::Subscription<robot_hardware::msg::IssacHardwareData>::SharedPtr wheel_speed_sub_;  // 订阅轮速命令
    rclcpp::Publisher<robot_hardware::msg::IssacHardwareData>::SharedPtr real_speed_pub_;      // 发布实际速度
    robot_hardware::msg::IssacHardwareData hardware_data_;  // 存储硬件数据（实际速度）
};

}  // namespace isaac_bridge
