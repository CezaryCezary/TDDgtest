project(TDDgtest)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} pthread)

ADD_DEFINITIONS(
    -std=c++11
    # Other flags
)
