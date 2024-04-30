/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:36:26 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/04/30 13:09:09 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
	numContacts = 0;
}

void PhoneBook::addContact()
{
    Contact newContact;
	
	if (numContacts == 8)
	{
        for (int i = 0; i < 7; ++i)
                contacts[i] = contacts[i + 1];
        --numContacts;
    }
	
	std::cout << "Enter first name: ";
	std::cin.ignore();
	newContact.set_first_name();
	std::cout << "Enter last name: ";
	newContact.set_last_name();
	std::cout << "Enter nickname: ";
	newContact.set_nickname();
	std::cout << "Enter phone number: ";
	newContact.set_phone_number();
	std::cout << "Enter darkest secret: ";
	newContact.set_darkest_secret();
	
	contacts[numContacts++] = newContact;
	std::cout << "Contact added!" << std::endl;
}

void PhoneBook::displayContacts()
{
    std::cout 	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < numContacts; ++i)
	{
		std::cout 	<< std::setw(10) << i  << "|"
					<< std::setw(10) << subString(contacts[i].get_first_name()) << "|"
					<< std::setw(10) << subString(contacts[i].get_last_name()) << "|"
					<< std::setw(10) << subString(contacts[i].get_nickname()) << std::endl;
	}
	
	int index;

	std::cout << "Enter index of contact to display: ";
	std::cin >> index;
	if (index >= 0 && index < numContacts)
		displayContact(index);
	else
		std::cout << "Invalid index!" << std::endl;
}

void PhoneBook::displayContact(int index)
{
	Contact selContact = contacts[index];
	
    std::cout << "First name: " << selContact.get_first_name() << std::endl;
	std::cout << "Last name: " << selContact.get_last_name() << std::endl;
	std::cout << "Nickname: " << selContact.get_nickname() << std::endl;
	std::cout << "Phone number: " << selContact.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << selContact.get_darkest_secret() << std::endl;

}

std::string PhoneBook::subString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
