/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 14:40:20 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/06/12 21:55:11 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "\t\tFragTrap named: " << Name << " has been constructed" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "\t\tFragTrap named: " << Name << " has been copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "\t\tFragTrap has been assigned" << std::endl;
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "\t\tFragTrap named: " << Name << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "\t\tFragTrap named: " << Name << " gives a High Five!!" << std::endl;
}