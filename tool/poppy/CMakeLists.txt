project(TOOL_poppy)

add_executable(poppy main.cpp)
target_link_libraries(poppy yordle)

include(GNUInstallDirs)
install(TARGETS poppy RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
