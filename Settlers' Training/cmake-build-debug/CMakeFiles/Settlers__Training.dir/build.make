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
CMAKE_SOURCE_DIR = "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Settlers__Training.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Settlers__Training.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Settlers__Training.dir/flags.make

CMakeFiles/Settlers__Training.dir/main.cpp.obj: CMakeFiles/Settlers__Training.dir/flags.make
CMakeFiles/Settlers__Training.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Settlers__Training.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Settlers__Training.dir\main.cpp.obj -c "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\main.cpp"

CMakeFiles/Settlers__Training.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Settlers__Training.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\main.cpp" > CMakeFiles\Settlers__Training.dir\main.cpp.i

CMakeFiles/Settlers__Training.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Settlers__Training.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\main.cpp" -o CMakeFiles\Settlers__Training.dir\main.cpp.s

# Object files for target Settlers__Training
Settlers__Training_OBJECTS = \
"CMakeFiles/Settlers__Training.dir/main.cpp.obj"

# External object files for target Settlers__Training
Settlers__Training_EXTERNAL_OBJECTS =

Settlers__Training.exe: CMakeFiles/Settlers__Training.dir/main.cpp.obj
Settlers__Training.exe: CMakeFiles/Settlers__Training.dir/build.make
Settlers__Training.exe: CMakeFiles/Settlers__Training.dir/linklibs.rsp
Settlers__Training.exe: CMakeFiles/Settlers__Training.dir/objects1.rsp
Settlers__Training.exe: CMakeFiles/Settlers__Training.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Settlers__Training.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Settlers__Training.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Settlers__Training.dir/build: Settlers__Training.exe

.PHONY : CMakeFiles/Settlers__Training.dir/build

CMakeFiles/Settlers__Training.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Settlers__Training.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Settlers__Training.dir/clean

CMakeFiles/Settlers__Training.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\cmake-build-debug" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\cmake-build-debug" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Settlers' Training\cmake-build-debug\CMakeFiles\Settlers__Training.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Settlers__Training.dir/depend
