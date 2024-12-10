#include "../incl/ScalarConverter.hpp"
#include <limits>

void display_char(const std::string &input)
{
	char c = input[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void display_int(const std::string &input)
{
	long long i = std::stoll(input);
	std::cout << "char: ";
	if (i < 32 || i > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
			std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (i > std::numeric_limits<float>::max() || i < -std::numeric_limits<float>::max())
		std::cout << "float: overflow" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	if (i > std::numeric_limits<double>::max() || i < -std::numeric_limits<double>::max())
		std::cout << "double: overflow" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void display_float(const std::string &input)
{
	float f = std::stof(input);
	std::cout << "char: ";	
	if (f < 32 || f > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	
}