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
CMAKE_SOURCE_DIR = "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Appleman_and_Card_Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Appleman_and_Card_Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Appleman_and_Card_Game.dir/flags.make

CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.obj: CMakeFiles/Appleman_and_Card_Game.dir/flags.make
CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Appleman_and_Card_Game.dir\main.cpp.obj -c "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\main.cpp"

CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\main.cpp" > CMakeFiles\Appleman_and_Card_Game.dir\main.cpp.i

CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\main.cpp" -o CMakeFiles\Appleman_and_Card_Game.dir\main.cpp.s

# Object files for target Appleman_and_Card_Game
Appleman_and_Card_Game_OBJECTS = \
"CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.obj"

# External object files for target Appleman_and_Card_Game
Appleman_and_Card_Game_EXTERNAL_OBJECTS =

Appleman_and_Card_Game.exe: CMakeFiles/Appleman_and_Card_Game.dir/main.cpp.obj
Appleman_and_Card_Game.exe: CMakeFiles/Appleman_and_Card_Game.dir/build.make
Appleman_and_Card_Game.exe: CMakeFiles/Appleman_and_Card_Game.dir/linklibs.rsp
Appleman_and_Card_Game.exe: CMakeFiles/Appleman_and_Card_Game.dir/objects1.rsp
Appleman_and_Card_Game.exe: CMakeFiles/Appleman_and_Card_Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Appleman_and_Card_Game.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Appleman_and_Card_Game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Appleman_and_Card_Game.dir/build: Appleman_and_Card_Game.exe

.PHONY : CMakeFiles/Appleman_and_Card_Game.dir/build

CMakeFiles/Appleman_and_Card_Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Appleman_and_Card_Game.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Appleman_and_Card_Game.dir/clean

CMakeFiles/Appleman_and_Card_Game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\cmake-build-debug" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\cmake-build-debug" "C:\Users\Rocker\Desktop\C++\Coach Mohamed\Level2\2.2\Appleman and Card Game\cmake-build-debug\CMakeFiles\Appleman_and_Card_Game.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Appleman_and_Card_Game.dir/depend

