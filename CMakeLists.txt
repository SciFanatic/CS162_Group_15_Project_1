cmake_minimum_required(VERSION 3.12)
project(GroupProject)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Ant.cpp Ant.h Critter.h Critter.cpp Space.cpp Space.h
        Board.cpp Board.h DoodleBug.cpp DoodleBug.h)

add_executable(GroupProject ${SOURCE_FILES})