/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:21:42 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 17:50:03 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
};

Weapon::~Weapon(){

};

const std::string& Weapon::getType(){
		const std::string &type = this->type;
	};
void Weapon::setType(std::string newType){
		this->type = newType;
	};