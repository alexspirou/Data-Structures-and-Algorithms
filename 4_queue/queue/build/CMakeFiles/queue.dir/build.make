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
CMAKE_SOURCE_DIR = /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build

# Include any dependencies generated for this target.
include CMakeFiles/queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/queue.dir/flags.make

CMakeFiles/queue.dir/src/main.cpp.o: CMakeFiles/queue.dir/flags.make
CMakeFiles/queue.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/queue.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/queue.dir/src/main.cpp.o -c /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/src/main.cpp

CMakeFiles/queue.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/queue.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/src/main.cpp > CMakeFiles/queue.dir/src/main.cpp.i

CMakeFiles/queue.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/queue.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/src/main.cpp -o CMakeFiles/queue.dir/src/main.cpp.s

CMakeFiles/queue.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/queue.dir/src/main.cpp.o.requires

CMakeFiles/queue.dir/src/main.cpp.o.provides: CMakeFiles/queue.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/queue.dir/build.make CMakeFiles/queue.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/queue.dir/src/main.cpp.o.provides

CMakeFiles/queue.dir/src/main.cpp.o.provides.build: CMakeFiles/queue.dir/src/main.cpp.o


# Object files for target queue
queue_OBJECTS = \
"CMakeFiles/queue.dir/src/main.cpp.o"

# External object files for target queue
queue_EXTERNAL_OBJECTS =

queue: CMakeFiles/queue.dir/src/main.cpp.o
queue: CMakeFiles/queue.dir/build.make
queue: CMakeFiles/queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/queue.dir/build: queue

.PHONY : CMakeFiles/queue.dir/build

CMakeFiles/queue.dir/requires: CMakeFiles/queue.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/queue.dir/requires

CMakeFiles/queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/queue.dir/clean

CMakeFiles/queue.dir/depend:
	cd /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build /home/alex/Desktop/Data-Structures-and-Algorithms/4_queue/build/CMakeFiles/queue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/queue.dir/depend

