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
CMAKE_SOURCE_DIR = /home/numanahmed/Desktop/os_semester4-main/code/file_decryption

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/numanahmed/Desktop/os_semester4-main/build/file_decryption

# Utility rule file for file_decryption_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/file_decryption_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/file_decryption_autogen.dir/progress.make

CMakeFiles/file_decryption_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/numanahmed/Desktop/os_semester4-main/build/file_decryption/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target file_decryption"
	/usr/bin/cmake -E cmake_autogen /home/numanahmed/Desktop/os_semester4-main/build/file_decryption/CMakeFiles/file_decryption_autogen.dir/AutogenInfo.json Debug

file_decryption_autogen: CMakeFiles/file_decryption_autogen
file_decryption_autogen: CMakeFiles/file_decryption_autogen.dir/build.make
.PHONY : file_decryption_autogen

# Rule to build all files generated by this target.
CMakeFiles/file_decryption_autogen.dir/build: file_decryption_autogen
.PHONY : CMakeFiles/file_decryption_autogen.dir/build

CMakeFiles/file_decryption_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/file_decryption_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/file_decryption_autogen.dir/clean

CMakeFiles/file_decryption_autogen.dir/depend:
	cd /home/numanahmed/Desktop/os_semester4-main/build/file_decryption && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/numanahmed/Desktop/os_semester4-main/code/file_decryption /home/numanahmed/Desktop/os_semester4-main/code/file_decryption /home/numanahmed/Desktop/os_semester4-main/build/file_decryption /home/numanahmed/Desktop/os_semester4-main/build/file_decryption /home/numanahmed/Desktop/os_semester4-main/build/file_decryption/CMakeFiles/file_decryption_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/file_decryption_autogen.dir/depend

