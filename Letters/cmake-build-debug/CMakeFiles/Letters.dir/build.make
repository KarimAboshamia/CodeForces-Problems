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
CMAKE_SOURCE_DIR = C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Letters.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Letters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Letters.dir/flags.make

CMakeFiles/Letters.dir/main.cpp.obj: CMakeFiles/Letters.dir/flags.make
CMakeFiles/Letters.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Letters.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Letters.dir\main.cpp.obj -c C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\main.cpp

CMakeFiles/Letters.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Letters.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\main.cpp > CMakeFiles\Letters.dir\main.cpp.i

CMakeFiles/Letters.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Letters.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\main.cpp -o CMakeFiles\Letters.dir\main.cpp.s

# Object files for target Letters
Letters_OBJECTS = \
"CMakeFiles/Letters.dir/main.cpp.obj"

# External object files for target Letters
Letters_EXTERNAL_OBJECTS =

Letters.exe: CMakeFiles/Letters.dir/main.cpp.obj
Letters.exe: CMakeFiles/Letters.dir/build.make
Letters.exe: CMakeFiles/Letters.dir/linklibs.rsp
Letters.exe: CMakeFiles/Letters.dir/objects1.rsp
Letters.exe: CMakeFiles/Letters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Letters.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Letters.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Letters.dir/build: Letters.exe

.PHONY : CMakeFiles/Letters.dir/build

CMakeFiles/Letters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Letters.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Letters.dir/clean

CMakeFiles/Letters.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\cmake-build-debug C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\cmake-build-debug C:\Users\Rocker\Desktop\C++\ProblemSolving\Letters\cmake-build-debug\CMakeFiles\Letters.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Letters.dir/depend

