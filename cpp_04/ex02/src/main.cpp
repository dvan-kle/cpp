#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include <iostream>

int main()
{
	const Animal *array[6];
	std::cout << "Constructing" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << std::endl << "Sounds:" << std::endl;
	for (int i = 0; i < 6; i++)
		array[i]->makeSound();
	std::cout << std::endl << "Deleting array:" << std::endl;
	for (int i = 0; i < 6; i++)
		delete array[i];
	return 0;
}
