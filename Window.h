#pragma once

#include <glfw3.h>
#include <string>

namespace Renderer 
{
	
	class Window {

	public:
		Window(int width, int height, std::string title);
		~Window();

		Window(const Window&) = delete; // Removes copy constructor from all windows;
		Window& operator=(const Window&) = delete; // removes assignment operation for all windows;

		// Whether window should be closed - controlled by glfw access to OS's api;
		bool ShouldClose();
	private:

		const int width;
		const int height;

		std::string title;

		GLFWwindow* window;

		void initialize();

	};
}