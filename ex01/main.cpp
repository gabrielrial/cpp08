#include "Span.hpp"

int main()
{
    Span sp(4);

    try
    {
        sp.addNumber(-1);
        sp.addNumber(7);
        sp.addNumber(-100);
        sp.addNumber(-2);
        sp.addNumber(-6);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest:  " << sp.longestSpan() << std::endl;
}