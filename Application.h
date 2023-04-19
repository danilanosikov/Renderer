#pragma once

#include "../Window.h"

namespace Renderer 
{

	class Application {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		Window window{ WIDTH, HEIGHT, "Hello Vulkan With GLFW!" };
	};

}
