project(TOOL_heimerdinger)

add_executable(heimerdinger heimerdinger.cpp)
target_compile_definitions(heimerdinger PRIVATE DRAGON_LIBRARY_NAME="heimerdinger")
target_link_libraries(heimerdinger yordle)
target_link_libraries(heimerdinger standard_dragon)
target_link_libraries(heimerdinger ProgramOptionsHxx)

include(GNUInstallDirs)
install(TARGETS heimerdinger RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
