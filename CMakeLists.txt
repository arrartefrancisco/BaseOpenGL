cmake_minimum_required(VERSION 3.5)

project(OpenGL LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OpenGL Source/main.cpp)

find_package(glfw3 CONFIG REQUIRED)
#target_link_libraries(OpenGL PRIVATE glfw)

find_package(glad CONFIG REQUIRED)
target_link_libraries(OpenGL PRIVATE glfw glad::glad ${CMAKE_DL_LIBS})
