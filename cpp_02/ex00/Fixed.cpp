/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 17:25:58 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/18 17:26:18 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

