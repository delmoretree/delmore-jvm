cmake_minimum_required(VERSION 3.17)
project(delmore-jvm)

set(CMAKE_CXX_STANDARD 14)

add_executable(delmore-jvm main.cpp version.h Usage.cpp Usage.h Config.cpp Config.h)