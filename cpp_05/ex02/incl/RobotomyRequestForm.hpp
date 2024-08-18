#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Aform.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other) = delete;
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other) = delete;
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const override;
};

#endif