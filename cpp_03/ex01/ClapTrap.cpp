#include "ClapTrap.hpp"

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
	if (this != &other)
	{
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named: " << Name << " has been destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->HitPoints > 0 || this->EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " is dead and cannot attack!" << std::endl;
		return ;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints < 1 || this->EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
		return ;
	}
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
	if (this->HitPoints < 1)
		std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints < 1 || this->EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << this->Name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	this->HitPoints += amount;
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points!" << std::endl;
}

