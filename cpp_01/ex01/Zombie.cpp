/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 15:59:00 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/21 13:34:17 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created\n";
}

Zombie::~Zombie()
{
	std::cout << this->name << " deleted\n";
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ...\n";
}