﻿# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Project\C++\C-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Project\C++\C-\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\C_.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles\C_.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\C_.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\C_.dir\flags.make

CMakeFiles\C_.dir\pratice.cpp.obj: CMakeFiles\C_.dir\flags.make
CMakeFiles\C_.dir\pratice.cpp.obj: ..\pratice.cpp
CMakeFiles\C_.dir\pratice.cpp.obj: CMakeFiles\C_.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\C++\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C_.dir/pratice.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\C_.dir\pratice.cpp.obj.d --working-dir=D:\Project\C++\C-\cmake-build-debug --filter-prefix="Note: including file: " -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\C_.dir\pratice.cpp.obj /FdCMakeFiles\C_.dir\ /FS -c D:\Project\C++\C-\pratice.cpp
<<

CMakeFiles\C_.dir\pratice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C_.dir/pratice.cpp.i"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx86\x86\cl.exe > CMakeFiles\C_.dir\pratice.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\C++\C-\pratice.cpp
<<

CMakeFiles\C_.dir\pratice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C_.dir/pratice.cpp.s"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\C_.dir\pratice.cpp.s /c D:\Project\C++\C-\pratice.cpp
<<

# Object files for target C_
C__OBJECTS = \
"CMakeFiles\C_.dir\pratice.cpp.obj"

# External object files for target C_
C__EXTERNAL_OBJECTS =

C_.exe: CMakeFiles\C_.dir\pratice.cpp.obj
C_.exe: CMakeFiles\C_.dir\build.make
C_.exe: CMakeFiles\C_.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Project\C++\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C_.exe"
	"D:\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\C_.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1436~1.325\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\C_.dir\objects1.rsp @<<
 /out:C_.exe /implib:C_.lib /pdb:D:\Project\C++\C-\cmake-build-debug\C_.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\C_.dir\build: C_.exe
.PHONY : CMakeFiles\C_.dir\build

CMakeFiles\C_.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C_.dir\cmake_clean.cmake
.PHONY : CMakeFiles\C_.dir\clean

CMakeFiles\C_.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Project\C++\C- D:\Project\C++\C- D:\Project\C++\C-\cmake-build-debug D:\Project\C++\C-\cmake-build-debug D:\Project\C++\C-\cmake-build-debug\CMakeFiles\C_.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\C_.dir\depend

