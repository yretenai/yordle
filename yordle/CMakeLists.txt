project(yordle)

add_library(yordle)

target_sources(yordle PUBLIC public/yordle/manifest/RiotManifest_generated.h)

set_target_properties(yordle PROPERTIES POSITION_INDEPENDENT_CODE 1)
target_compile_definitions(yordle PRIVATE DRAGON_LIBRARY_NAME="yordle")

if (MSVC)
    generate_export_header(yordle BASE_NAME yordle DEFINE_NO_DEPRECATED EXPORT_FILE_NAME ${PROJECT_SOURCE_DIR}/public/yordle/yordle_export_win.a.h)

elseif (WIN32_CLANG)
    generate_export_header(yordle BASE_NAME yordle DEFINE_NO_DEPRECATED EXPORT_FILE_NAME ${PROJECT_SOURCE_DIR}/public/yordle/yordle_export_clang.a.h)
else ()
    generate_export_header(yordle BASE_NAME yordle DEFINE_NO_DEPRECATED EXPORT_FILE_NAME ${PROJECT_SOURCE_DIR}/public/yordle/yordle_export_linux.a.h)
endif ()

target_include_directories(yordle PUBLIC ${PROJECT_SOURCE_DIR}/public)

add_subdirectory("private")

target_link_libraries(yordle PUBLIC standard_dragon)
target_link_libraries(yordle PUBLIC ZLIB::ZLIB)
target_link_libraries(yordle PUBLIC flatbuffers::flatbuffers)
target_link_libraries(yordle PUBLIC nlohmann_json nlohmann_json::nlohmann_json)

if (MSVC OR WIN32_CLANG)
    target_link_libraries(yordle PUBLIC zstd::libzstd_shared)
else ()
    target_link_libraries(yordle PUBLIC zstd::libzstd_static)
endif ()

find_library(XXHASH_LIBRARY xxhash)
target_link_libraries(yordle PRIVATE ${XXHASH_LIBRARY})

file(GLOB_RECURSE YORDLE_HEADERS "public/*.h" "public/*.hpp")

include(GNUInstallDirs)
install(TARGETS yordle LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(DIRECTORY public/yordle DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h" PATTERN "*.fbs")
