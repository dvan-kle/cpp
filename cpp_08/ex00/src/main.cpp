#include "../incl/easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

	
    std::vector<int>::iterator it;

	try
	{
		it = easyfind(v, 3);
        std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	

	try
	{
    	it = easyfind(v, 24);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    return 0;
}