project(TOOL_teemo)

add_executable(teemo teemo.cpp)
target_compile_definitions(teemo PRIVATE DRAGON_LIBRARY_NAME="teemo")
target_link_libraries(teemo yordle)
target_link_libraries(teemo standard_dragon)
target_link_libraries(teemo ProgramOptionsHxx)

include(GNUInstallDirs)
install(TARGETS teemo RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
