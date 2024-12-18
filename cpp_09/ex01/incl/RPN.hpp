#pragma once

#include <iostream>
#include <stack>


class RPN
{
	private:
		static std::stack<double> _stack;
	public:
		RPN();
		RPN(const RPN &obj) = delete;
		const RPN &operator=(const RPN &obj) = delete;
		virtual ~RPN();


		static void calculate(const std::string &input);
		
};

