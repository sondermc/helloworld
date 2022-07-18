cmake_minimum_required(VERSION 3.22)

project(helloWorld VERSION 1.0.1)
#SET (CMAKE_CXX_STANDARD 14)

SET (PROJECT_ROOT "${PROJECT_SOURCE_DIR}")
SET (PROJECT_SOURCE_DIR "${PROJECT_ROOT}/src")
SET (PROJECT_TEST_DIR "${PROJECT_ROOT}/tst")
MESSAGE ("Source path: ${PROJECT_SOURCE_DIR}")
MESSAGE ("TestSources path: ${PROJECT_TEST_DIR}")

enable_testing()

include_directories("
  ${PROJECT_SOURCE_DIR}
  ${PROJECT_TEST_DIR}
")

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(rpm)
