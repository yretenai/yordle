project(yordle_data)

target_sources(yordle PRIVATE inibin.cpp inibin_v1.cpp inibin_v2.cpp property_bin.cpp rst_file.cpp rst_file_v1.cpp rst_file_v2.cpp rst_file_v4.cpp)

add_subdirectory(meta)
add_subdirectory(prop)
