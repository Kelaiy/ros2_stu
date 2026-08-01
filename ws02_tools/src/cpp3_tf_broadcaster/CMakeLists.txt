cmake_minimum_required(VERSION 3.20)
project(cpp3_tf_broadcaster)

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

add_executable(demo1_tf_static src/demo1_tf_static.cpp)
target_include_directories(demo1_tf_static PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo1_tf_static PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo1_tf_static
  ${rclcpp_TARGETS}
  ${tf2_TARGETS}
  ${tf2_ros_TARGETS}
  ${geometry_msgs_TARGETS}
)


add_executable(demo2_tf_dynamic src/demo2_tf_dynamic.cpp)
target_include_directories(demo2_tf_dynamic PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo2_tf_dynamic PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo2_tf_dynamic
  ${rclcpp_TARGETS}
  ${tf2_TARGETS}
  ${tf2_ros_TARGETS}
  ${geometry_msgs_TARGETS}
  ${turtlesim_msgs_TARGETS}
)

add_executable(demo3_point_tf src/demo3_point_tf.cpp)
target_include_directories(demo3_point_tf PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo3_point_tf PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo3_point_tf
  ${rclcpp_TARGETS}
  ${tf2_TARGETS}
  ${tf2_ros_TARGETS}
  ${geometry_msgs_TARGETS}
  ${turtlesim_msgs_TARGETS}
)

install(TARGETS demo1_tf_static demo2_tf_dynamic demo3_point_tf
  DESTINATION lib/${PROJECT_NAME})

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
