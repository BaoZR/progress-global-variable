


add_library(get_num SHARED)

target_sources(get_num
PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/get_num.cpp
PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/get_num.h
)

target_link_libraries(get_num )


set_target_properties(get_num PROPERTIES
    MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)



if(MSVC)
    target_compile_options(get_num PRIVATE "/utf-8")
    target_compile_definitions(get_num PRIVATE "_UNICODE" "UNICODE")
endif()











