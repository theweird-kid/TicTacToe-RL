cmake_minimum_required(VERSION 3.10)
project(TicTacToeRL)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SDL2 package
find_package(SDL2 REQUIRED)

# Add the executable
add_executable(game src/main.cc src/core/impl/Game_impl.cc src/core/impl/Board_impl.cc)

# Link SDL2 library
target_link_libraries(game SDL2::SDL2)