cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_COMPILER "D:/environment/minggw64/mingw64/bin/g++.exe")
set(CMAKE_C_COMPILER "D:/environment/minggw64/mingw64/bin/gcc.exe")
project(windows_cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)
aux_source_directory(src SRC_CUR)
aux_source_directory(. SRC_CUR)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_cmake_exe ${SRC_SUB} ${SRC_CUR})