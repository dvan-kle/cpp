/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 16:55:36 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 16:57:39 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* zombies = zombieHorde(5, "Jannes");
	for (int i = 0; i < 5; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return 0;
}