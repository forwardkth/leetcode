# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/env

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/env

# Include any dependencies generated for this target.
include extern/google-test/googlemock/CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include extern/google-test/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include extern/google-test/googlemock/CMakeFiles/gmock.dir/flags.make

extern/google-test/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: extern/google-test/googlemock/CMakeFiles/gmock.dir/flags.make
extern/google-test/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: extern/google-test/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/env/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object extern/google-test/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o"
	cd /root/env/extern/google-test/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/src/gmock-all.cc.o -c /root/env/extern/google-test/googlemock/src/gmock-all.cc

extern/google-test/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /root/env/extern/google-test/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/env/extern/google-test/googlemock/src/gmock-all.cc > CMakeFiles/gmock.dir/src/gmock-all.cc.i

extern/google-test/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /root/env/extern/google-test/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/env/extern/google-test/googlemock/src/gmock-all.cc -o CMakeFiles/gmock.dir/src/gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.o"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

extern/google-test/googlemock/libgmock.a: extern/google-test/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
extern/google-test/googlemock/libgmock.a: extern/google-test/googlemock/CMakeFiles/gmock.dir/build.make
extern/google-test/googlemock/libgmock.a: extern/google-test/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/env/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgmock.a"
	cd /root/env/extern/google-test/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean_target.cmake
	cd /root/env/extern/google-test/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
extern/google-test/googlemock/CMakeFiles/gmock.dir/build: extern/google-test/googlemock/libgmock.a

.PHONY : extern/google-test/googlemock/CMakeFiles/gmock.dir/build

extern/google-test/googlemock/CMakeFiles/gmock.dir/clean:
	cd /root/env/extern/google-test/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean.cmake
.PHONY : extern/google-test/googlemock/CMakeFiles/gmock.dir/clean

extern/google-test/googlemock/CMakeFiles/gmock.dir/depend:
	cd /root/env && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/env /root/env/extern/google-test/googlemock /root/env /root/env/extern/google-test/googlemock /root/env/extern/google-test/googlemock/CMakeFiles/gmock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : extern/google-test/googlemock/CMakeFiles/gmock.dir/depend

