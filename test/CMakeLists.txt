
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.11.0)

FetchContent_MakeAvailable(googletest)

add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main gmock_main)

add_executable(01_all_of_test 01_all_of_test.cpp
    ${PROJECT_SOURCE_DIR}/exercises/01_all_of.cpp)
add_executable(02_any_of_test 02_any_of_test.cpp
    ${PROJECT_SOURCE_DIR}/exercises/02_any_of.cpp)
add_executable(03_none_of_test 03_none_of_test.cpp
    ${PROJECT_SOURCE_DIR}/exercises/03_none_of.cpp)
add_executable(04_for_each_test 04_for_each_test.cpp
  ${PROJECT_SOURCE_DIR}/exercises/04_for_each.cpp)

add_test(01-all_of 01_all_of_test)
add_test(02-any_of 02_any_of_test)
add_test(03-none-of 03_none_of_test)
add_test(04_for_each 04_for_each_test)

target_include_directories(01_all_of_test
    PRIVATE
    "${CMAKE_SOURCE_DIR}/include")

target_include_directories(02_any_of_test
    PRIVATE
    "${CMAKE_SOURCE_DIR}/include")

target_include_directories(03_none_of_test
  PRIVATE
  "${CMAKE_SOURCE_DIR}/include")

target_include_directories(04_for_each_test
  PRIVATE
  "${CMAKE_SOURCE_DIR}/include")

target_link_libraries(01_all_of_test
    PRIVATE
    GTest::GTest)

target_link_libraries(02_any_of_test
    PRIVATE
    GTest::GTest)

target_link_libraries(03_none_of_test
  PRIVATE
  GTest::GTest)

target_link_libraries(04_for_each_test
  PRIVATE
  GTest::GTest)
