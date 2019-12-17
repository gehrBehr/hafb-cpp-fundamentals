# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(MOD1 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#create a static library. The name "my_functions" 
#will be used below in the target_link_libraries
add_library(my_functions
STATIC
    my_functions.h
    my_functions.cpp
)

# Note: In windows, the executable name will be: TheProgram.exe
add_executable(TheProgram main.cpp)

target_link_libraries(TheProgram my_functions)  #linked from above library
