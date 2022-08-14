
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_executable (gtest_hello gtest_hello.cpp)
target_link_libraries(gtest_hello -lgtest -pthread)

add_executable (gtest_hello_testsuite gtest_hello_testsuite.cpp)
target_link_libraries(gtest_hello_testsuite -lgtest -pthread)


add_executable (gtest_hello_default_main gtest_hello_default_main.cpp)
target_link_libraries(gtest_hello_default_main -lgtest -pthread -lgtest_main)
