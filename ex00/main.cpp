#include "easyfind.hpp"

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{

	std::vector<int> container;

	container.push_back(1);
	container.push_back(2);
	container.push_back(4);

	try
	{
		easyfind(container, 2);
		easyfind(container, 3);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
