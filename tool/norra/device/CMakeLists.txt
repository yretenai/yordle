project(norra_device)

target_sources(norra PRIVATE render_device_framework.cpp)

if (MSVC OR WIN32_CLANG)
    target_sources(norra PRIVATE win_d3d11.cpp)
endif ()
