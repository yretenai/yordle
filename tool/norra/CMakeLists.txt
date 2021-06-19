project(TOOL_norra)

find_package(nlohmann_json CONFIG REQUIRED)

add_executable(norra norra.cpp)
target_compile_definitions(norra PRIVATE DRAGON_LIBRARY_NAME="norra")
target_link_libraries(norra yordle)
target_link_libraries(norra standard_dragon)
target_link_libraries(norra ProgramOptionsHxx)
target_link_libraries(norra nlohmann_json nlohmann_json::nlohmann_json)

include(GNUInstallDirs)
install(TARGETS norra RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
