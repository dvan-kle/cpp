/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/23 15:16:15 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/08/16 16:53:35 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"
#include "../incl/Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat b1("Bureaucrat 1", 1);
		Bureaucrat b2("Bureaucrat 2", 150);

		Form f1("Form 1", 1, 1);
		Form f2("Form 2", 150, 150);
		Form f3("Form 3", 1, 150);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;

		b1.signForm(f1);
		b2.signForm(f2);
		b2.signForm(f3);
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}
}