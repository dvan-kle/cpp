#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "Construction:" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << std::endl << "Types:" << std::endl;
	std::cout << "type is: " << j->getType() << " " << std::endl;
	std::cout << "type is: " << i->getType() << " " << std::endl;
	std::cout << "type is: " << wc->getType() << " " << std::endl;
	

	std::cout << std::endl << "Sounds:" << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	w->makeSound();
	wc->makeSound();

	std::cout << std::endl << "Destruction:" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete w;
	delete wc;

	return (0);
}
