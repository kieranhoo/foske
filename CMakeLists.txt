cmake_minimum_required(VERSION 3.25)
project(graphix)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(include)
include_directories(src)

add_executable(
        graphix
        cmd/main.cpp
        include/common.h src/common.cpp
        include/app.h src/app.cpp cmd/labs.cpp)

add_executable(
        onlabs
        cmd/labs.cpp
        include/onlabs/common.h src/onlabs/common.cpp
        include/onlabs/first.h src/onlabs/first.cpp)

target_link_libraries(graphix ${OPENGL_LIBRARIES})
target_link_libraries(graphix ${GLUT_LIBRARIES})
target_link_libraries(graphix -lopengl32 -g -lfreeglut)