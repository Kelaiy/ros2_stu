# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target base_interfaces::base_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${base_interfaces_TARGETS}.
if(base_interfaces_TARGETS AND NOT TARGET base_interfaces::base_interfaces)
  add_library(base_interfaces::base_interfaces INTERFACE IMPORTED)
  set_target_properties(base_interfaces::base_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${base_interfaces_TARGETS}")
endif()
