/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/08 13:47:50 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/22 13:09:19 by dvan-kle      ########   odam.nl         */
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
		
	// Comparison operators
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	// Mathematical operators
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	
	// Increment and decrement operators
	Fixed&	operator++(void); // Prefix
	Fixed	operator++(int); // Postfix
	Fixed&	operator--(void); // Prefix
	Fixed	operator--(int); //Postfix

	// Min and Max functions
	static Fixed&		min(Fixed &a, Fixed &b);
	static Fixed&		max(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);
	
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);


#endif