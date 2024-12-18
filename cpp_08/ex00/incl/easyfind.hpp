#pragma once

#include <iostream>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Value not found";
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "../src/easyfind.tpp"