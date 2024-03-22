/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:58:53 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/22 14:20:50 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "A ScavTrap called: " << Name << " has been constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "A ScavTrap called: " << Name << " has been copied" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "A ScavTrap called: " << Name << " has been destructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "A ScavTrap has been assigned" << std::endl;
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in gatekeeper mode" << std::endl;
}