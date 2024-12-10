#include "../incl/ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    	return (ScalarConverter::convert(argv[1]), 0);
	else
		std::cout << "Error: Invalid number of arguments" << std::endl;
	return 1;
}