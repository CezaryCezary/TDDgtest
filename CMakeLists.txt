project(TDDgtest)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

# Locate GTest
#find_package(GTest REQUIRED)
#include_directories(${GTEST_INCLUDE_DIRS})

# Locate GMock
set(GMOCK_DIR "${CMAKE_BINARY_DIR}/gmock-1.7.0"
    CACHE PATH "The path to the GoogleMock test framework.")
add_subdirectory(${GMOCK_DIR} ${CMAKE_BINARY_DIR}/gmock-1.7.0)
include_directories(SYSTEM ${GMOCK_DIR}/gtest/include
                           ${GMOCK_DIR}/include)
#find_package(GMock REQUIRED)
#include_directories(${GMOCK_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} gmock_main pthread)

ADD_DEFINITIONS(
    -std=c++11
    # Other flags
)
