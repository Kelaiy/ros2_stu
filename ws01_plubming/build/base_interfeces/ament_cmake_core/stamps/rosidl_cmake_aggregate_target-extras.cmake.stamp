# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target base_interfeces::base_interfeces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${base_interfeces_TARGETS}.
if(base_interfeces_TARGETS AND NOT TARGET base_interfeces::base_interfeces)
  add_library(base_interfeces::base_interfeces INTERFACE IMPORTED)
  set_target_properties(base_interfeces::base_interfeces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${base_interfeces_TARGETS}")
endif()
