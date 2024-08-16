#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_sign;
		int const			_reqGrade;
		int const			_excGrade;

	public:
		AForm(std::string name, int reqGrade, int excGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other) = delete;
		virtual ~AForm();

		std::string	getName() const;
		bool		getSign() const;
		int			getReqGrade() const;
		int			getExcGrade() const;

		void		beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& Aform);

#endif