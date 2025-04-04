// Copyright 2021 ros2_control Development Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DIFF_CONTROL__DIFFBOT_SYSTEM_HPP_
#define DIFF_CONTROL__DIFFBOT_SYSTEM_HPP_

#include <memory>
#include <string>
#include <vector>

#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_info.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "rclcpp/clock.hpp"
#include "rclcpp/duration.hpp"
#include "rclcpp/macros.hpp"
#include "rclcpp/time.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"

#include "diff_control/visibility_control.h"
#include "diff_control/wheel.hpp"

#include "diff_control/issac_bridge.hpp"  // 引入 isaac_bridge.hpp

namespace diff_control
{

    class DiffBotSystemHardware : public hardware_interface::SystemInterface
    {
    public:
        struct Config
        {
            std::string left_wheel_name = "";
            std::string right_wheel_name = "";
            float loop_rate = 0.0;
            std::string device = "";
            int baud_rate = 0;
            int timeout_ms = 0;
            int enc_counts_per_rev = 0;
            double wheel_radius = 0;
        };


        RCLCPP_SHARED_PTR_DEFINITIONS(DiffBotSystemHardware);

        DIFF_CONTROL_PUBLIC
        hardware_interface::CallbackReturn on_init(
            const hardware_interface::HardwareInfo &info) override;

        DIFF_CONTROL_PUBLIC
        std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

        DIFF_CONTROL_PUBLIC
        std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;


       DIFF_CONTROL_PUBLIC
        hardware_interface::CallbackReturn on_configure(
            const rclcpp_lifecycle::State &previous_state) override;

        DIFF_CONTROL_PUBLIC
        hardware_interface::CallbackReturn on_cleanup(
            const rclcpp_lifecycle::State &previous_state) override;


        DIFF_CONTROL_PUBLIC
        hardware_interface::CallbackReturn on_activate(
            const rclcpp_lifecycle::State &previous_state) override;

        DIFF_CONTROL_PUBLIC
        hardware_interface::CallbackReturn on_deactivate(
            const rclcpp_lifecycle::State &previous_state) override;

        DIFF_CONTROL_PUBLIC
        hardware_interface::return_type read(
            const rclcpp::Time &time, const rclcpp::Duration &period) override;

        DIFF_CONTROL_PUBLIC
        hardware_interface::return_type write(
            const rclcpp::Time &time, const rclcpp::Duration &period) override;

    private:
        // Parameters for the DiffBot simulation
        double hw_start_sec_;
        double hw_stop_sec_;

        // Store the command for the simulated robot
        std::vector<double> hw_commands_;
        std::vector<double> hw_positions_;
        std::vector<double> hw_velocities_;

        std::shared_ptr<issac_bridge::IssacBridge> issac_bridge_p_ = std::make_shared<issac_bridge::IssacBridge>();
        Config cfg_;
        Wheel wheel_l_;
        Wheel wheel_r_;
    };

} // namespace diff_control

#endif // DIFF_CONTROL__DIFFBOT_SYSTEM_HPP_
