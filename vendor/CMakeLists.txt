project(VENDOR)

add_subdirectory("standard_dragon")

include(GNUInstallDirs)
install(DIRECTORY standard_dragon DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h")
