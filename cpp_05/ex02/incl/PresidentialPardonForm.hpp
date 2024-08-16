#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Aform.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other) = delete;
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const override;
};

#endif
