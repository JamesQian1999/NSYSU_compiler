cmake_minimum_required(VERSION 3.0)
set (CMAKE_CXX_STANDARD 17)

project(symbol_table)
add_library(symbol_table STATIC symbol_table.cpp)
#add_library(symbol_table SHARED symbol_table.cpp)
