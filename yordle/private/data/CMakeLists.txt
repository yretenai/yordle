project(yordle_data)

target_sources(yordle PRIVATE inibin.cpp inibin_v1.cpp inibin_v2.cpp property_bin.cpp)

add_subdirectory(prop)
