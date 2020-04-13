# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.16)

project (Engine VERSION 0.1)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(Vulkan REQUIRED)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

configure_file(Engine/EngineConfig.h.in EngineConfig.h)

# Include sub-projects.
add_subdirectory(Engine)
add_subdirectory("external/glfw-3.3.2")

target_link_libraries(Engine glfw ${GLFW_LIBRARIES} Vulkan::Vulkan)

target_include_directories(Engine PUBLIC "external")
target_include_directories(Engine PUBLIC "external/glfw-3.3.2/include")
target_include_directories(Engine PUBLIC "external/glm")
target_include_directories(Engine PUBLIC "shaders")
target_include_directories(Engine PUBLIC ${Engine_BINARY_DIR})

file(COPY shaders DESTINATION ${CMAKE_BINARY_DIR})
file(COPY textures DESTINATION ${CMAKE_BINARY_DIR})