cmake_minimum_required(VERSION 3.14...3.22)

# --- Project configuration ---
project(
    MyProjectClient
    VERSION 1.0.0
    LANGUAGES CXX
)

# Define the executable for the client
add_executable(client main.cpp) 

# Link the core library and any other libraries needed
find_package(fmt CONFIG REQUIRED)
target_link_libraries(client PRIVATE fmt::fmt)