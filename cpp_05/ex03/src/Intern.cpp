#include "../incl/Intern.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string levels[3] = {"RobotomyRequest", "ShrubberyCreation", "PresidentialPardon"};
	const AForm* forms[3] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (levels[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (AForm*)forms[i];
        }
    }
    std::cout << "Intern cannot create " << formName << std::endl;
    return NULL;
}