#pragma once
#include <iostream>

class Span
{
    private:
        unsigned int _n;
        unsigned int _size;
        int *_array;

    public:
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};