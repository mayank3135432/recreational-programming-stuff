# Basic, necessary CMake stuff.
cmake_minimum_required(VERSION 3.20)
project(SO78044813 LANGUAGES C)

# Will generate the `compile_commands.json` automatically.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Make sure the GTK dependency is imported.
find_package(PkgConfig)
pkg_check_modules(GTKMM REQUIRED gtk+-3.0)

# Tell the name of your target executable and the source files
# which are required to build it.
add_executable(example.out main.c) 
