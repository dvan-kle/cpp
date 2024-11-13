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

AForm* Intern::PresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::RobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::ShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return "Form not found.";
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string levels[] = {"RobotomyRequest", "ShrubberyCreation", "PresidentialPardon"};
	AForm* (Intern:: *form[]) (std::string target) = {
		form[0] = &Intern::RobotomyRequest,
		form[1] = &Intern::ShrubberyCreation,
		form[2] = &Intern::PresidentialPardon
	};
	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == formName)
		{
			return (this->*form[i])(target);
		}
	}
    throw Intern::FormNotFoundException();
    return NULL;
}