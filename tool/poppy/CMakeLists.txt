project(TOOL_poppy)

add_executable(poppy poppy.cpp decode.cpp download.cpp fetch.cpp)
target_link_libraries(poppy yordle)
target_link_libraries(poppy ProgramOptionsHxx)
target_link_libraries(poppy CURL::libcurl)

include(GNUInstallDirs)
install(TARGETS poppy RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
