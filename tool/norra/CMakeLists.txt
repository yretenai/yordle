project(TOOL_norra)

find_package(imgui CONFIG REQUIRED)

add_executable(norra norra.cpp)
target_compile_definitions(norra PRIVATE DRAGON_LIBRARY_NAME="norra")
target_link_libraries(norra yordle)
target_link_libraries(norra standard_dragon)
target_link_libraries(norra ProgramOptionsHxx)
target_link_libraries(norra imgui::imgui)

if (MSVC OR WIN32_CLANG)
    target_sources(norra PRIVATE device/win_d3d11.cpp)
    find_library(D3D11_LIBRARY d3d11.lib)
    target_link_libraries(norra "${D3D11_LIBRARY}")
endif ()

include(GNUInstallDirs)
install(TARGETS norra RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
