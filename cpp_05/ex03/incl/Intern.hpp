#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& other) = delete;
        Intern& operator=(const Intern& other) = delete;
        ~Intern();

		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

        AForm* makeForm(std::string formName, std::string target);
		AForm* PresidentialPardon(std::string target);
		AForm* RobotomyRequest(std::string target);
		AForm* ShrubberyCreation(std::string target);
};

#endif