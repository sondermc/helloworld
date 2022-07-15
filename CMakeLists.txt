build_command(TARGET build)
include_directories(src)
include_directories(tst)
include_directories(rpm)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(rpm)
