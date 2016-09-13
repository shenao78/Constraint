cmake_minimum_required(VERSION 3.4)
project(Constraint)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Connector.h Constraint.h Connector.cpp Adder.h Adder.cpp Multiplier.h Multiplier.cpp Probe.h Constant.h Constant.cpp Probe.cpp Constraint.cpp)
add_executable(Constraint ${SOURCE_FILES})