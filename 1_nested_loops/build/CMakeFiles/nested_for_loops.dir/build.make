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
CMAKE_SOURCE_DIR = /home/alex/Desktop/learning_cpp/1_nested_loops

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/Desktop/learning_cpp/1_nested_loops/build

# Include any dependencies generated for this target.
include CMakeFiles/nested_for_loops.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nested_for_loops.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nested_for_loops.dir/flags.make

CMakeFiles/nested_for_loops.dir/src/main.cpp.o: CMakeFiles/nested_for_loops.dir/flags.make
CMakeFiles/nested_for_loops.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Desktop/learning_cpp/1_nested_loops/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nested_for_loops.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nested_for_loops.dir/src/main.cpp.o -c /home/alex/Desktop/learning_cpp/1_nested_loops/src/main.cpp

CMakeFiles/nested_for_loops.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nested_for_loops.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Desktop/learning_cpp/1_nested_loops/src/main.cpp > CMakeFiles/nested_for_loops.dir/src/main.cpp.i

CMakeFiles/nested_for_loops.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nested_for_loops.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Desktop/learning_cpp/1_nested_loops/src/main.cpp -o CMakeFiles/nested_for_loops.dir/src/main.cpp.s

CMakeFiles/nested_for_loops.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/nested_for_loops.dir/src/main.cpp.o.requires

CMakeFiles/nested_for_loops.dir/src/main.cpp.o.provides: CMakeFiles/nested_for_loops.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/nested_for_loops.dir/build.make CMakeFiles/nested_for_loops.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/nested_for_loops.dir/src/main.cpp.o.provides

CMakeFiles/nested_for_loops.dir/src/main.cpp.o.provides.build: CMakeFiles/nested_for_loops.dir/src/main.cpp.o


# Object files for target nested_for_loops
nested_for_loops_OBJECTS = \
"CMakeFiles/nested_for_loops.dir/src/main.cpp.o"

# External object files for target nested_for_loops
nested_for_loops_EXTERNAL_OBJECTS =

nested_for_loops: CMakeFiles/nested_for_loops.dir/src/main.cpp.o
nested_for_loops: CMakeFiles/nested_for_loops.dir/build.make
nested_for_loops: CMakeFiles/nested_for_loops.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/Desktop/learning_cpp/1_nested_loops/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nested_for_loops"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nested_for_loops.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nested_for_loops.dir/build: nested_for_loops

.PHONY : CMakeFiles/nested_for_loops.dir/build

CMakeFiles/nested_for_loops.dir/requires: CMakeFiles/nested_for_loops.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/nested_for_loops.dir/requires

CMakeFiles/nested_for_loops.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nested_for_loops.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nested_for_loops.dir/clean

CMakeFiles/nested_for_loops.dir/depend:
	cd /home/alex/Desktop/learning_cpp/1_nested_loops/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/Desktop/learning_cpp/1_nested_loops /home/alex/Desktop/learning_cpp/1_nested_loops /home/alex/Desktop/learning_cpp/1_nested_loops/build /home/alex/Desktop/learning_cpp/1_nested_loops/build /home/alex/Desktop/learning_cpp/1_nested_loops/build/CMakeFiles/nested_for_loops.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nested_for_loops.dir/depend

