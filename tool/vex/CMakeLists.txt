project(TOOL_vex)

find_package(imgui CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(vex vex.cpp)
target_compile_definitions(vex PRIVATE UNICODE)
target_compile_definitions(vex PRIVATE DRAGON_LIBRARY_NAME="vex")
target_link_libraries(vex yordle)
target_link_libraries(vex standard_dragon)
target_link_libraries(vex ProgramOptionsHxx)
target_link_libraries(vex imgui::imgui)
target_link_libraries(vex fmt::fmt)

add_subdirectory(device)
add_subdirectory(mage)
add_subdirectory(os)
add_subdirectory(ui)

if (MSVC OR WIN32_CLANG)
    find_library(D3D11_LIBRARY d3d11.lib)
    target_link_libraries(vex "${D3D11_LIBRARY}")
    find_library(D3DCOMPILER_LIBRARY d3dcompiler.lib)
    target_link_libraries(vex "${D3DCOMPILER_LIBRARY}")
endif ()

include(GNUInstallDirs)
install(TARGETS vex RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})