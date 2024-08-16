#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_sign;
		int const			_reqGrade;
		int const			_excGrade;

	public:
		Form(std::string name, int reqGrade, int excGrade);
		Form(const Form& other);
		Form& operator=(const Form& other) = delete;
		~Form();

		std::string	getName() const;
		bool		getSign() const;
		int			getReqGrade() const;
		int			getExcGrade() const;

		void		beSigned(Bureaucrat &bureaucrat);

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

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif