# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build

# Include any dependencies generated for this target.
include CMakeFiles/stuck.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stuck.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stuck.dir/flags.make

CMakeFiles/stuck.dir/src/main.cpp.o: CMakeFiles/stuck.dir/flags.make
CMakeFiles/stuck.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stuck.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stuck.dir/src/main.cpp.o -c /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/src/main.cpp

CMakeFiles/stuck.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stuck.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/src/main.cpp > CMakeFiles/stuck.dir/src/main.cpp.i

CMakeFiles/stuck.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stuck.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/src/main.cpp -o CMakeFiles/stuck.dir/src/main.cpp.s

CMakeFiles/stuck.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/stuck.dir/src/main.cpp.o.requires

CMakeFiles/stuck.dir/src/main.cpp.o.provides: CMakeFiles/stuck.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/stuck.dir/build.make CMakeFiles/stuck.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/stuck.dir/src/main.cpp.o.provides

CMakeFiles/stuck.dir/src/main.cpp.o.provides.build: CMakeFiles/stuck.dir/src/main.cpp.o


# Object files for target stuck
stuck_OBJECTS = \
"CMakeFiles/stuck.dir/src/main.cpp.o"

# External object files for target stuck
stuck_EXTERNAL_OBJECTS =

stuck: CMakeFiles/stuck.dir/src/main.cpp.o
stuck: CMakeFiles/stuck.dir/build.make
stuck: CMakeFiles/stuck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stuck"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stuck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stuck.dir/build: stuck

.PHONY : CMakeFiles/stuck.dir/build

CMakeFiles/stuck.dir/requires: CMakeFiles/stuck.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/stuck.dir/requires

CMakeFiles/stuck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stuck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stuck.dir/clean

CMakeFiles/stuck.dir/depend:
	cd /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build /home/alex/Desktop/Data-Structures-and-Algorithms/3_stack/build/CMakeFiles/stuck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stuck.dir/depend
