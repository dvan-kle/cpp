#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "Construction:" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << std::endl << "Types:" << std::endl;
	std::cout << "type is: " << animal->getType() << " " << std::endl;
	std::cout << "type is: " << dog->getType() << " " << std::endl;
	std::cout << "type is: " << cat->getType() << " " << std::endl;
	std::cout << "type is: " << wc->getType() << " " << std::endl;
	

	std::cout << std::endl << "Sounds:" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	wa->makeSound();
	wc->makeSound();

	std::cout << std::endl << "Destruction:" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wa;
	delete wc;

	return (0);
}
