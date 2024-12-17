#include "../incl/RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		RPN rpn;
		rpn.calculate(av[1]);
	}
	else
		std::cerr << "Error: Invalid number of arguments" << std::endl;
}