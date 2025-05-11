cmake_minimum_required(VERSION 3.21)
project (HTMLEntityConverter)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


set(TARGET_NAME main)

# Add Dependencies
# file(GLOB_RECURSE SOURCES "*.c")
file(GLOB SOURCES "*.c")
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/if_vs_switch_speed.c")
# list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/if_vs_switch_speed.c")


# Set output as executable.
add_executable(${TARGET_NAME} ${SOURCES})

# target_compile_options(${TARGET_NAME} PUBLIC -Wall -Wextra -Wpedantic -Werror=return-type -O3)
