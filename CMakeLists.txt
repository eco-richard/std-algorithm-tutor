cmake_minimum_required(VERSION 3.21)

if (NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(
    std::algorithms-tutor
    VERSION 0.1.0
    DESCRIPTION "A tutorial for using the great '<algorithm>' library"
    LANGUAGES CXX)

enable_testing()

add_subdirectory(exercises)
add_subdirectory(test)

