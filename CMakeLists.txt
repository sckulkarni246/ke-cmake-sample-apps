cmake_minimum_required(VERSION 2.8.12)
project(ke-cmake-sample-apps C)
set(VERSION "0.1")
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)

# We will now add hello_world to the build. This will always be built.
set(SRCS ${CMAKE_CURRENT_SOURCE_DIR}/hello_world.c)

# Build options - choose what you want to build!
## Choose if we want to build the calculator application
option(BUILD_CALC "Build the simple calculator library" OFF)

# If we chose to build the calculator, add the necessary CMake file to the mix...easy-peasy!
if(BUILD_CALC)
    add_subdirectory(calculator)
endif(BUILD_CALC)

# Create a global config file that holds the selected macro definitions
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/g_config.h.in g_config.h @ONLY)

# Now, include the path of the generated config file to the paths to search for headers
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Our goal is to make a STATIC library named kecmakesampleapps from the files present in the SRCS variable
add_library(kecmakesampleapps STATIC ${SRCS})


