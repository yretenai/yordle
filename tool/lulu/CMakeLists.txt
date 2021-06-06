project(TOOL_lulu)

add_executable(lulu lulu.cpp)
target_compile_definitions(lulu PRIVATE DRAGON_LIBRARY_NAME="lulu")
target_link_libraries(lulu yordle)
target_link_libraries(lulu standard_dragon)
target_link_libraries(lulu ProgramOptionsHxx)

include(GNUInstallDirs)
install(TARGETS lulu RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
