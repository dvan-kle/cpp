#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap named:" << Name << "has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named:" << Name << "has been destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hitpoints > 0 && this->Energy_points > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " is dead and cannot attack!" << std::endl;
		return ;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitpoints < 1 && this->Energy_points < 1)
	{
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
		return ;
	}
	this->Hitpoints -= amount;
	std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
	if (this->Hitpoints < 1)
		std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitpoints < 1 && this->Energy_points < 1)
	{
		std::cout << "ClapTrap " << this->Name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	this->Hitpoints += amount;
	this->Energy_points--;
	std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points!" << std::endl;
}