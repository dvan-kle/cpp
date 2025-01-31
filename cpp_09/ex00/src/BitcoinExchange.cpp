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
	double rate;

	if (line.find('|') == std::string::npos || line[0] == '|' || line[line.size() - 1] == '|')
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	date = line.substr(0, line.find('|') - 1);
	if(date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Error: Invalid date" << std::endl;
		return;
	}
	for (size_t i = 0; i < date.size(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (date[i] < '0' || date[i] > '9')
		{
			std::cerr << "Error: Invalid date" << std::endl;
			return;
		}
	}
	rate = std::stod(line.substr(line.find('|') + 1));
	if (rate < 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return;
	}
	if (rate > 1000)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return;
	}
	double exchangeRate = getRate(date);
	double sum = rate * exchangeRate;
	std::cout << date << " => " << rate << " = " << sum << std::endl;
}

double BitcoinExchange::getRate(std::string date)
{
	std::map<std::string, double>::iterator it = _exchangeRates.upper_bound(date);
	if (it == _exchangeRates.begin())
	{
		return (0);
	}
	it--;
	return (it->second);
	
}