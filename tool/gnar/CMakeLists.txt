project(TOOL_gnar)

add_executable(gnar gnar.cpp)
target_compile_definitions(gnar PRIVATE DRAGON_LIBRARY_NAME="gnar")
target_link_libraries(gnar yordle)
target_link_libraries(gnar standard_dragon)
target_link_libraries(gnar ProgramOptionsHxx)

include(GNUInstallDirs)
install(TARGETS gnar RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
