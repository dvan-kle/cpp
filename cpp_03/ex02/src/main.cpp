/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:36:07 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/22 15:58:08 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"
#include "../incl/ScavTrap.hpp"
#include "../incl/FragTrap.hpp"

int	main()
{
	ScavTrap scav("john");
	ClapTrap clap("dirk");
	FragTrap frag("tijmen");

	clap.attack("bob");
	scav.guardGate();
	scav.guardGate();
	frag.attack("peter");
	frag.highFivesGuys();
	return (0);
}