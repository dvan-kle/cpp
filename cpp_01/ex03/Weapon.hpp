/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:09:54 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/04/30 15:08:55 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(const std::string& weaponType);
		~Weapon();
		const std::string& getType();
		void setType(std::string newType);
};

#endif