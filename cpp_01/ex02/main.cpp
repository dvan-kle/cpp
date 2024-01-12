/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:00:14 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/12 17:08:18 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string String = "HI THIS IS BRAIN";
	std::string *StringPtr = &String;
	std::string &StringRef = String;

	std::cout << "Address from original: " << &String << std::endl;
	std::cout << "Address from pointer: " << StringPtr << std::endl;
	std::cout << "Address from reference: " << &StringRef << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Value from original: " << String << std::endl;
	std::cout << "Value from pointer: " << *StringPtr << std::endl;
	std::cout << "Value from reference: " << StringRef << std::endl;
}