aux_source_directory(. DIR_CGC_SRCS)
set(LIBRARY_OUTPUT_PATH cgc)
file(GLOB_RECURSE CPP_SOURCE *.cpp)
file(GLOB_RECURSE CPP_HEADER *.hpp)

add_library(cgc-header INTERFACE ${CPP_HEADER})
add_library(cgc STATIC ${CPP_SOURCE} ${CPP_HEADER})

target_include_directories(cgc INTERFACE ./)
target_link_libraries(cgc PUBLIC cgc-header)

install(TARGETS cgc LIBRARY DESTINATION cgc ARCHIVE DESTINATION cgc)
install(FILES ${CPP_HEADER} DESTINATION include/cgc)
