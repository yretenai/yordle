project(TOOL_norra)

add_executable(norra norra.cpp)
target_compile_definitions(norra PRIVATE DRAGON_LIBRARY_NAME="norra")
target_link_libraries(heimerdinger yordle)
target_link_libraries(heimerdinger standard_dragon)
target_link_libraries(heimerdinger ProgramOptionsHxx)

include(GNUInstallDirs)
install(TARGETS norra RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
