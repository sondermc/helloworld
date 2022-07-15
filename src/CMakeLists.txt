cmake_minimum_required(VERSION 3.22)
project(helloWorld VERSION 1.0.1)
set(BINARY ${CMAKE_PROJECT_NAME})
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES ${SOURCES})
add_executable(${BINARY} ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})

include(GoogleTest)

include(${CMAKE_CURRENT_SOURCE_DIR}/../rpm/CMakeLists.txt)