set(Main_SRCS
  main.cpp
)

add_executable(helloWorld
  ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(helloWorld libgtest)

install(TARGETS helloWorld DESTINATION bin)