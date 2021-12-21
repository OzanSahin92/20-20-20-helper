cmake_minimum_required(VERSION 3.16)
project(20_20_20_helper)

find_package(PkgConfig)
find_package(GTest REQUIRED)

pkg_check_modules(GTKMM gtkmm-3.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(${GTKMM_INCLUDE_DIRS})
include_directories(include/)
include_directories($(GTEST_INCLUDE_DIRS))


file(GLOB SrcFiles src/*.cpp )

add_executable(20_20_20_helper src/main.cpp ${SrcFiles})

target_link_libraries(20_20_20_helper
        ${GTKMM_LIBRARIES}  )

add_subdirectory(test)