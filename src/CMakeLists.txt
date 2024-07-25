cmake_minimum_required(VERSION 3.14)

add_executable(demo test.cpp)

target_link_libraries(demo 
)



if(MSVC)
  target_compile_options(demo   PRIVATE "/utf-8")
  target_compile_definitions(demo  PRIVATE "_UNICODE" "UNICODE")
endif()

add_subdirectory(lib)


