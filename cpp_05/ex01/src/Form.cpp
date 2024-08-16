#include "../incl/Form.hpp"

Form::Form(std::string name, int reqGrade, int excGrade) : _name(name), _sign(false), _reqGrade(reqGrade), _excGrade(excGrade)
{
	if (reqGrade < 1 || excGrade < 1)
		throw Form::GradeTooHighException();
	if (reqGrade > 150 || excGrade > 150)
		throw Form::GradeTooLowException();
	// std::cout << "Form called: " << _name << " has been constructed" << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _sign(other._sign), _reqGrade(other._reqGrade), _excGrade(other._excGrade)
{
	// std::cout << "Form called: " << _name << " has been copy constructed" << std::endl;
}

Form::~Form()
{
	// std::cout << "Form called: " << _name << " has been destructed" << std::endl;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSign() const
{
	return _sign;
}

int Form::getReqGrade() const
{
	return _reqGrade;
}

int Form::getExcGrade() const
{
	return _excGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _reqGrade)
		_sign = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form: " << form.getName() << ", Sign: " << std::boolalpha << form.getSign() << ", ReqGrade: " << form.getReqGrade() << ", ExcGrade: " << form.getExcGrade();
	return os;
}

