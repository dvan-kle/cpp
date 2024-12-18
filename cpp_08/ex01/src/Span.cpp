#include "../incl/Span.hpp"
#include <climits>
#include <algorithm>

Span::Span(unsigned int n) : _n(n), _size(0)
{
	_vec.reserve(n);
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	_n = other._n;
	_size = other._size;
	_vec = other._vec;
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_size >= _n)
		throw Span::SpanFullException();
	_vec.push_back(n);
	_size++;
}

void Span::addNumberRange(int range)
{
	srand(time(NULL));
	if (_size + range > _n)
		throw Span::SpanFullException();
	for (int i = 0; i < range; i++)
	{
		addNumber(rand());
	}
}

int Span::shortestSpan()
{
	if (_size <= 1)
		throw Span::SpanSizeException();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	int min = INT_MAX;
	for (unsigned int i = 1; i < _size; i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int Span::longestSpan()
{
	if (_size <= 1)
		throw Span::SpanSizeException();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[_size - 1] - tmp[0]);
}


