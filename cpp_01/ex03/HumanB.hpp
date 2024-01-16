/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:56:13 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/16 13:33:40 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanB( std::string name );
		~HumanB();
		void attack();
		void setWeapon( Weapon& weapon );
};
#endif