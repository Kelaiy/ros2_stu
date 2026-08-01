cmake_minimum_required(VERSION 3.20)
project(cpp07_exercise)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim_msgs REQUIRED)
find_package(base_interfeces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)

add_executable(exer1_pub_sub src/exer1_pub_sub.cpp)
target_include_directories(exer1_pub_sub PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer1_pub_sub PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer1_pub_sub
  ${rclcpp_TARGETS}
  ${turtlesim_msgs_TARGETS}
  ${base_interfeces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rclcpp_action_TARGETS}
)

add_executable(exer1_server src/exer1_server.cpp)
target_include_directories(exer1_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer1_server PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer1_server
  ${rclcpp_TARGETS}
  ${turtlesim_msgs_TARGETS}
  ${base_interfeces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rclcpp_action_TARGETS}
)

add_executable(exer1_client src/exer1_client.cpp)
target_include_directories(exer1_client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer1_client PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer1_client
  ${rclcpp_TARGETS}
  ${turtlesim_msgs_TARGETS}
  ${base_interfeces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rclcpp_action_TARGETS}
)



add_executable(exer2_action_client src/exer2_action_client.cpp)
target_include_directories(exer2_action_client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer2_action_client PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer2_action_client
  ${rclcpp_TARGETS}
  ${turtlesim_msgs_TARGETS}
  ${base_interfeces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rclcpp_action_TARGETS}
)


add_executable(exer2_action_server src/exer2_action_server.cpp)
target_include_directories(exer2_action_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer2_action_server PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer2_action_server
  ${rclcpp_TARGETS}
  ${turtlesim_msgs_TARGETS}
  ${base_interfeces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rclcpp_action_TARGETS}
)

add_executable(exer3_param src/exer3_param.cpp)
target_include_directories(exer3_param PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(exer3_param PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  exer3_param
  ${rclcpp_TARGETS}
  ${turtlesim_msgs_TARGETS}
  ${base_interfeces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rclcpp_action_TARGETS}
)

install(TARGETS 
    exer1_pub_sub
    exer1_server
    exer1_client
    exer2_action_client
    exer2_action_server
    exer3_param
    DESTINATION lib/${PROJECT_NAME})

# 导入launch文件
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
