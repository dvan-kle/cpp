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
#include "../incl/Intern.hpp"

int main()
{
    try
	{
        Bureaucrat b1("Bureaucrat1", 1);
        Bureaucrat b2("Bureaucrat2", 50);
        Intern alex;

        AForm *ppf = alex.makeForm("PresidentialPardon", "target1");
        AForm *scf = alex.makeForm("ShrubberyCreation", "target2");
        AForm *rrf = alex.makeForm("RobotomyRequest", "target3");
		if (ppf == NULL || scf == NULL || rrf == NULL)
		{
			std::cout << "One of the forms could not be created." << std::endl;
			return 1;
		}
        //Aform *random = alex.makeForm("random", "target4");


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

        delete ppf;
        delete scf;
        delete rrf;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}