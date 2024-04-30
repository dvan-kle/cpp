/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/30 12:32:28 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/04/30 13:08:02 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::set_first_name()
{
	std::getline(std::cin, first_name);
}
void Contact::set_last_name()
{
	std::getline(std::cin, last_name);
}

void Contact::set_nickname()
{
	std::getline(std::cin, nickname);
}

void Contact::set_phone_number()
{
	std::getline(std::cin, phone_number);
}

void Contact::set_darkest_secret()
{
	std::getline(std::cin, darkest_secret);
}

std::string Contact::get_first_name()
{
	return(first_name);
}
std::string Contact::get_last_name()
{
	return(last_name);
}

std::string Contact::get_nickname()
{
	return(nickname);
}

std::string Contact::get_phone_number()
{
	return(phone_number);
}

std::string Contact::get_darkest_secret()
{
	return(darkest_secret);
}