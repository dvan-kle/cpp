/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:36:07 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/22 13:37:39 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Jannes");

	claptrap.attack("Tijmen");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	return (0);
}