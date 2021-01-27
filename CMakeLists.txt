cmake_minimum_required(VERSION 3.16)
project(20_20_20_helper)

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0)

set(CMAKE_CXX_STANDARD 17)

add_executable(20_20_20_helper src/main.cpp src/Timer.cpp include/Timer.h)