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
CMAKE_SOURCE_DIR = "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Help_Kingdom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Help_Kingdom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Help_Kingdom.dir/flags.make

CMakeFiles/Help_Kingdom.dir/main.cpp.obj: CMakeFiles/Help_Kingdom.dir/flags.make
CMakeFiles/Help_Kingdom.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Help_Kingdom.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Help_Kingdom.dir\main.cpp.obj -c "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\main.cpp"

CMakeFiles/Help_Kingdom.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Help_Kingdom.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\main.cpp" > CMakeFiles\Help_Kingdom.dir\main.cpp.i

CMakeFiles/Help_Kingdom.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Help_Kingdom.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\main.cpp" -o CMakeFiles\Help_Kingdom.dir\main.cpp.s

# Object files for target Help_Kingdom
Help_Kingdom_OBJECTS = \
"CMakeFiles/Help_Kingdom.dir/main.cpp.obj"

# External object files for target Help_Kingdom
Help_Kingdom_EXTERNAL_OBJECTS =

Help_Kingdom.exe: CMakeFiles/Help_Kingdom.dir/main.cpp.obj
Help_Kingdom.exe: CMakeFiles/Help_Kingdom.dir/build.make
Help_Kingdom.exe: CMakeFiles/Help_Kingdom.dir/linklibs.rsp
Help_Kingdom.exe: CMakeFiles/Help_Kingdom.dir/objects1.rsp
Help_Kingdom.exe: CMakeFiles/Help_Kingdom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Help_Kingdom.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Help_Kingdom.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Help_Kingdom.dir/build: Help_Kingdom.exe

.PHONY : CMakeFiles/Help_Kingdom.dir/build

CMakeFiles/Help_Kingdom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Help_Kingdom.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Help_Kingdom.dir/clean

CMakeFiles/Help_Kingdom.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\cmake-build-debug" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\cmake-build-debug" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Help Kingdom\cmake-build-debug\CMakeFiles\Help_Kingdom.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Help_Kingdom.dir/depend

