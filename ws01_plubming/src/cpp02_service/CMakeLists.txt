cmake_minimum_required(VERSION 3.20)
project(cpp02_service)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(base_interfeces REQUIRED)  #查找自定义接口文件

add_executable(demo1_server src/demo1_server.cpp)
target_include_directories(demo1_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo1_server PUBLIC c_std_99 cxx_std_17)
target_link_libraries(
  demo1_server
  ${rclcpp_TARGETS}
  ${base_interfeces_TARGETS}  # 添加
)


add_executable(demo1_client src/demo1_client.cpp)
target_include_directories(demo1_client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(demo1_client PUBLIC c_std_99 cxx_std_17)
target_link_libraries(
  demo1_client
  ${rclcpp_TARGETS}
  ${base_interfeces_TARGETS}  #添加
)

install(TARGETS 
  demo1_server
  demo1_client
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
