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
CMAKE_SOURCE_DIR = /home/numanahmed/Desktop/os_semester4-main/code/text_encryption

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/numanahmed/Desktop/os_semester4-main/build/text_encryption

# Include any dependencies generated for this target.
include CMakeFiles/text_encryption.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/text_encryption.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/text_encryption.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/text_encryption.dir/flags.make

CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o: CMakeFiles/text_encryption.dir/flags.make
CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o: text_encryption_autogen/mocs_compilation.cpp
CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o: CMakeFiles/text_encryption.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/numanahmed/Desktop/os_semester4-main/build/text_encryption/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o -MF CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o -c /home/numanahmed/Desktop/os_semester4-main/build/text_encryption/text_encryption_autogen/mocs_compilation.cpp

CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/numanahmed/Desktop/os_semester4-main/build/text_encryption/text_encryption_autogen/mocs_compilation.cpp > CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.i

CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/numanahmed/Desktop/os_semester4-main/build/text_encryption/text_encryption_autogen/mocs_compilation.cpp -o CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.s

CMakeFiles/text_encryption.dir/main.cpp.o: CMakeFiles/text_encryption.dir/flags.make
CMakeFiles/text_encryption.dir/main.cpp.o: /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/main.cpp
CMakeFiles/text_encryption.dir/main.cpp.o: CMakeFiles/text_encryption.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/numanahmed/Desktop/os_semester4-main/build/text_encryption/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/text_encryption.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/text_encryption.dir/main.cpp.o -MF CMakeFiles/text_encryption.dir/main.cpp.o.d -o CMakeFiles/text_encryption.dir/main.cpp.o -c /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/main.cpp

CMakeFiles/text_encryption.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/text_encryption.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/main.cpp > CMakeFiles/text_encryption.dir/main.cpp.i

CMakeFiles/text_encryption.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/text_encryption.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/main.cpp -o CMakeFiles/text_encryption.dir/main.cpp.s

CMakeFiles/text_encryption.dir/mainwindow.cpp.o: CMakeFiles/text_encryption.dir/flags.make
CMakeFiles/text_encryption.dir/mainwindow.cpp.o: /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/mainwindow.cpp
CMakeFiles/text_encryption.dir/mainwindow.cpp.o: CMakeFiles/text_encryption.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/numanahmed/Desktop/os_semester4-main/build/text_encryption/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/text_encryption.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/text_encryption.dir/mainwindow.cpp.o -MF CMakeFiles/text_encryption.dir/mainwindow.cpp.o.d -o CMakeFiles/text_encryption.dir/mainwindow.cpp.o -c /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/mainwindow.cpp

CMakeFiles/text_encryption.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/text_encryption.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/mainwindow.cpp > CMakeFiles/text_encryption.dir/mainwindow.cpp.i

CMakeFiles/text_encryption.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/text_encryption.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/numanahmed/Desktop/os_semester4-main/code/text_encryption/mainwindow.cpp -o CMakeFiles/text_encryption.dir/mainwindow.cpp.s

CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o: CMakeFiles/text_encryption.dir/flags.make
CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o: /home/numanahmed/Desktop/os_semester4-main/code/task.cpp
CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o: CMakeFiles/text_encryption.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/numanahmed/Desktop/os_semester4-main/build/text_encryption/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o -MF CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o.d -o CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o -c /home/numanahmed/Desktop/os_semester4-main/code/task.cpp

CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/numanahmed/Desktop/os_semester4-main/code/task.cpp > CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.i

CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/numanahmed/Desktop/os_semester4-main/code/task.cpp -o CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.s

# Object files for target text_encryption
text_encryption_OBJECTS = \
"CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/text_encryption.dir/main.cpp.o" \
"CMakeFiles/text_encryption.dir/mainwindow.cpp.o" \
"CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o"

# External object files for target text_encryption
text_encryption_EXTERNAL_OBJECTS =

text_encryption: CMakeFiles/text_encryption.dir/text_encryption_autogen/mocs_compilation.cpp.o
text_encryption: CMakeFiles/text_encryption.dir/main.cpp.o
text_encryption: CMakeFiles/text_encryption.dir/mainwindow.cpp.o
text_encryption: CMakeFiles/text_encryption.dir/home/numanahmed/Desktop/os_semester4-main/code/task.cpp.o
text_encryption: CMakeFiles/text_encryption.dir/build.make
text_encryption: /home/numanahmed/Qt5.12.12/5.12.12/gcc_64/lib/libQt5Widgets.so.5.12.12
text_encryption: /home/numanahmed/Qt5.12.12/5.12.12/gcc_64/lib/libQt5Gui.so.5.12.12
text_encryption: /home/numanahmed/Qt5.12.12/5.12.12/gcc_64/lib/libQt5Core.so.5.12.12
text_encryption: CMakeFiles/text_encryption.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/numanahmed/Desktop/os_semester4-main/build/text_encryption/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable text_encryption"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/text_encryption.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/text_encryption.dir/build: text_encryption
.PHONY : CMakeFiles/text_encryption.dir/build

CMakeFiles/text_encryption.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/text_encryption.dir/cmake_clean.cmake
.PHONY : CMakeFiles/text_encryption.dir/clean

CMakeFiles/text_encryption.dir/depend:
	cd /home/numanahmed/Desktop/os_semester4-main/build/text_encryption && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/numanahmed/Desktop/os_semester4-main/code/text_encryption /home/numanahmed/Desktop/os_semester4-main/code/text_encryption /home/numanahmed/Desktop/os_semester4-main/build/text_encryption /home/numanahmed/Desktop/os_semester4-main/build/text_encryption /home/numanahmed/Desktop/os_semester4-main/build/text_encryption/CMakeFiles/text_encryption.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/text_encryption.dir/depend
