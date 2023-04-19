#pragma once

#include <glfw3.h>
#include <string>

namespace Renderer 
{
	
	class Window {

	public:
		Window(int width, int height, std::string title);
		~Window();

		bool ShouldClose();
	private:

		const int width;
		const int height;

		std::string title;

		GLFWwindow* window;


		void initializeWindow();

	};
}