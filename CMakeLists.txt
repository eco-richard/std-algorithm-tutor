cmake_minimum_required(VERSION 3.21)

if (NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
endif()

project(
    std::algorithms-tutor
    VERSION 0.1.0
    DESCRIPTION "A tutorial for using the great '<algorithm>' library"
    LANGUAGES CXX)

add_subdirectory(exercises)

