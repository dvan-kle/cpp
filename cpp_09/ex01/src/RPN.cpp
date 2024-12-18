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
	std::string token;
	size_t pos = 0;
	while ((pos = str.find(" ")) != std::string::npos)
	{
		token = str.substr(0, pos);
		std::cout << token << std::endl;
		if (token == "+" || token == "-" || token == "*" || token == "/" || token == "%")
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
			if (token == "+")
				_stack.push(b + a);
			else if (token == "-")
				_stack.push(b - a);
			else if (token == "*")
				_stack.push(b * a);
			else if (token == "/")
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
			try
			{
				_stack.push(std::stod(token));
			}
			catch(const std::exception& e)
			{
				std::cerr << "Error: Invalid input" << std::endl;
				return;
			}
		}
		str.erase(0, pos + 1);
	}
	if (_stack.size() != 1)
	{
		std::cout << _stack.size() << std::endl;
		std::cerr << "Error: Invalid input" << std::endl;
	}
	else
		std::cout << _stack.top() << std::endl;
}