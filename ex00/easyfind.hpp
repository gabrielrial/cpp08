// easyfind.hpp

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <stdexcept>

template <typename T>
void easyfind(T &arg, int i)
{
	std::cout << "Looking number: " << i << std::endl;
	typename T::const_iterator it = std::find(arg.begin(), arg.end(), i);

	if (it != arg.end())
		std::cout << "Number found" << std::endl;
	else
	{
		throw std::runtime_error("Number not found");
	}
}

#endif
