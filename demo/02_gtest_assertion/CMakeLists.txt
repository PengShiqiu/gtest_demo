
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_executable (gtest_assertion_test gtest_assertion_test.cpp)
target_link_libraries(gtest_assertion_test -lgtest -pthread -lgtest_main)
