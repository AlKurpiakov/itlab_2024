cmake_minimum_required(VERSION 3.5)

project(extract-network-data)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(PROJECT_SOURCE_FILES
    main.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${PROJECT_SOURCE_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} ${OpenCV_LIBS})