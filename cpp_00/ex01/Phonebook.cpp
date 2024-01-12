/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:36:26 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 15:47:32 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : numContacts(0) {}

void PhoneBook::addContact() {
	if (numContacts == 8) {
        for (int i = 0; i < 7; ++i)
                contacts[i] = contacts[i + 1];
            --numContacts;
    }
	
    Contact newContact;
	std::cout << "Enter first name: ";
	std::cin.ignore();
	std::getline(std::cin, newContact.first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, newContact.last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, newContact.nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, newContact.phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, newContact.darkest_secret);
	
	contacts[numContacts++] = newContact;
	std::cout << "Contact added!" << std::endl;
}

void PhoneBook::displayContacts() {
    std::cout 	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < numContacts; ++i)
	{
		std::cout 	<< std::setw(10) << i  << "|"
					<< std::setw(10) << subString(contacts[i].first_name) << "|"
					<< std::setw(10) << subString(contacts[i].last_name) << "|"
					<< std::setw(10) << subString(contacts[i].nickname) << std::endl;
	}

	int index;
	std::cout << "Enter index of contact to display: ";
	std::cin >> index;
	if (index >= 0 && index < numContacts)
		displayContact(index);
	else
		std::cout << "Invalid index!" << std::endl;
}

void PhoneBook::displayContact(int index) {
	Contact selContact = contacts[index];
    std::cout << "First name: " << selContact.first_name << std::endl;
	std::cout << "Last name: " << selContact.last_name << std::endl;
	std::cout << "Nickname: " << selContact.nickname << std::endl;
	std::cout << "Phone number: " << selContact.phone_number << std::endl;
	std::cout << "Darkest secret: " << selContact.darkest_secret << std::endl;

}

std::string PhoneBook::subString(std::string str) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}