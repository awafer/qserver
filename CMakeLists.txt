﻿# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("qserver")

# Include sub-projects.
add_subdirectory ("qserver")
add_subdirectory ("qclient")
add_subdirectory ("qclientpp")
