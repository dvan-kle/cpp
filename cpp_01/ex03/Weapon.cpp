/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:21:42 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/16 14:18:49 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType){
	this->type = weaponType;
};

Weapon::~Weapon(){

};

const std::string& Weapon::getType(){
		return (this->type);
	};
void Weapon::setType(std::string newType){
		this->type = newType;
	};