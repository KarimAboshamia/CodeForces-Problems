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
CMAKE_SOURCE_DIR = C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Div2Contest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Div2Contest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Div2Contest.dir/flags.make

CMakeFiles/Div2Contest.dir/main.cpp.obj: CMakeFiles/Div2Contest.dir/flags.make
CMakeFiles/Div2Contest.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Div2Contest.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Div2Contest.dir\main.cpp.obj -c C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\main.cpp

CMakeFiles/Div2Contest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Div2Contest.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\main.cpp > CMakeFiles\Div2Contest.dir\main.cpp.i

CMakeFiles/Div2Contest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Div2Contest.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\main.cpp -o CMakeFiles\Div2Contest.dir\main.cpp.s

# Object files for target Div2Contest
Div2Contest_OBJECTS = \
"CMakeFiles/Div2Contest.dir/main.cpp.obj"

# External object files for target Div2Contest
Div2Contest_EXTERNAL_OBJECTS =

Div2Contest.exe: CMakeFiles/Div2Contest.dir/main.cpp.obj
Div2Contest.exe: CMakeFiles/Div2Contest.dir/build.make
Div2Contest.exe: CMakeFiles/Div2Contest.dir/linklibs.rsp
Div2Contest.exe: CMakeFiles/Div2Contest.dir/objects1.rsp
Div2Contest.exe: CMakeFiles/Div2Contest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Div2Contest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Div2Contest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Div2Contest.dir/build: Div2Contest.exe

.PHONY : CMakeFiles/Div2Contest.dir/build

CMakeFiles/Div2Contest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Div2Contest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Div2Contest.dir/clean

CMakeFiles/Div2Contest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\cmake-build-debug C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\cmake-build-debug C:\Users\Rocker\Desktop\C++\ProblemSolving\Div2Contest\cmake-build-debug\CMakeFiles\Div2Contest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Div2Contest.dir/depend

