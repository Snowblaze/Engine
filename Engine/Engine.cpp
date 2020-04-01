﻿// Engine.cpp : Defines the entry point for the application.
//
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

#include "Engine.h"
#include "EngineConfig.h"
#include <chrono>

using namespace std;
using namespace chrono;

const microseconds MS_PER_FRAME(16000);
auto start = duration_cast<microseconds> (std::chrono::high_resolution_clock::now().time_since_epoch());

void processInput()
{

}

void update()
{

}

void render()
{

}

microseconds getTimeSinceStart()
{
	auto current = duration_cast<microseconds> (std::chrono::high_resolution_clock::now().time_since_epoch());
	return current - start;
}

int main()
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(800, 600, "Engine window", nullptr, nullptr);

	uint32_t extensionCount = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

	cout << extensionCount << " extensions supported" << endl;

	glm::mat4 matrix;
	glm::vec4 vec;
	auto test = matrix * vec;

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(window);

	glfwTerminate();

	return 0;



	microseconds lag(0);
	microseconds previous = getTimeSinceStart();
	int frame = 0;
	while (true)
	{
		microseconds current = getTimeSinceStart();
		microseconds elapsed = current - previous;
		previous = current;
		lag += elapsed;


		processInput();

		while (lag >= MS_PER_FRAME)
		{
			frame++;
			cout << current.count() << " " << frame << endl;
			update();
			lag -= MS_PER_FRAME;
		}

		render();
	}
	return 0;
}
