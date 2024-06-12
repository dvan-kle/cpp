/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:36:07 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/06/12 21:55:51 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"
#include "../incl/ScavTrap.hpp"
#include "../incl/FragTrap.hpp"

int	main()
{
	ClapTrap clap("dirk");
	ScavTrap scav("john");
	FragTrap frag("tijmen");

	clap.attack("bob");
	scav.guardGate();
	scav.guardGate();
	frag.attack("peter");
	frag.highFivesGuys();
	return (0);
}