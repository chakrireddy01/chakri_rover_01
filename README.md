# JPL Open Source Rover Code

This repository contains the code that runs on the Raspberry Pi (RPi) to control the 
[JPL open source rover (osr)](https://github.com/nasa-jpl/open-source-rover).

The rover runs on ROS2 (tested on Foxy), and uses Python3.

## Internals & structure

Please refer to README files associated with each folder for insight in how components work and what they do. 
This is also the place to look when you have modifications on your rover that require the code or parameters to be
changed.

* The [ROS overview](ROS/README.md) gives an overview of the setup related to ROS and links to specific implementations such as how the drive and corner commands are being calculated

## Setup

The setup directory contains tutorial files for getting everything setup and configured for running the rover code. You should proceed through them in the following order:

* [Raspberry Pi setup](setup/rpi.md)
* [Rover code bringup](setup/rover_bringup.md)
# osr-rover-code
# chakri_rover_01 - Mars Rover Simulation (ROS2 + Gazebo)

This is a Mars Rover robot simulation built with ROS 2 and Gazebo, featuring a rocker-bogie suspension, wheel control, and IMU/Camera sensors. The project is built using `ros2_control` and custom Gazebo plugins.

## 📦 Prerequisites

- Ubuntu 22.04
- ROS 2 (Humble or later)
- Gazebo Garden or Fortress
- colcon
- `gazebo_ros_pkgs`, `ros2_control`, `gazebo_ros2_control`

## 🔧 Installation

```bash
# Clone the repository into your ROS2 workspace
cd ~/ros2_ws/src
git clone https://github.com/chakrireddy01/chakri_rover_01.git

# Go back to workspace root
cd ~/ros2_ws

# Install dependencies (optional, if needed)
rosdep install --from-paths src --ignore-src -r -y

# Build the workspace
colcon build

# Source the workspace
source install/setup.bash
```

## 🚀 Launch the Rover in Gazebo

```bash
ros2 launch osr_gazebo rover_launch.launch.py
```

This will spawn the rover in the Gazebo environment with the configured sensors and controllers.

## 📡 Launch RViz for Visualization

```bash
ros2 launch osr_gazebo rviz.launch.py
```

This opens RViz with camera, TF, and robot model visualization.

## 🛞 Control the Rover

You can run custom scripts like `fake_wheel_mover.py` to publish wheel velocities or write your own ROS2 node to publish to `/cmd_vel` or control interfaces based on your configuration.

## 📁 Project Structure

```
chakri_rover_01/
├── osr_gazebo/                  # Gazebo-related plugins, launch, and world files
├── osr_description/            # URDF/Xacro robot description
├── osr_bringup/                # Launch and bringup package
├── config/                     # Controller YAML files
├── meshes/                     # Custom STL/DAE 3D models
└── scripts/                    # Custom Python control scripts
```

## 🙋‍♂️ Author

Chakradhar Reddy – [chakrireddy01](https://github.com/chakrireddy01)

---

**Enjoy exploring Mars with your custom simulated rover!**
