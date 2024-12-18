#pragma once
#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int _n;
        unsigned int _size;
        std::vector<int> _vec;

    public:
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int n);
		void addNumberRange(int range);
        int shortestSpan();
        int longestSpan();

		class SpanSizeException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Span size is too small";
				}
		};

		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Span is full";
				}
		};
};
