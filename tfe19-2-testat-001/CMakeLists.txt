cmake_minimum_required (VERSION 3.10.2)

# Set the project name to your project name, template isn't very descriptive
project (TFE19-2)


# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Some useful default settings
include(cmake/StandardProjectSettings.cmake)
# Prevent people from messing with stuff
include(cmake/PreventInSourceBuilds.cmake)

# allow for static analysis options
include(cmake/StaticAnalyzers.cmake)

# Thirdparty stuff
add_subdirectory(contrib)

# Templates
add_subdirectory(templates)

# Exercises & solutions
add_subdirectory(exercise-001)
add_subdirectory(testat-001)
