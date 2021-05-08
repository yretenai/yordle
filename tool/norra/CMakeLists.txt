project(TOOL_norra)

find_package(imgui CONFIG REQUIRED)

add_executable(norra norra.cpp renderfx/DirectX11Window.cpp)
target_link_libraries(norra yordle)
target_link_libraries(norra standard_dragon)
target_link_libraries(norra ProgramOptionsHxx)
target_link_libraries(norra imgui::imgui)

include(GNUInstallDirs)
install(TARGETS norra RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
