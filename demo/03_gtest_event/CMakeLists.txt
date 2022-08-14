
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_executable (gtest_event_test gtest_event_test.cpp)
target_link_libraries(gtest_event_test -lgtest -pthread)