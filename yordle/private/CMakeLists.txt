project(yordle)

target_sources(yordle PRIVATE yordle.cpp)

add_subdirectory("archive")
add_subdirectory("cdtb")
add_subdirectory("data")
add_subdirectory("manifest")
add_subdirectory("sieve")
