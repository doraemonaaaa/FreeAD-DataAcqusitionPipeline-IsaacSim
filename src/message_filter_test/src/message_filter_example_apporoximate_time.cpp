#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>

class MessageFilterTestNode : public rclcpp::Node {
public:
    MessageFilterTestNode() : Node("message_filter_test_node") {
        // Initialize subscribers for image and laser scan topics
        image_sub_.subscribe(this, "camera/image");
        laser_scan_sub_.subscribe(this, "scan");

        // Set up an approximate time synchronizer
        sync_ = std::make_shared<message_filters::Synchronizer<SyncPolicy>>(
            SyncPolicy(10), image_sub_, laser_scan_sub_);

        // Register the callback
        sync_->registerCallback(std::bind(&MessageFilterTestNode::callback, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    // Callback function that will be triggered when synchronized messages are received
    void callback(const sensor_msgs::msg::Image::ConstSharedPtr &image,
                  const sensor_msgs::msg::LaserScan::ConstSharedPtr &laser_scan) {
        RCLCPP_INFO(this->get_logger(), "Synchronized messages received!");
        RCLCPP_INFO(this->get_logger(), "Image timestamp: %f", rclcpp::Time(image->header.stamp).seconds());
        RCLCPP_INFO(this->get_logger(), "Laser scan timestamp: %f", rclcpp::Time(laser_scan->header.stamp).seconds());
    }

    // Type definitions for message filters
    using SyncPolicy = message_filters::sync_policies::ApproximateTime<
        sensor_msgs::msg::Image,
        sensor_msgs::msg::LaserScan>;

    // Subscribers
    message_filters::Subscriber<sensor_msgs::msg::Image> image_sub_;
    message_filters::Subscriber<sensor_msgs::msg::LaserScan> laser_scan_sub_;

    // Synchronizer
    std::shared_ptr<message_filters::Synchronizer<SyncPolicy>> sync_;
};

int main(int argc, char **argv) {
    // Initialize the ROS 2 node
    rclcpp::init(argc, argv);

    // Create the node and spin
    auto node = std::make_shared<MessageFilterTestNode>();
    rclcpp::spin(node);

    // Shutdown ROS 2
    rclcpp::shutdown();
    return 0;
}