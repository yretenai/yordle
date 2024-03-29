project(TOOL_vex)

if (MSVC OR WIN32_CLANG)
    find_package(imgui CONFIG REQUIRED)

    add_executable(vex vex.cpp)
    target_compile_definitions(vex PRIVATE UNICODE)
    target_compile_definitions(vex PRIVATE DRAGON_LIBRARY_NAME="vex")
    target_link_libraries(vex yordle)
    target_link_libraries(vex standard_dragon)
    target_link_libraries(vex ProgramOptionsHxx)
    target_link_libraries(vex imgui::imgui)

    add_subdirectory(device)
    add_subdirectory(mage)
    add_subdirectory(os)
    add_subdirectory(ui)

    if (MSVC OR WIN32_CLANG)
        find_library(D3D11_LIBRARY d3d11.lib)
        target_link_libraries(vex "${D3D11_LIBRARY}")
        find_library(D3DCOMPILER_LIBRARY d3dcompiler.lib)
        target_link_libraries(vex "${D3DCOMPILER_LIBRARY}")
        find_package(directx-headers REQUIRED)
        find_package(directxmath REQUIRED)
        find_package(DirectXTex REQUIRED)
        target_link_libraries(vex Microsoft::DirectXTex)
        find_package(DirectXTK REQUIRED)
        target_link_libraries(vex Microsoft::DirectXTK)
        target_sources(vex PRIVATE common_win.cpp)
        set(CMAKE_SHARED_LINKER_FLAGS /MANIFEST:NO)
        add_custom_command(TARGET vex POST_BUILD
                COMMAND
                "mt.exe" -manifest "${PROJECT_SOURCE_DIR}/vex.manifest" "-inputresource:${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE}/vex.exe;#1" "-outputresource:${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE}/vex.exe;#1"
                COMMENT "Adding custom manifest containing MSVCRT80 dependency...")
    endif ()

    include(GNUInstallDirs)
    install(TARGETS vex RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

endif ()
