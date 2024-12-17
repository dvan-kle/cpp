#include "../incl/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	av[1] = nullptr;
	ac = 0;
	BitcoinExchange bitcoinexchange;

	bitcoinexchange.getExchangeRates();
	bitcoinexchange.printMap();
	return 0;
}