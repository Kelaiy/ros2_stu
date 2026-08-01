cmake_minimum_required(VERSION 3.20)
project(cpp01_topic)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(base_interfeces REQUIRED)

add_executable(demo1_talker_str src/demo1_talker_str.cpp)
target_include_directories(demo1_talker_str PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo1_talker_str PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo1_talker_str
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfeces_TARGETS}
)
# 创建demo2 的可执行文件
add_executable(demo2_listener_str src/demo2_listener_str.cpp)
target_include_directories(demo2_listener_str PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo2_listener_str PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo2_listener_str
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfeces_TARGETS}
)

# 创建demo3 的可执行文件
add_executable(demo3_talker_stu src/demo3_talker_stu.cpp)
target_include_directories(demo3_talker_stu PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo3_talker_stu PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo3_talker_stu
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfeces_TARGETS}
)

# 创建demo4 的可执行文件
add_executable(demo4_listener_stu src/demo4_listener_stu.cpp)
target_include_directories(demo4_listener_stu PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo4_listener_stu PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo4_listener_stu
  ${rclcpp_TARGETS}
  ${std_msgs_TARGETS}
  ${base_interfeces_TARGETS}
)


install(TARGETS
  demo1_talker_str
  demo2_listener_str 
  demo3_talker_stu 
  demo4_listener_stu
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
