cmake_minimum_required(VERSION 2.8.12)
project(ke-cmake-sample-apps C)

# Include the ability to use option dependency macro
include(CMakeDependentOption)

# Configure options that depend on other options here!
cmake_dependent_option(BUILD_CALC_F0 "Build the F0 features" ON "BUILD_CALC" OFF)

if(BUILD_CALC_F0)
    set(SRCS ${SRCS} ${CMAKE_CURRENT_SOURCE_DIR}/f0.c PARENT_SCOPE)
endif(BUILD_CALC_F0)

