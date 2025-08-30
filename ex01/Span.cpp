#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{
	_ptr = new int[n];
	_current = 0;
}

Span::~Span()
{
	delete[] _ptr;
}

void Span::addNumber(int i)
{
	if (_current == _size)
		 throw SpanFullException();
	_ptr[_current] = i;
	_current++;
}

void Span::addNumber(int start, int end)
{
	for (int i = start; i <= end; i++)
		addNumber(i);
}

int Span::longestSpan()
{
	if (_current < 2 || _size < 1)
		throw NotEnoughNumbersException();

	int min = _ptr[0];
	int max = _ptr[0];

	for (unsigned int i = 0; i < _current; i++)
	{
		if (_ptr[i] > max)
			max = _ptr[i];
		if (_ptr[i] < min)
			min = _ptr[i];
	}
	return max - min;
}

int Span::shortestSpan()
{
	if (_current < 2 || _size < 1)
		throw NotEnoughNumbersException();

	int *tmp = new int[_current];
	for (unsigned i = 0; i < _current; i++)
		tmp[i] = _ptr[i];

	std::sort(tmp, tmp + _current);

	int minSpan = tmp[1] - tmp[0];
	for (unsigned i = 1; i < _current - 1; i++)
	{
		int span = tmp[i + 1] - tmp[i];
		if (span < minSpan)
			minSpan = span;
	}

	delete[] tmp;
	return minSpan;
}