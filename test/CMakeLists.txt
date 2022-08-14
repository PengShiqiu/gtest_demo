
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_executable (01_gtest_hello 01_gtest_hello.cpp)
target_link_libraries(01_gtest_hello)
