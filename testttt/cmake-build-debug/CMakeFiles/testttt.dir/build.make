# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testttt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testttt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testttt.dir/flags.make

CMakeFiles/testttt.dir/main.cpp.obj: CMakeFiles/testttt.dir/flags.make
CMakeFiles/testttt.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testttt.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testttt.dir\main.cpp.obj -c C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\main.cpp

CMakeFiles/testttt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testttt.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\main.cpp > CMakeFiles\testttt.dir\main.cpp.i

CMakeFiles/testttt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testttt.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\main.cpp -o CMakeFiles\testttt.dir\main.cpp.s

# Object files for target testttt
testttt_OBJECTS = \
"CMakeFiles/testttt.dir/main.cpp.obj"

# External object files for target testttt
testttt_EXTERNAL_OBJECTS =

testttt.exe: CMakeFiles/testttt.dir/main.cpp.obj
testttt.exe: CMakeFiles/testttt.dir/build.make
testttt.exe: CMakeFiles/testttt.dir/linklibs.rsp
testttt.exe: CMakeFiles/testttt.dir/objects1.rsp
testttt.exe: CMakeFiles/testttt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testttt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testttt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testttt.dir/build: testttt.exe

.PHONY : CMakeFiles/testttt.dir/build

CMakeFiles/testttt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testttt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testttt.dir/clean

CMakeFiles/testttt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\cmake-build-debug C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\cmake-build-debug C:\Users\Rocker\Desktop\C++\ProblemSolving\testttt\cmake-build-debug\CMakeFiles\testttt.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testttt.dir/depend
