
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(01_gtest_hello)
add_subdirectory(02_gtest_assertion)
add_subdirectory(03_gtest_event)
add_subdirectory(04_gtest_parametric)
add_subdirectory(05_gtest_prj_demo)