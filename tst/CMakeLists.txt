add_library(libgtest IMPORTED STATIC GLOBAL)
add_dependencies(libgtest gtest)

set(BINARY ${CMAKE_PROJECT_NAME}_tst)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cc)
set(SOURCES ${TEST_SOURCES})

add_executable(hello_test hello_test.cc)
add_test(hello_test hello_test_tst COMMAND hello_test_tst)
target_link_libraries(hello_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)


