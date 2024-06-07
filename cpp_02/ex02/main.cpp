/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/13 16:18:06 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/06/07 18:13:42 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

int main( void )
{
	
	{
		std::cout << "Subject tests: " << std::endl << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Comparison operators: " << std::endl << std::endl;
		Fixed a(10);
		Fixed b(20);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a > b: " << (a > b) << std::endl;
		std::cout << "a < b: " << (a < b) << std::endl;
		std::cout << "a >= b: " << (a >= b) << std::endl;
		std::cout << "a <= b: " << (a <= b) << std::endl;
		std::cout << "a == b: " << (a == b) << std::endl;
		std::cout << "a != b: " << (a != b) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Mathematical operators: " << std::endl << std::endl;
		Fixed a(10);
		Fixed b(20);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a + b: " << (a + b) << std::endl;
		std::cout << "a - b: " << (a - b) << std::endl;
		std::cout << "a * b: " << (a * b) << std::endl;
		std::cout << "a / b: " << (a / b) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Increment and decrement operators: " << std::endl << std::endl;
		Fixed a(10);
		Fixed b(20);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b--: " << b-- << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "--b: " << --b << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Min and Max functions: " << std::endl << std::endl;
		Fixed a(10);
		Fixed b(20);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "Fixed::min(a, b): " << Fixed::min(a, b) << std::endl;
		std::cout << "Fixed::max(a, b): " << Fixed::max(a, b) << std::endl;
		std::cout << "Fixed::min(b, a): " << Fixed::min(b, a) << std::endl;
		std::cout << "Fixed::max(b, a): " << Fixed::max(b, a) << std::endl;
		const Fixed c(30);
		const Fixed d(40);
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl;
		std::cout << "Fixed::min(c, d): " << Fixed::min(c, d) << std::endl;
		std::cout << "Fixed::max(c, d): " << Fixed::max(c, d) << std::endl;
		std::cout << "Fixed::min(d, c): " << Fixed::min(d, c) << std::endl;
		std::cout << "Fixed::max(d, c): " << Fixed::max(d, c) << std::endl;
		std::cout << std::endl;
	}
}