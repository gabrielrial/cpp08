#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <limits.h>
#include <algorithm>
#include <exception>

class Span
{
public:
	Span(unsigned int n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int start, int end);
	void addNumber(int i);
	int shortestSpan();
	int longestSpan();

private:
	int *_ptr;
	unsigned _current;
	const unsigned _size;
};

class SpanFullException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Span is full, cannot add more numbers";
	}
};

class NotEnoughNumbersException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Not enough numbers to find a span";
	}
};

#endif