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
		AForm *ppf = new PresidentialPardonForm("target1");
		AForm *rrf = new RobotomyRequestForm("target2");
		AForm *scf = new ShrubberyCreationForm("target3");

		Bureaucrat b1("Bureaucrat 1", 1);
		Bureaucrat b2("Bureaucrat 2", 150);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		std::cout << *ppf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *scf << std::endl;

		b1.signForm(*ppf);
		b1.signForm(*scf);
		b1.signForm(*rrf);

		b1.executeForm(*ppf);
		b1.executeForm(*scf);
		b1.executeForm(*rrf);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	
	
}