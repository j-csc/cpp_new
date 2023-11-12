if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(
    FATAL_ERROR
      "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there."
  )
endif()

# Add the subdirectories for client, server, and core
add_subdirectory(client)
add_subdirectory(server)
add_subdirectory(core)

# If you have a common include directory for headers
include_directories(${CMAKE_SOURCE_DIR}/src/include)