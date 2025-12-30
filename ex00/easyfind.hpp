// easyfind.hpp

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <stdexcept>

template <typename T>
void easyfind(T &arg, int i)
{
	typename T::const_iterator it = std::find(arg.begin(), arg.end(), i);

	if (it != arg.end())
		std::cout << "Found: " << *it << std::endl;
	else
	{
		throw std::runtime_error("");
	}
}

#endif
