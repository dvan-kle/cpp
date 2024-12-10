#include "../incl/Serializer.hpp"
#include "../incl/Data.hpp"
#include <iostream>

int	main(void)
{
	Data	*data = new Data(12);

	std::cout << "Data value: " << data->getData() << std::endl;
	std::cout << "Data address: " << data << std::endl;

	uintptr_t raw = Serializer::serialize(data);

	std::cout << "serial number uintptr_t: " << raw << std::endl;

	Data *data2 = Serializer::deserialize(raw);

	std::cout << "Data2 value after converting: " << data2->getData() << std::endl;
	std::cout << "Data2 address after converting:  " << data2 << std::endl;

	delete data;
}