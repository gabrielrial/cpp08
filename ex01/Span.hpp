#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class Span
{
public:
    Span();
    Span(unsigned int n);

    Span(Span &other);

    void addNumber(int nb);
    int shortestSpan();
    int longestSpan();

private:
    int *array;
    unsigned int _size;
    unsigned int _current;

    class FullContainer : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class NotEnoughNumbers : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif