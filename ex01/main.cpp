#include "Span.hpp"

int main()
{
    Span sp(9);

    try
    {
        sp.addNumber(-1);
        sp.addNumber(7);
        sp.addNumber(-100);
        sp.addNumber(-2);
        sp.addNumber(-6);

        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        sp.addNumber(v.begin(), v.end());

        sp.addNumber(42);
    //    std::cout << "Span should be full" << std::endl;
    //    sp.addNumber(-7);
    //    std::cout << "We should not see this" << std::endl;
    //    sp.addNumber(-7);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    {
        std::cout << "=============================================" << std::endl;
        Span sp2(3);
        sp2.addNumber(4);
        try
        {
            std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
            std::cout << "Longest:  " << sp2.longestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        }
        {
        std::cout << "=============================================" << std::endl;
        Span sp2(0);
        try
        {
            sp2.addNumber(4);
            std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
            std::cout << "Longest:  " << sp2.longestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}