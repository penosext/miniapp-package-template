cmake_minimum_required(VERSION 3.10)
project(miniapp_package_example LANGUAGES CXX)

file(GLOB_RECURSE MINIAPP_EXAMPLE_SOURCES CONFIGURE_DEPENDS
    src/*.cpp
    "${CMAKE_CURRENT_SOURCE_DIR}/../../generated/cpp/quickjs_bridge.cpp")
add_library(miniapp_package_example STATIC ${MINIAPP_EXAMPLE_SOURCES})
target_include_directories(miniapp_package_example PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../generated/cpp")
target_compile_features(miniapp_package_example PUBLIC cxx_std_17)
target_link_libraries(miniapp_package_example PUBLIC miniapp_package_runtime)
set_target_properties(miniapp_package_example PROPERTIES POSITION_INDEPENDENT_CODE ON)
