# CMakeList.txt: CMake project for parchis-console, include source and define
# project specific logic here.

cmake_minimum_required(VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
endif()

project(parchis-console VERSION 1.0 LANGUAGES CXX)

# Add source to this project's executable.
add_executable(parchis-console
    src/main.cpp
    src/dice.cpp
    src/game.cpp
    src/piece.cpp
    src/player.cpp
)

target_include_directories(parchis-console PRIVATE include/)

set_target_properties(parchis-console PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

# TODO: Add tests and install targets if needed.
