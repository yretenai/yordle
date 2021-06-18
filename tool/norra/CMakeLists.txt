project(TOOL_norra)

find_package(imgui CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(norra norra.cpp)
target_compile_definitions(norra PRIVATE UNICODE)
target_compile_definitions(norra PRIVATE DRAGON_LIBRARY_NAME="norra")
target_link_libraries(norra yordle)
target_link_libraries(norra standard_dragon)
target_link_libraries(norra ProgramOptionsHxx)
target_link_libraries(norra imgui::imgui)
target_link_libraries(norra fmt::fmt)

add_subdirectory(device)
add_subdirectory(mage)
add_subdirectory(os)
add_subdirectory(ui)

if (MSVC OR WIN32_CLANG)
    find_library(D3D11_LIBRARY d3d11.lib)
    target_link_libraries(norra "${D3D11_LIBRARY}")
    find_library(D3DCOMPILER_LIBRARY d3dcompiler.lib)
    target_link_libraries(norra "${D3DCOMPILER_LIBRARY}")
endif ()

include(GNUInstallDirs)
install(TARGETS norra RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
