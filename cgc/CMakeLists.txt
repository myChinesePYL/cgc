file(GLOB_RECURSE CPP_SOURCE *.cpp)

add_library(cgc STATIC ${CPP_SOURCE})

target_include_directories(cgc PUBLIC ../)
target_link_libraries(cgc glm)
