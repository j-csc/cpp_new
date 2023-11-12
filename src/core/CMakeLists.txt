cmake_minimum_required(VERSION 3.14...3.22)

# --- Project configuration ---
project(
    MyProjectCore
    VERSION 1.0.0
    LANGUAGES CXX
)

# Define the core library
add_library(core
    core_lib.cpp
)

target_include_directories(core
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/core
)
