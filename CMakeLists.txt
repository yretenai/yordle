cmake_minimum_required(VERSION 3.20)
project(yordle)

set(CMAKE_CXX_STANDARD 20)

include(FindOpenMP)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(YORDLE_TOOL_POPPY_THREADING "Enable download threading in Poppy" ON)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" AND CMAKE_HOST_SYSTEM_NAME MATCHES "Windows")
    set(WIN32_CLANG ON)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
    add_compile_definitions(_WIN32_CLANG)
endif ()

if (MSVC)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
    add_compile_options("/wd4068")
    add_compile_options("/std:c++latest")
    add_compile_options("/bigobj")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2 -Ox -wd4005") # disable C4005 because OpenMP defines _OPENMP twice.
    if (OpenMP_CXX_FOUND)
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -arch:AVX2 -openmp:llvm -openmp:experimental ${OpenMP_CXX_FLAGS}")
        set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} ${OpenMP_EXE_LINKER_FLAGS}")
    endif ()
else ()
    set(CMAKE_THREAD_LIBS_INIT "-lpthread")
    set(CMAKE_HAVE_THREADS_LIBRARY 1)
    set(CMAKE_USE_WIN32_THREADS_INIT 0)
    set(CMAKE_USE_PTHREADS_INIT 1)
    set(THREADS_PREFER_PTHREAD_FLAG ON)
    if (CLANG)
        find_package(LLVM REQUIRED CONFIG)
        message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
        message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
        include_directories(${LLVM_INCLUDE_DIRS})
        include_directories(${LLVM_INCLUDE_DIRS}/c++/v1/)
        separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
        add_definitions(${LLVM_DEFINITIONS_LIST})
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
        CHECK_INCLUDE_FILE_CXX("__pstl_execution" HAS_PARALLEL_ALGORITHMS)
        if (HAS_PARALLEL_ALGORITHMS)
            add_compile_definitions("_LIBCPP_HAS_PARALLEL_ALGORITHMS")
        endif ()
    endif ()
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
    if (OpenMP_CXX_FOUND)
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -march=native ${OpenMP_CXX_FLAGS}")
        set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} ${OpenMP_EXE_LINKER_FLAGS}")
    endif ()
endif ()

include(CheckIncludeFileCXX)

include(GenerateExportHeader)

add_subdirectory("vendor")

find_package(zstd CONFIG REQUIRED)
find_package(ZLIB REQUIRED)
find_package(Flatbuffers CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

option(BUILD_SHARED_LIBS "Build as a shared library" OFF)

add_subdirectory("yordle")
add_subdirectory("tool")

include(GNUInstallDirs)
install(DIRECTORY licenses DESTINATION ${CMAKE_INSTALL_DOCDIR})
install(FILES LICENSE DESTINATION ${CMAKE_INSTALL_DOCDIR}/licenses RENAME yordle)
