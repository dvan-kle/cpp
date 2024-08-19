#include "../incl/iter.hpp"
#include <iostream>
#include <string>

void print(int const &i)
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

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    ::iter(arr, 5, print);
    std::cout << std::endl;
    ::iter(arr, 5, increment);
    ::iter(arr, 5, print);
    std::cout << std::endl;
    ::iter(arr, 5, decrement);
    ::iter(arr, 5, print);
    std::cout << std::endl;
    ::iter(arr, 5, square);
    ::iter(arr, 5, print);
    std::cout << std::endl;
    ::iter(arr, 5, cube);
    ::iter(arr, 5, print);
    std::cout << std::endl;
    return 0;
}