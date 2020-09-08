project(TOOL_yordle)

add_executable(yordle main.cpp)
target_link_libraries(yordle poppy)

include(GNUInstallDirs)
install(TARGETS yordle RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
