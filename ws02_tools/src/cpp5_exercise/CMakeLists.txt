cmake_minimum_required(VERSION 3.20)
project(cpp5_exercise)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim_msgs REQUIRED)

add_executable(exer1_spawn src/exer1_spawn.cpp)
target_include_directories(exer1_spawn PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer1_spawn PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer1_spawn
  ${rclcpp_TARGETS}
  ${tf2_TARGETS}
  ${tf2_ros_TARGETS}
  ${geometry_msgs_TARGETS}
  ${turtlesim_msgs_TARGETS}
)

add_executable(exer2_tf_broadcaster src/exer2_tf_broadcaster.cpp)
target_include_directories(exer2_tf_broadcaster PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer2_tf_broadcaster PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer2_tf_broadcaster
  ${rclcpp_TARGETS}
  ${tf2_TARGETS}
  ${tf2_ros_TARGETS}
  ${geometry_msgs_TARGETS}
  ${turtlesim_msgs_TARGETS}
)

add_executable(exer3_tf_listener src/exer3_tf_listener.cpp)
target_include_directories(exer3_tf_listener PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer3_tf_listener PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer3_tf_listener
  ${rclcpp_TARGETS}
  ${tf2_TARGETS}
  ${tf2_ros_TARGETS}
  ${geometry_msgs_TARGETS}
  ${turtlesim_msgs_TARGETS}
)

install(TARGETS exer1_spawn exer2_tf_broadcaster exer3_tf_listener
  DESTINATION lib/${PROJECT_NAME})

# 安装launch文件
install(DIRECTORY launch 
  DESTINATION share/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
