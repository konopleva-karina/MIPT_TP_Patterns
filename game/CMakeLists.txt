cmake_minimum_required(VERSION 3.0)
project(game)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)
add_executable(game main.cpp Game.cpp Game.h Units.h UnitFactories.h UnitFactories.cpp)
