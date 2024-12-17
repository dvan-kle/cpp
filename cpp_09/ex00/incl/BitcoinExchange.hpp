#pragma once
#include <map>
#include <string>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _exchangeRates;	
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other) = delete;
        BitcoinExchange &operator=(const BitcoinExchange &other) = delete;
        ~BitcoinExchange();

		void getExchangeRates();
		void parseLine(std::string line);
		void printMap();

		void getInput(std::string filename);
		void checkInputLine(std::string line);
    
};