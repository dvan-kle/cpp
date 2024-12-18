#include "../incl/RPN.hpp"

std::stack<double> RPN::_stack;

RPN::RPN()
{
}

RPN::~RPN()
{
}

void RPN::calculate(const std::string &input)
{
	std::string str = input;
	char token;
	for (size_t i = 0; i < str.length(); i++)
	{
		token = str[i];
		if (std::isspace(token))
			continue;
		if (input[i + 1] != ' ' && input[i + 1] != '\0')
		{
			std::cerr << "Error: Invalid input" << std::endl;
			return;

		}
		if (std::isdigit(token))
			_stack.push(std::stod(std::string(1,token)));
		else if (token == '+' || token == '-' || token == '*' || token == '/')
		{
			if (_stack.size() < 2)
			{
				std::cerr << "Error: Not enough operands" << std::endl;
				return;
			}
			double a = _stack.top();
			_stack.pop();
			double b = _stack.top();
			_stack.pop();
			if (token == '+')
				_stack.push(b + a);
			else if (token == '-')
				_stack.push(b - a);
			else if (token == '*')
				_stack.push(b * a);
			else if (token == '/')
			{
				if (a == 0)
				{
					std::cerr << "Error: Division by zero" << std::endl;
					return;
				}
				_stack.push(b / a);
			}
		}
		else
		{
			std::cerr << "Error: Invalid input" << std::endl;
			return;
		}
	}
	if (_stack.size() != 1)
	{
		std::cout << _stack.size() << std::endl;
		std::cerr << "Error: Invalid input" << std::endl;
	}
	else
		std::cout << _stack.top() << std::endl;
}