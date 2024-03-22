/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 17:25:58 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/22 13:12:27 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}

Fixed::Fixed(const int number)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = number << _fractional_bits;
}

Fixed::Fixed(const float number)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = (int)roundf(number * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_point / (1 << _fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->_fixed_point >> _fractional_bits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return (stream);
}

// Comparison operators

bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

// Mathematical operators

Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

// Increment and decrement operators

Fixed& Fixed::operator++()
{
	++this->_fixed_point;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	++this->_fixed_point;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	--this->_fixed_point;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	--this->_fixed_point;
	return (tmp);
}

// Min and Max functions

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a._fixed_point < b._fixed_point)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a._fixed_point > b._fixed_point)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._fixed_point < b._fixed_point)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._fixed_point > b._fixed_point)
		return (a);
	return (b);
}
