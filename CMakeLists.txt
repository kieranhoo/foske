cmake_minimum_required(VERSION 3.25)
project(foske)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(include)
include_directories(src)

add_executable(
        foske
        cmd/main.cpp
        include/common.h src/common.cpp
        include/app.h src/app.cpp)

target_link_libraries(foske ${OPENGL_LIBRARIES})
target_link_libraries(foske ${GLUT_LIBRARIES})
target_link_libraries(foske -lopengl32 -g -lfreeglut)