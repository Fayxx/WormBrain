cmake_minimum_required(VERSION 3.28)
project(WormBrain)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/raylib)
add_executable(WormBrain src/main.cpp
        src/config.h
        src/Worm.cpp
        src/Worm.h)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)


