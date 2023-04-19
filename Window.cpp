#include "Window.h"


namespace Renderer
{
	Window::Window(int w, int h, std::string t) : width{ w }, height{ h }, title{ t }
	{
		initialize();
	}

	Window::~Window()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void Window::initialize() 
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

		window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);

	}

	bool Window::ShouldClose() { return glfwWindowShouldClose(window); };
}