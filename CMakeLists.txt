#[[
    # TODO: Remove instructions from this file and add to README.md instead

    # Commands for building
    $ cmake -S . -B build # generate build system files (defaults to Debug)
    $ cmake --build build --target ipc # build ipc target, defaults to 'all' target
    $ cmake --build build --target help # list targets

    # Release build
    $ cmake -DCMAKE_BUILD_TYPE=Release -S . -B Release
    $ cmake --build Release

    # Debug build
    $ cmake -DCMAKE_BUILD_TYPE=Debug -S . -B Debug
    $ cmake --build Debug

    # Generate ninja build files and build
    # ninja must be installed and in the path (easiest way is to put it in /usr/local/bin)
    $ cmake -DCMAKE_BUILD_TYPE=Release -S . -B Release -GNinja
    $ cmake --build Release

    # Parallel build
    cmake --build Release --target ros2_template_node --parallel 6

    # Use -DENV_TESTS=OFF to turn off the building of unit and component tests.
    # Running tests
    $ cmake --build Release --target test

    # Generate dependency graph
    $ cmake -S . -B gv --graphviz=gv/test.dot
    $ dot -Tpdf gv/test.dot -o gv/test.pdf
    
    TODO:
        ogridapi should be a project to set it's own version number as below.
            https://stackoverflow.com/a/45843676
]]

cmake_minimum_required(VERSION 3.21.1)

project(leetcode 
    VERSION 0.1 
    DESCRIPTION "leetcode Domain" 
    LANGUAGES CXX
)

option(ENV_TESTS "leetcode tests" ON)
if(ENV_TESTS)
    list(APPEND CMAKE_CTEST_ARGUMENTS "--output-junit;Testing/Temporary/LastTestJUnit.xml;")
    enable_testing()
    include(GoogleTest)

    # Do we want a 'test' directory on the top level? Could be useful for integration testing...
    # add_subdirectory(test)
endif()
add_subdirectory(extern)
add_subdirectory(first_round)
# add_subdirectory(second_round)
add_subdirectory(cv_src)
