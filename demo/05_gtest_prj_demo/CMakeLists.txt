
include_directories(${PROJECT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

ADD_LIBRARY (prj_demo 
  src/Add.cpp 
  src/Sub.cpp
)
add_subdirectory(test)