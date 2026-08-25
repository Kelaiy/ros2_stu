# 基于 ROS 2 和 Navigation 2 的自动巡检机器人（Docker 版）

## 1.项目介绍

本项目基于 ROS 2 Humble 和 Navigation 2 在 Docker 容器内实现自动巡检机器人仿真。

该巡检机器人能够在不同的目标点之间循环移动，每到达一个目标点后：
1. 通过语音播放到达的目标点信息
2. 通过摄像头采集一张实时图像并保存到本地

### 功能包说明

| 功能包 | 语言 | 说明 |
|--------|------|------|
| `cpp1_gazebo` | C++ | Gazebo 仿真环境，机器人模型加载、控制器及插件配置 |
| `cpp2_slam` | C++ | SLAM 建图环境，机器人模型加载与控制器配置 |
| `cpp3_nav2` | C++ | Nav2 导航配置文件、地图、RViz 配置 |
| `py1_car_application` | Python | 导航应用代码（初始位姿发布、目标点导航等） |
| `py2_autopartol` | Python | 自动巡检功能包（巡检节点、语音合成 speaker） |
| `autopartol_interfaces` | C++ | 自动巡检自定义接口（srv/SpeechText） |

## 2.运行环境

- 宿主机：Ubuntu 22.04
- 容器镜像：`osrf/ros:humble-desktop`
- 容器名：`ros2_humble`
- 工作空间挂载：`/home/hzc/linux/Docker/22.04` → 容器内 `/shared`
- ROS 版本：ROS 2 Humble
- 仿真器：Gazebo Classic
- 建图：slam_toolbox
- 导航：Navigation 2
- 运动控制：ros2-control
- 语音：espeak-ng

## 3.容器启动

### 3.1 启动容器

容器需以下参数（关键：`--privileged`、`--network=host`、`--pid=host`、X11 和 pulseaudio 挂载）：

```bash
docker run -d --name ros2_humble \
  --privileged \
  --network=host \
  --pid=host \
  -v /home/hzc/linux/Docker/22.04:/shared \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  -v /run/user/$(id -u):/run/user/$(id -u) \
  --device /dev/ttyUSB0 \
  --device /dev/ttyUSB1 \
  osrf/ros:humble-desktop \
  /bin/bash -c "sleep infinity"
```

进入容器：

```bash
docker exec -it ros2_humble bash
```

进入后工作空间位于 `/shared/ws1_stu`。

### 3.2 音频配置（容器跟随主机默认输出设备）

容器通过 TCP 4713 连接主机 pipewire-pulse，自动跟随主机默认输出设备（耳机/扬声器），无需切设备时改配置。

**主机端**（一次性配置）：编辑 `~/.config/pipewire/pipewire-pulse.conf`，在 `pulse.properties.server.address` 启用 TCP 监听：

```conf
server.address = [
    "unix:native"
    "tcp:4713"
]
```

重启主机 pipewire-pulse：

```bash
systemctl --user restart pipewire-pulse.service
```

**容器端**（已固化在镜像 `ros2_humble:audio`）：`~/.bashrc` 末尾追加：

```bash
export PULSE_SERVER=tcp:localhost:4713
```

`/etc/asound.conf` 内容：

```
pcm.!default {
    type pulse
    server "tcp:localhost:4713"
}
ctl.!default {
    type pulse
    server "tcp:localhost:4713"
}
```

验证：

```bash
docker exec ros2_humble bash -ic 'pactl info | grep "Default Sink"'
```

应看到主机当前默认 sink（如 `bluez_output.xxx` 蓝牙耳机）。

## 4.依赖安装

在容器内执行：

1. 安装 SLAM 和 Navigation 2

```
sudo apt update
sudo apt install ros-$ROS_DISTRO-nav2-bringup ros-$ROS_DISTRO-slam-toolbox
```

2. 安装仿真相关功能包

```
sudo apt install ros-$ROS_DISTRO-robot-state-publisher ros-$ROS_DISTRO-joint-state-publisher \
                ros-$ROS_DISTRO-gazebo-ros-pkgs ros-$ROS_DISTRO-ros2-controllers \
                ros-$ROS_DISTRO-xacro
```

3. 安装语音合成和图像相关功能包

```
sudo apt install python3-pip espeak-ng -y
sudo pip3 install espeakng
sudo apt install ros-$ROS_DISTRO-tf-transformations
sudo pip3 install transforms3d
```

4. 安装 Gazebo 模型（可选，丰富场景）

```
mkdir -p ~/.gazebo
git clone https://gitee.com/ohhuo/gazebo_models.git ~/.gazebo/models
rm -rf ~/.gazebo/models/.git
```

## 5.构建

进入容器后：

```bash
docker exec -it ros2_humble bash
cd /shared/ws1_stu
colcon build
```

每个新开终端进入容器后，先 source ROS 和工作空间：

```bash
source /opt/ros/humble/setup.bash
source /shared/ws1_stu/install/setup.bash
echo $GAZEBO_PLUGIN_PATH   # 确认插件路径非空，避免 Gazebo 插件加载失败
```

## 6.最终启动流程

依次启动以下三个 launch 文件（每个终端需按第 5 章 source 环境）：

| 顺序 | 终端 | launch 文件 | 作用 |
|------|------|------------|------|
| 1 | 终端1 | `cpp2_slam/gazebo_sim.launch.py` | Gazebo 仿真环境 |
| 2 | 终端2 | `cpp3_nav2/navigation2.launch.py` | Nav2 导航 |
| 3 | 终端3 | `py2_autopartol/autopartol.launch.py` | 自动巡检 |

### 6.1 第一步：启动 Gazebo 仿真（终端 1）

```bash
ros2 launch cpp2_slam gazebo_sim.launch.py
```

- 加载 `custom_home1.world`、`car.urdf.xacro` 机器人模型、ros2-control 控制器
- launch 内置事件链：等 gzserver 就绪 → spawn 模型 → 加载 `car_joint_state_broadcaster` → 加载 `car_diff_drive_controller`
- 等待 Gazebo 窗口出现机器人模型后继续

### 6.2 第二步：启动 Nav2 导航（终端 2）

新开终端进入容器（按第 5 章 source 环境），然后：

```bash
ros2 launch cpp3_nav2 navigation2.launch.py
```

- 加载 `cpp3_nav2/maps/room.yaml` 地图和 `cpp3_nav2/config/nav2_params.yaml` 参数
- 启动 RViz（配置文件 `nav2_default_view.rviz`）
- 等待 lifecycle_manager 把所有节点激活（日志不再出现 `Waiting for service controller_server/get_state...`）

RViz 启动后在工具栏点 `2D Pose Estimate`，在地图上点击机器人当前位置完成定位。

可选：用 Python 节点发布初始位姿（自动发布，无需在 RViz 点击）：

```bash
ros2 run py1_car_application car_init_pose
```

> `car_init_pose.py` 内部先 `waitUntilNav2Active()` 再 `setInitialPose`，避免 AMCL 未激活时 `/initialpose` 被丢弃。

### 6.3 第三步：启动自动巡检（终端 3）

新开终端进入容器（按第 5 章 source 环境），然后：

```bash
ros2 launch py2_autopartol autopartol.launch.py
```

- 启动 `partol_node`（读取 `py2_autopartol/config/partol_config.yaml` 中的 `tar_points` 巡检点列表）
- 启动 `speaker`（语音合成服务，订阅 `SpeechText` 服务调用 espeak-ng 播报）

机器人开始依次导航到目标点，到达后语音播报并拍照保存到工作空间根目录（如 `/shared/ws1_stu/img_*.png`）。

### 6.4 SLAM 建图（一次性，已有地图可跳过）

如需重新建图，用 `cpp2_slam` 的 launch 配合 slam_toolbox：

```bash
# 终端 1：启动仿真
ros2 launch cpp2_slam gazebo_sim.launch.py

# 终端 2：启动建图
ros2 launch slam_toolbox online_async_launch.py use_sim_time:=True

# 建图完成后保存
ros2 run nav2_map_server map_saver_cli -f /shared/ws1_stu/src/cpp3_nav2/maps/room
```

## 7.常见问题

- **Gazebo 插件找不到**：进入容器后先 `source /opt/ros/humble/setup.bash && source /shared/ws1_stu/install/setup.bash`，确认 `echo $GAZEBO_PLUGIN_PATH` 有值再 launch。
- **Nav2 代价地图不显示**：检查 RViz Fixed Frame 设为 `map`；`nav2_params.yaml` 中数值参数不要写成浮点（如 `width: 3.0` 应为 `3`）；确认 `controller_server` 节点已启动。
- **音频报 `unable to open slave`**：检查主机 `pipewire-pulse.service` 状态为 active 且监听 4713 端口（`ss -tlnp | grep 4713`）；容器内 `echo $PULSE_SERVER` 应为 `tcp:localhost:4713`。
- **插耳机仍从扬声器播放**：用 `pactl info | grep "Default Sink"` 确认主机默认 sink 是耳机，再重启容器或重新 source `.bashrc`。
