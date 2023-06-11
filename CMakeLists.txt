cmake_minimum_required(VERSION 3.24)
project(arkuszkalkulacyjnyprojekt)

set(CMAKE_CXX_STANDARD 17)

add_executable(arkuszkalkulacyjnyprojekt main.cpp cell_float.cpp cell_float.h cell_str.cpp cell_str.h cell_interface.h sheet.cpp sheet.h)
