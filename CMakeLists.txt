# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.16)

project ("Engine" VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(Engine/EngineConfig.h.in EngineConfig.h)

# Include sub-projects.
add_subdirectory ("Engine")

target_include_directories("Engine" PUBLIC ${Engine_BINARY_DIR})

