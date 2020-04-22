#ifndef QUEUEFAMILYINDICES_HPP
#define QUEUEFAMILYINDICES_HPP

#include <optional>

using namespace std;

struct QueueFamilyIndices
{
	std::optional<uint32_t> graphicsFamily;
	std::optional<uint32_t> presentFamily;
	std::optional<uint32_t> transferFamily;

	bool isComplete();
};

#endif