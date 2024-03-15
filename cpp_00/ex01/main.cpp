/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 13:14:16 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/15 16:38:44 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>


int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
	{
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.displayContacts();
        else if (command == "EXIT")
		{
            std::cout << "Exiting Phonebook\n";
            break;
		}
        else
        	std::cout << "Invalid command.\n";
    }

    return 0;
}