/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 16:09:02 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/21 12:41:29 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Zombie1");
	zombie->announce();
	delete zombie;
	randomChump("Zombie2");
	return 0;
}                                                                                        