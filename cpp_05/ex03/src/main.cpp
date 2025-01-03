/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/23 15:16:15 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/11/13 10:10:05 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"
#include "../incl/AForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/Intern.hpp"

int main()
{
	Bureaucrat b1("Bureaucrat1", 1);
	Bureaucrat b2("Bureaucrat2", 50);
	Intern alex;
	AForm *ppf = NULL;
	AForm *scf = NULL;
	AForm *rrf = NULL;
	AForm *random = NULL;
	
    try
	{
        ppf = alex.makeForm("PresidentialPardon", "target1");
        scf = alex.makeForm("ShrubberyCreation", "target2");
        rrf = alex.makeForm("RobotomyRequest", "target3");
		if (ppf == NULL || scf == NULL || rrf == NULL)
		{
			std::cout << "One of the forms could not be created." << std::endl;
			return 1;
		}
        random = alex.makeForm("random", "target4");
		
		std::cout << *random << std::endl;

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << *ppf << std::endl;
        std::cout << *scf << std::endl;
        std::cout << *rrf << std::endl;

        b1.signForm(*ppf);
        b1.signForm(*scf);
        b1.signForm(*rrf);

        b1.executeForm(*ppf);
        b1.executeForm(*scf);
        b1.executeForm(*rrf);

        b2.signForm(*scf);
        b2.signForm(*rrf);
        b2.signForm(*rrf);

    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	delete ppf;
	delete scf;
	delete rrf;
	delete random;
    return 0;
}