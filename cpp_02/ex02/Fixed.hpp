/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/08 13:47:50 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/14 14:03:10 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed &other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
};

bool operator>(const Fixed& a, const Fixed& b);
bool operator<(const Fixed& a, const Fixed& b);
bool operator>=(const Fixed& a, const Fixed& b);
bool operator<=(const Fixed& a, const Fixed& b);
bool operator==(const Fixed& a, const Fixed& b);
bool operator!=(const Fixed& a, const Fixed& b);

float operator+(const Fixed& a, const Fixed& b);

std::ostream& operator+(std::ostream& stream, const Fixed& other);
std::ostream& operator-(std::ostream& stream, const Fixed& other);
std::ostream& operator*(std::ostream& stream, const Fixed& other);
std::ostream& operator/(std::ostream& stream, const Fixed& other);

Fixed operator++();
Fixed operator--();
Fixed operator++(int);
Fixed operator--(int);



#endif