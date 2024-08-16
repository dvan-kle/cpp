#include "../incl/AForm.hpp"

AForm::AForm(std::string name, int reqGrade, int excGrade) : _name(name), _sign(false), _reqGrade(reqGrade), _excGrade(excGrade)
{
	if (reqGrade < 1 || excGrade < 1)
		throw AForm::GradeTooHighException();
	if (reqGrade > 150 || excGrade > 150)
		throw AForm::GradeTooLowException();
	// std::cout << "AForm called: " << _name << " has been constructed" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other._name), _sign(other._sign), _reqGrade(other._reqGrade), _excGrade(other._excGrade)
{
	// std::cout << "AForm called: " << _name << " has been copy constructed" << std::endl;
}

AForm::~AForm()
{
	// std::cout << "AForm called: " << _name << " has been destructed" << std::endl;
}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSign() const
{
	return _sign;
}

int AForm::getReqGrade() const
{
	return _reqGrade;
}

int AForm::getExcGrade() const
{
	return _excGrade;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _reqGrade)
		_sign = true;
	else
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
	os << "AForm: " << Aform.getName() << ", Sign: " << std::boolalpha << Aform.getSign() << ", ReqGrade: " << Aform.getReqGrade() << ", ExcGrade: " << Aform.getExcGrade();
	return os;
}

