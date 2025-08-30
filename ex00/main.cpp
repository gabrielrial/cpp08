#include "easyfind.hpp"

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<char> container;

    container.push_back(1);
    container.push_back(2);
    container.push_back(3);

    easyfind(container, 2); // Encontrado
    easyfind(container, 5); // No encontrado

    return 0;
}

