/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:57:04 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 18:09:16 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB( std::string name ): name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->name << " has no weapon" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
	
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = weapon;
}