project(vex_device)

target_sources(vex PRIVATE render_device_framework.cpp)

if (MSVC OR WIN32_CLANG)
    target_sources(vex PRIVATE win_d3d11.cpp)
endif ()
