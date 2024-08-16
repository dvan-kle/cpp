/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/23 15:16:15 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/08/16 16:53:35 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"
#include "../incl/Form.hpp"

int main(void)
{
	// Bureaucrat b1("B1", 1);
	// Bureaucrat b2("B2", 150);
	
	// std::cout << b1 << std::endl;
	// b1.incrementGrade();
	// b1.decrementGrade();
	// std::cout << b1 << std::endl;
	
	// std::cout << b2 << std::endl;
	// b2.decrementGrade();
	// b2.incrementGrade();
	// std::cout << b2 << std::endl;

	Form f1("F1", 149, 1);

	std::cout << f1 << std::endl;
	
}