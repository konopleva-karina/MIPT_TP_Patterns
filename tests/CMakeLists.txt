cmake_minimum_required(VERSION 3.0)
project(tests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

set(SOURCE_FILES tests.cpp)
add_executable(tests ../game/Units.h ../game/UnitFactories.h ../game/UnitFactories.cpp tests.cpp)
target_link_libraries(tests gtest)
