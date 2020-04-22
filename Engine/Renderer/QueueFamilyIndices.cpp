#include "QueueFamilyIndices.hpp"

bool QueueFamilyIndices::isComplete()
{
    return graphicsFamily.has_value() && presentFamily.has_value() && transferFamily.has_value();
}