cmake_minimum_required(VERSION 3.17)

project(yordle)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(MSVC)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
    add_definitions(-wd"4068")
    add_definitions(-wd"4996")
    add_definitions(-wd"4251")
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        add_definitions(-EHs)
    endif()
    if(NOT CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        add_compile_definitions(_WIN32_CLANG)
    endif()
else(!USE_GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi")
endif()

include(GenerateExportHeader)
include_directories(vendor)

find_package(zstd CONFIG REQUIRED)
find_package(ZLIB REQUIRED)
find_package(Flatbuffers CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(OpenSSL REQUIRED)

add_subdirectory("vendor")
add_subdirectory("yordle")
add_subdirectory("tool")

include(GNUInstallDirs)
install(DIRECTORY licenses DESTINATION ${CMAKE_INSTALL_DOCDIR})
install(FILES LICENSE DESTINATION ${CMAKE_INSTALL_DOCDIR}/licenses RENAME yordle)
