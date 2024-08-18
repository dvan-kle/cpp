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
#include "../incl/AForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		AForm *f1 = new PresidentialPardonForm("target1");
		AForm *f2 = new RobotomyRequestForm("target2");
		AForm *f3 = new ShrubberyCreationForm("target3");

		Bureaucrat b1("Bureaucrat 1", 1);
		Bureaucrat b2("Bureaucrat 2", 150);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		std::cout << *f1 << std::endl;
		std::cout << *f2 << std::endl;
		std::cout << *f3 << std::endl;

		b1.signForm(*f1);
		b1.signForm(*f2);
		b1.signForm(*f3);

		b1.executeForm(*f1);
		b1.executeForm(*f2);
		b1.executeForm(*f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}