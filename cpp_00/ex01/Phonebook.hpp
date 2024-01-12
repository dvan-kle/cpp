/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:23:03 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 15:47:28 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int numContacts;
	public:
		PhoneBook();
		void addContact();
		void displayContacts();
		void displayContact(int index);
		std::string subString(std::string str);	
};

#endif