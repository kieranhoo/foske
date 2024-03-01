cmake_minimum_required(VERSION 3.25)
project(simulatex)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(include)
include_directories(src)

add_executable(
        simulatex
        cmd/main.cpp
        include/common.h src/common.cpp
        include/app.h src/app.cpp)

target_link_libraries(simulatex ${OPENGL_LIBRARIES})
target_link_libraries(simulatex ${GLUT_LIBRARIES})
target_link_libraries(simulatex -lopengl32 -g -lfreeglut)