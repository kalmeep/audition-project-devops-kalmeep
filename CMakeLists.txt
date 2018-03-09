if(WIN32)
    cmake_minimum_required(VERSION 3.4)
else()
    cmake_minimum_required(VERSION 3.1)
endif()

project(LibTwoUtils
        LANGUAGES CXX
        VERSION 0.0.0.0)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/LibTwoUtils)

add_subdirectory(LibTwoUtils)

add_executable(SmallProgram SmallProgram.cc)
target_link_libraries(SmallProgram TwoUtils)

add_test(LibTwoUtilsTest SmallProgram 123123.1314 22.1212 1.2345 54313.1212 -132123123.1313 0) 
