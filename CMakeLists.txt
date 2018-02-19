cmake_minimum_required(VERSION 3.10)
project(allegro)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX clang++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra ")


add_executable(
        allegro

        src/main.cpp

        src/ecs/Entity.cpp
        src/ecs/Entity.h

        src/ecs/Component.cpp
        src/ecs/Component.h

        src/ecs/System.cpp
        src/ecs/System.h

        src/EBall.h

        src/SMovement.cpp
        src/SMovement.h

        src/CPosition.cpp src/CPosition.h src/ecs/Engine.cpp src/ecs/Engine.h src/ecs/Timer.cpp src/ecs/Timer.h)

target_link_libraries(allegro -lallegro)
include_directories(src)
