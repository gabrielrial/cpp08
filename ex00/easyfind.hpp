// easyfind.hpp

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename A, typename B>
struct is_same {
    static const int value = 0;
};
template <typename A>
struct is_same<A, A> {
    static const int value = 1;
};

template <typename T>
void check_type(const T &arg) {
    if(!is_same<typename T::value_type, int>::value ? 1 : 0)
        std::cout << "worng" << std::endl;
    (void)arg; 
}

template <typename T>
void easyfind(T &arg, int i) {
    check_type(arg);

    typename T::const_iterator it = std::find(arg.begin(), arg.end(), i);

    if (it != arg.end())
        std::cout << "Encontrado: " << *it << std::endl;
    else
        std::cout << "No encontrado" << std::endl;
}

#endif
