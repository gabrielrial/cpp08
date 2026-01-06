#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <iterator>
#include <vector>


class Span
{
public:
    Span();
    Span(unsigned int n);

    Span(Span &other);

    void addNumber(int nb);
    template <typename Iterator>
    void addNumber(Iterator begin, Iterator end);
    int shortestSpan();
    int longestSpan();

    void print();

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

template <typename Iterator>
void Span::addNumber(Iterator begin, Iterator end)
{
	if (_current >= _size)
		throw FullContainer();

	for (;begin != end; ++begin)
	{
		if (_current >= _size)
			throw FullContainer();
		array[_current] = *begin;
		_current++;
	}
}

#endif