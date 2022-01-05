cmake_minimum_required(VERSION 2.8.12)
project(ke-cmake-sample-apps C)

# Include the ability to use option dependency macro
include(CMakeDependentOption)

# Configure options that depend on other options here!
cmake_dependent_option(BUILD_CALC_F0 "Build the F0 features" ON "BUILD_CALC" OFF)
cmake_dependent_option(BUILD_CALC_F1 "Build the F1 features" OFF "BUILD_CALC" OFF)

set(CALC_SRCS "")

if(BUILD_CALC_F0)
    set(CALC_SRCS ${CALC_SRCS} ${CMAKE_CURRENT_SOURCE_DIR}/f0.c)
endif(BUILD_CALC_F0)

if(BUILD_CALC_F1)
    set(CALC_SRCS ${CALC_SRCS} ${CMAKE_CURRENT_SOURCE_DIR}/f1.c)
endif(BUILD_CALC_F1)

set(SRCS ${SRCS} ${CALC_SRCS} PARENT_SCOPE)
