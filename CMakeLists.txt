cmake_minimum_required(VERSION 3.10)
project(ComputePipeline)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(ComputePipeline
    src/main.cpp
    src/ComputePipeline.cpp
    src/Loader.cpp
    src/Processor.cpp
)