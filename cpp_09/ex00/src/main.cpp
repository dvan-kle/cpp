#include "../incl/BitcoinExchange.hpp"
#include <iostream>

int main(int ac, char **av)
{
	
	if (ac != 2)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}
	BitcoinExchange bitcoinexchange;

	bitcoinexchange.getExchangeRates();
	bitcoinexchange.getInput(av[1]);
	return 0;
}