#include "../incl/iter.hpp"
#include <iostream>
#include <string>

void print_i(int const &i)
{
    std::cout << i << " ";
}

void increment(int &i)
{
    i++;
}

void decrement(int &i)
{
    i--;
}

void square(int &i)
{
    i *= i;
}

void cube(int &i)
{
    i *= i * i;
}

void lower(char &c)
{
	c = std::tolower(c);
}

void upper(char &c)
{
	c = std::toupper(c);
}

void print_c(char const &c)
{
    std::cout << c << " ";
}

int main()
{
	{
		int arr[] = {1, 2, 3, 4, 5};
		std::cout << std::endl << "Normal array:\t";
		::iter(arr, 5, print_i);

		std::cout << std::endl << "Increment:\t";
		::iter(arr, 5, increment);
		::iter(arr, 5, print_i);

		std::cout << std::endl << "Decrement:\t";
		::iter(arr, 5, decrement);
		::iter(arr, 5, print_i);

		std::cout << std::endl << "Square:\t\t";
		::iter(arr, 5, square);
		::iter(arr, 5, print_i);

		std::cout << std::endl << "Cube:\t\t";
		::iter(arr, 5, cube);
		::iter(arr, 5, print_i);
		std::cout << std::endl;
	}
	{
		char arr[] = {'a', 'b', 'c', 'd', 'e'};
		std::cout << std::endl << "Normal array:\t";
		::iter(arr, 5, print_c);

		std::cout << std::endl << "Upper:\t\t";
		::iter(arr, 5, upper);
		::iter(arr, 5, print_c);

		std::cout << std::endl << "Lower:\t\t";
		::iter(arr, 5, lower);
		::iter(arr, 5, print_c);
		std::cout << std::endl;
	}
    return 0;
}