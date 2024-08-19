#include "../incl/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	// std::cout << "Bureaucrat called: " << _name << " has been constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat called: " << _name << " has been destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	// std::cout << "Bureaucrat called: " << _name << " has been constructed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	_grade = other._grade;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
	}
	catch (Bureaucrat::GradeTooHighException &exception)
	{
		std::cout << exception.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		_grade++;
	}
	catch (Bureaucrat::GradeTooLowException &exception)
	{
		std::cout << exception.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.getSign())
	{
		std::cout << _name << " cannot sign " << form.getName() << " because the form is already signed" << std::endl;
	}
	else if (_grade > form.getReqGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	if (form.getSign())
	{
		if (_grade > form.getExcGrade())
		{
			throw AForm::GradeTooLowException();
		}
		else
		{
			form.execute(*this);
			std::cout << _name << " executes " << form.getName() << std::endl;
		}
	}
	else
	{
		std::cout << _name << " cannot execute " << form.getName() << " because the form is not signed" << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other)
{
	stream << "Bureaucrat " << other.getName() << " has grade " << other.getGrade();
	return stream;
}