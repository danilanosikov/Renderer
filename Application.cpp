#include "Application.h"

namespace Renderer 
{
	void Application::run()
	{
		while (!window.ShouldClose()) 
		{
			glfwPollEvents();
		}
	}
}