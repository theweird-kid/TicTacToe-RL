cmake_minimum_required(VERSION 3.10)
project(TicTacToeRL)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SDL2 package
find_package(SDL2 REQUIRED)

#find SDL2_image
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2_IMAGE REQUIRED SDL2_image)

# Find mlpack package
find_package(mlpack REQUIRED)

# Define the source directory
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

# Add the executable
add_executable(game ${SRC_DIR}/main.cc ${SRC_DIR}/core/impl/Game_impl.cc ${SRC_DIR}/core/impl/Board_impl.cc)

# Link SDL2 and SDL2_image libraries
target_link_libraries(game SDL2::SDL2 ${SDL2_IMAGE_LIBRARIES} mlpack)
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})