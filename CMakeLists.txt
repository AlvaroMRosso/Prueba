# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.12)

# Set the project name and version
project(MyProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)


# Add the executable
add_executable(program hola.cpp)