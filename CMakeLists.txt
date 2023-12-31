# Build All C++ Projects with CMake
cmake_minimum_required(VERSION 3.14...3.22)

# --- Project configuration ---
project(
    MyProject
    VERSION 1.0.0
    LANGUAGES CXX
)

# ---- Set C++ standard ----

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)
set(CMAKE_CXX_EXTENSIONS Off)

# ---- Integrate vcpkg ----

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")

# ---- Add subdirectories ----

add_subdirectory(src/client)
add_subdirectory(src/server)
add_subdirectory(src/core)
