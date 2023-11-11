cmake_minimum_required(VERSION 3.10)

project(MyProject)

# Add your source files here
set(SOURCES
    src/main.cpp
)

# Add your header files here
set(HEADERS
)

# Add any additional libraries you need here
set(LIBRARIES
)

# Add any additional include directories you need here
set(INCLUDE_DIRS
)

# Add any additional linker flags you need here
set(LINKER_FLAGS
)

# Set the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Link any additional libraries
target_link_libraries(${PROJECT_NAME} ${LIBRARIES})

# Add any additional include directories
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRS})

# Add any additional linker flags
target_link_libraries(${PROJECT_NAME} ${LINKER_FLAGS})
