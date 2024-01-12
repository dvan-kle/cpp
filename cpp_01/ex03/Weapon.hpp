/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:09:54 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 17:49:53 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon{
	private:
		std::string type;
	public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType();
	void setType(std::string newType);
};

#endif