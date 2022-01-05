**~~~ THIS IS A WORK-IN-PROGRESS ~~~**

# ke-cmake-sample-apps

This repo contains the CMake examples discussed in blog posts on [Kickstart Embedded](https://kickstartembedded.com). This series of posts is a tool to learn CMake. CMake is very useful to know as a C developer - especially if you are looking to build apps that are going to find their way into linux systems. In fact, if you are working with things like the Yocto project, knowing CMake will give you the ability to package your code and easily deploy on multiple machines very easily by writing a recipe.

The below samples introduce the various CMake concepts gradually and can be used to understand how to you can make your own CMake project!

*NOTE: Even if no sample app is selected for build, the included hello_world file will build!*

## Sample 1: Simple Calculator Static Library
- Selected using `BUILD_CALC` symbol
- Optionally, implements addition, subtraction, multiplication, division - selected using `BUILD_CALC_F0`
- Optionally, implements percentage, factorial, power (not using math library), inverse (1/x) - selected using `BUILD_CALC_F1`
- Autogenerates a configuration header file named `g_config.h` which when included enables the functions that you want in the respective header files

This CMake example shows how to:
1. Establish **build dependencies** using build options
2. Build **static libraries** out of C code
3. Pick and **choose the components** that you need in your build

These features cover most beginner use-cases of CMake. Do read thru the comments in the CMakeFiles.txt files!

