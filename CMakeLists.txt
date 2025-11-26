cmake_minimum_required(VERSION 3.28)
project(MyCpp23Project)

# Set C++23 standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(foo)
target_sources(foo
  PUBLIC
    FILE_SET CXX_MODULES FILES
      src/foo.cxx
)

add_executable(my_app
        src/main.cpp
        src/math.cpp
        src/math.ixx
)

target_link_libraries(my_app foo)