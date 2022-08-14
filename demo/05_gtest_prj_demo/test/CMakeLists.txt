
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_executable (prj_demo_test 
  AddTest.cpp
  SubTest.cpp
)
target_link_libraries(prj_demo_test
 -lgtest
 -pthread
 -lgtest_main
 prj_demo
)