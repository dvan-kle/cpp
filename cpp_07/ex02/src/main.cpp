#include "../incl/Array.hpp"

int main()
{
	Array<int> intArray(5);
	Array<float> floatArray(5);
	Array<double> doubleArray(5);
	Array<std::string> stringArray(5);

	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		intArray[i] = i;
		floatArray[i] = i + 0.5;
		doubleArray[i] = i + 0.5;
		stringArray[i] = "string" + std::to_string(i);
	}

	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		std::cout << "floatArray[" << i << "] = " << floatArray[i] << std::endl;
		std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
		std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
	}

	try
	{
		intArray[5] = 42;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}