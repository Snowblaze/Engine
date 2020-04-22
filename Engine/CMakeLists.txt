# CMakeList.txt : CMake project for Engine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.16)

# Add source to this project's executable.
add_executable (Engine "Main.cpp" "Renderer/Renderer.cpp" "Renderer/Renderer.hpp" "Game.hpp" "Game.cpp" "aabb.hpp" "Renderer/Vertex.hpp" "Renderer/QueueFamilyIndices.cpp" "Renderer/QueueFamilyIndices.hpp" "Renderer/Vertex.cpp")

# TODO: Add tests and install targets if needed.
