#include "../incl/ScalarConverter.hpp"
#include <limits>
#include <string>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	*this = obj;
}

ScalarConverter::~ScalarConverter()
{
}

const ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return *this;
}

bool check_if_float(const std::string &input)
{
	int i = 0;
	int dot = 0;
	int f = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	if (input[i] == '\0')
		return false;
	for(; input[i]; i++)
	{
		if (input[i] == '.')
			dot++;
		else if (input[i] == 'f' && input[i + 1] == '\0')
			f++;
		else if (!isdigit(input[i]))
			return false;
	}
	if (dot == 1 && f == 1)
		return true;
	return false;
}

bool check_if_double(const std::string &input)
{
	int i = 0;
	int dot = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	if (input[i] == '\0' || !isdigit(input[i]))
		return false;
	for(; input[i]; i++)
	{
		if (input[i] == '.')
			dot++;
		else if (!isdigit(input[i]))
			return false;
	}
	if (dot == 1)
		return true;
	return false;
}

bool check_if_int(const std::string &input)
{
	int i = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	if (input[i] == '\0')
		return false;
	for(; input[i]; i++)
	{
		if (input[i] == '-' || input[i] == '+')
			return false;
		else if (!isdigit(input[i]))
			return false;
	}
	return true;
}

literal_type getType(const std::string &input)
{
	if (input.length() == 1)
	{
		char first = input[0];
		if (first > 31 && first < 127)
		{
			if (isdigit(first))
				return INT;
			else
				return CHAR;
		}
	}
	else if (check_if_float(input))
		return FLOAT;
	else if (check_if_int(input))
		return INT;
	else if (check_if_double(input))
		return DOUBLE;
	else if (input == "+inf" || input == "-inf" || input == "nan" || input == "nanf" || input == "-inff" || input == "+inff")
		return WORD;
	return INVALID;
}

void ScalarConverter::convert(const std::string &input)
{
	literal_type type = getType(input);
	switch(type)
	{
		case CHAR:
		{
			print_char(input);
			break ;
		}
		case INT:
		{
			print_int(input);
			break ;
		}
		case FLOAT:
		{
			print_float(input);
			break ;
		}
		case DOUBLE:
		{
			print_double(input);
			break ;
		}
		case WORD:
		{
			print_word(input);
			break ;
		}
		case INVALID:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			break ;
		}
	}
}


void print_char(const std::string &input)
{
	char c = input[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}
void print_int(const std::string &input)
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

void print_float(const std::string &input)
{
	double f = std::stof(input);
		if (static_cast<int>(f) < 32 || static_cast<int>(f) > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
			std::cout << "int: overflow" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		if (static_cast<int>(f) - f == 0)
		{
			std::cout << "float: " << f << ".0f" << std::endl;
			std::cout << "double " << static_cast<double>(f) << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double " << static_cast<double>(f) << std::endl;
		}
	
}

void print_double(const std::string &input)
{
	double d = stod(input);
		if (static_cast<int>(d) < 32 || static_cast<int>(d) > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
			std::cout << "int: overflow" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) <<  std::endl;
		if (static_cast<int>(d) - d == 0)
		{
			std::cout << "float: " << static_cast<float>(d)<< ".0f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
}
void print_word(const std::string &input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (input == "nanf" || input == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (input == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
	{
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input << std::endl;
	}
}