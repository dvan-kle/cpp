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

        AForm* makeForm(std::string formName, std::string target);
};

#endif