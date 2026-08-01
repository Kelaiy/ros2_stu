cmake_minimum_required(VERSION 3.20)
project(cpp04_param)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(demo0_param src/demo0_param.cpp)
target_include_directories(demo0_param PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo0_param PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo0_param
  ${rclcpp_TARGETS}
)

add_executable(demo1_param_client src/demo1_param_client.cpp)
target_include_directories(demo1_param_client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo1_param_client PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo1_param_client
  ${rclcpp_TARGETS}
)

add_executable(demo1_param_server src/demo1_param_server.cpp)
target_include_directories(demo1_param_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo1_param_server PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(
  demo1_param_server
  ${rclcpp_TARGETS}
)

install(TARGETS 
  demo0_param
  demo1_param_client
  demo1_param_server
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
