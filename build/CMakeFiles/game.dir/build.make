# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/theweird-kid/dev/CPP/tic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/theweird-kid/dev/CPP/tic/build

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/src/main.cc.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/main.cc.o: ../src/main.cc
CMakeFiles/game.dir/src/main.cc.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/theweird-kid/dev/CPP/tic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/src/main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/src/main.cc.o -MF CMakeFiles/game.dir/src/main.cc.o.d -o CMakeFiles/game.dir/src/main.cc.o -c /home/theweird-kid/dev/CPP/tic/src/main.cc

CMakeFiles/game.dir/src/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/theweird-kid/dev/CPP/tic/src/main.cc > CMakeFiles/game.dir/src/main.cc.i

CMakeFiles/game.dir/src/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/theweird-kid/dev/CPP/tic/src/main.cc -o CMakeFiles/game.dir/src/main.cc.s

CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o: ../src/core/impl/Game_impl.cc
CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/theweird-kid/dev/CPP/tic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o -MF CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o.d -o CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o -c /home/theweird-kid/dev/CPP/tic/src/core/impl/Game_impl.cc

CMakeFiles/game.dir/src/core/impl/Game_impl.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/core/impl/Game_impl.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/theweird-kid/dev/CPP/tic/src/core/impl/Game_impl.cc > CMakeFiles/game.dir/src/core/impl/Game_impl.cc.i

CMakeFiles/game.dir/src/core/impl/Game_impl.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/core/impl/Game_impl.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/theweird-kid/dev/CPP/tic/src/core/impl/Game_impl.cc -o CMakeFiles/game.dir/src/core/impl/Game_impl.cc.s

CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o: ../src/core/impl/Board_impl.cc
CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/theweird-kid/dev/CPP/tic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o -MF CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o.d -o CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o -c /home/theweird-kid/dev/CPP/tic/src/core/impl/Board_impl.cc

CMakeFiles/game.dir/src/core/impl/Board_impl.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/core/impl/Board_impl.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/theweird-kid/dev/CPP/tic/src/core/impl/Board_impl.cc > CMakeFiles/game.dir/src/core/impl/Board_impl.cc.i

CMakeFiles/game.dir/src/core/impl/Board_impl.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/core/impl/Board_impl.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/theweird-kid/dev/CPP/tic/src/core/impl/Board_impl.cc -o CMakeFiles/game.dir/src/core/impl/Board_impl.cc.s

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/src/main.cc.o" \
"CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o" \
"CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game: CMakeFiles/game.dir/src/main.cc.o
game: CMakeFiles/game.dir/src/core/impl/Game_impl.cc.o
game: CMakeFiles/game.dir/src/core/impl/Board_impl.cc.o
game: CMakeFiles/game.dir/build.make
game: /usr/lib/x86_64-linux-gnu/libSDL2.so
game: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/theweird-kid/dev/CPP/tic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game
.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	cd /home/theweird-kid/dev/CPP/tic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/theweird-kid/dev/CPP/tic /home/theweird-kid/dev/CPP/tic /home/theweird-kid/dev/CPP/tic/build /home/theweird-kid/dev/CPP/tic/build /home/theweird-kid/dev/CPP/tic/build/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.dir/depend

