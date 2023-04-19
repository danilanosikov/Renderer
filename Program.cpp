#include <iostream>
#include "vulkan\vulkan.h"

int main()
{
	VkInstanceCreateInfo info = {};
	VkInstance instance;

	if (vkCreateInstance(&info, nullptr, &instance) == VK_SUCCESS) 
	{
		std::cout << "Initialised!" << '\n';
	}
	else 
	{
		std::cout << "You Succc!" << '\n';
	}
	system("pause");
	return 0;
}