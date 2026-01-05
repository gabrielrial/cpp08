#include "Span.hpp"

Span::Span(unsigned int n)
{
	array = new int[n];

	_size = n;
	_current = 0;
}

Span::Span() {}

void Span::addNumber(int nb)
{
	if (_current > _size)
		throw FullContainer();

	array[_current] = nb;
	_current++;
}

int Span::shortestSpan()
{
	if (_current < 2)
		throw NotEnoughNumbers();
	int *cpy = new int(_current);

	for (unsigned int i = 0; i < _current; i++)
		cpy[i] = array[i];

	std::sort(cpy, cpy + _current);

	int nb;
	int shortest = -1;

	for (unsigned int i = 0; i < _current - 1; i++)
	{
		nb = cpy[i];
		if (cpy[i + 1] - nb < shortest || shortest == -1)
			shortest = cpy[i + 1] - nb;
	}
	delete cpy;
	return shortest;
}

int Span::longestSpan()
{
	if (_current < 2)
		throw NotEnoughNumbers();
	int *cpy = new int(_current);

	for (unsigned int i = 0; i < _current; i++)
		cpy[i] = array[i];

	std::sort(cpy, cpy + _current);

	int longest = cpy[_current - 1] - cpy[0];
	delete cpy;
	return longest;
}

const char *Span::FullContainer::what() const throw()
{
	return ("Container is full");
}

const char *Span::NotEnoughNumbers::what() const throw()
{
	return ("Not enough numbers in container");
}
