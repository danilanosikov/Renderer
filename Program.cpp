#include "Application.h"

#include <iostream>
#include <cstdlib>
#include <stdexcept>




int main()
{
	Renderer::Application application_instance{};

	try 
	{
		application_instance.run();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}