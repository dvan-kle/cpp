#include "../incl/BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

BitcoinExchange::BitcoinExchange()
{
}


BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::printMap()
{
	for (auto &i : _exchangeRates)
		std::cout << i.first << " | " << i.second << std::endl;
}

void BitcoinExchange::parseLine(std::string line)
{
		std::string date;
		std::string rate;
		size_t pos = line.find(",");
		date = line.substr(0, pos);
		rate = line.substr(pos + 1);
		_exchangeRates[date] = std::stod(rate);
	
}

void BitcoinExchange::getExchangeRates() 
{
	std::ifstream file("data.csv");
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file" << std::endl;
		exit(1);
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
		parseLine(line);
}

void BitcoinExchange::getInput(std::string filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file" << std::endl;
		exit(1);
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
		checkInputLine(line);
}

void BitcoinExchange::checkInputLine(std::string line)
{
	std::string date;
	std::string rate;
	size_t pos = line.find(" | ");
	date = line.substr(0, pos);
	rate = line.substr(pos + 3);
	
}