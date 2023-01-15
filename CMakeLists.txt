cmake_minimum_required(VERSION 3.15)
project(template VERSION 0.0)
set(CMAKE_CXX_STANDARD 20)

#thid lib 
include(FetchContent)
FetchContent_Declare(
	  googletest
	  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
	 )

#test
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(
  hello_test
  test/hello_test.cpp
)

target_link_libraries(
  hello_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)


#project
add_executable(main src/main.cpp)
message("projectname:" ${CMAKE_PROJECT_NAME})
message("version:" ${CMAKE_PROJECT_VERSION})
target_compile_definitions(main PUBLIC PROJECTNAME="${CMAKE_PROJECT_NAME}")
target_compile_definitions(main PUBLIC PROJECTVERSION="${CMAKE_PROJECT_VERSION}")

