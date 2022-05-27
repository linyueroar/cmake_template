cmake_minimum_required(VERSION 3.10)

project(test VERSION 1.0 LANGUAGES CXX)
configure_file(testConfig.h.in testConfig.h)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)


add_executable(test22 cmake.cpp)


find_package(yaml-cpp REQUIRED)
include_directories(${YAML_CPP_INCLUDE_DIR})

target_link_libraries(test22 yaml-cpp)
#target_link_libraries(test22 /usr/local/lib/libyaml-cpp.a)

