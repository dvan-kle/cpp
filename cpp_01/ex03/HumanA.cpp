/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:28:32 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/17 19:51:39 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon ): name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}