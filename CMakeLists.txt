cmake_minimum_required(VERSION 3.15)
project(mini_vector VERSION 1.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)


add_executable(mini_vector src/main.cpp)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(mini_vector PRIVATE -Wall -Wextra -pedantic -Wabi)
endif()