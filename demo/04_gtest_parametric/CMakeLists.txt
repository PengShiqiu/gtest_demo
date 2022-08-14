
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_executable (gtest_param_test gtest_param_test.cpp)
target_link_libraries(gtest_param_test -lgtest -pthread -lgtest_main)

add_executable (gtest_typed_test gtest_typed_test.cpp)
target_link_libraries(gtest_typed_test -lgtest -pthread -lgtest_main)

add_executable (gtest_typed_param_test gtest_typed_param_test.cpp)
target_link_libraries(gtest_typed_param_test -lgtest -pthread -lgtest_main)