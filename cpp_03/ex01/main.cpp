/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:36:07 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/22 14:19:10 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Jannes");
	ScavTrap scavtrap("Henk");

	claptrap.attack("Tijmen");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	scavtrap.attack("Tijmen");
	scavtrap.guardGate();
	return (0);
}