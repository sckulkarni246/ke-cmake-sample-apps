** !!! THIS IS A WORK-IN-PROGRESS !!! **

# ke-cmake-sample-apps

This repo contains the CMake examples discussed in blog posts on [Kickstart Embedded](https://kickstartembedded.com). This series of posts is a tool to learn CMake. CMake is very useful to know as a C developer - especially if you are looking to build apps that are going to find their way into linux systems. The below samples introduce the various CMake concepts gradually and can be used to understand how to you can make your own CMake project!

*NOTE: Even if no sample app is selected for build, the included hello_world file will build!*

## Sample 1: Simple Calculator Static Library
- Selected using BUILD_CALC symbol
- Optionally, implements addition, subtraction, multiplication, division - selected using BUILD_CALC_F0
- Optionally, implements percentage, factorial, power (not using math library), inverse (1/x) - selected using BUILD_CALC_F1 (under development)
- Creates a configuration header file which when included enables the functions you want!

This CMake example shows how to establish build dependencies, and then build static libraries out of C code and pick and choose the components that you need. This covers most beginner use-cases of CMake. Enjoy!

