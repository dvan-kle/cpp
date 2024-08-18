#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Aform.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other) = delete;
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other) = delete;
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const override;
};

#endif