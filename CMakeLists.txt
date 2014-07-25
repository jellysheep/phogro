
project(PhoGro)
cmake_minimum_required(VERSION 2.8)

# put binary output in bin/ subdirectory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
set(LIBRARY_OUTPUT_PATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# select release build type as default
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()
message(STATUS "'${CMAKE_BUILD_TYPE}' built type was selected.")

# add include directories
include_directories(SYSTEM "${PROJECT_SOURCE_DIR}/src")

# add compiler flags to optimize in release mode
set(CMAKE_CXX_RELEASE_FLAGS "${CMAKE_CXX_FLAGS} -O2")

# add compiler flags to enable strict compilation in debug mode
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0 --coverage")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra -pedantic")
