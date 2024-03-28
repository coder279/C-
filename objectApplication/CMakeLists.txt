# cmake最低版本
cmake_minimum_required(VERSION 3.23)

# 工程名称
project(objectApplication)

# 设置
set(CMAKE_CXX_STANDARD 14)

add_executable(objectApplication src/main.cpp src/Copy.cpp src/Copy.h ../overloadApplication/src/main.cpp)