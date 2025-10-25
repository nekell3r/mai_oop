cmake_minimum_required(VERSION 3.16)

project(lab01_palindrome_checker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(palindrome_lib
    src/PalindromeChecker.cpp
)

add_executable(palindrome_app
    src/main.cpp
)

target_link_libraries(palindrome_app
    palindrome_lib
)

enable_testing()
add_subdirectory(test)
