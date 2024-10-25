#include "../incl/Span.hpp"

Span::Span(unsigned int n) : _n(n), _size(0)
{
    _array = new int[n];
}   

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    _n = other._n;
    _size = other._size;
    _array = new int[_n];
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = other._array[i];
    return *this;
}

Span::~Span()
{
    delete[] _array;
}

void Span::addNumber(int n)
{
    if (_size >= _n)
        throw std::exception();
    _array[_size++] = n;
}

int Span::shortestSpan()
{
    if (_size <= 1)
        throw std::exception();
    int min = INT_MAX;
    for (unsigned int i = 0; i < _size; i++)
    {
        for (unsigned int j = i + 1; j < _size; j++)
        {
            int diff = _array[i] - _array[j];
            if (diff < 0)
                diff = -diff;
            if (diff < min)
                min = diff;
        }
    }
    return min;
}

int Span::longestSpan()
{
    if (_size <= 1)
        throw std::exception();
    int min = INT_MAX;
    int max = INT_MIN;
    for (unsigned int i = 0; i < _size; i++)
    {
        if (_array[i] < min)
            min = _array[i];
        if (_array[i] > max)
            max = _array[i];
    }
    return max - min;
}