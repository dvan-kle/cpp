#include "../incl/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) : Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap named: " << Name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named: " << Name << " has been destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints < 1 || EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " is dead and cannot attack!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
		return ;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints < 1 || EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
		return ;
	}
	HitPoints -= amount;
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
	if (HitPoints < 1)
		std::cout << "ClapTrap " << Name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints < 1 || EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	HitPoints += amount;
	EnergyPoints--;
	std::cout << "ClapTrap " << Name << " is repaired for " << amount << " points!" << std::endl;
}