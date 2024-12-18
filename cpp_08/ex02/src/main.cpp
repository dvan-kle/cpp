#include <iostream>
#include <stack>
#include "../incl/MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    mstack.push(4);

	std::cout << "Top: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Begin: " << *mstack.begin() << std::endl;
    std::cout << std::endl;

    std::cout << "Looping through stack..." << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;

    mstack.pop();
	std::cout << "Popped" << std::endl << std::endl;

    std::cout << "Top: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Begin: " << *mstack.begin() << std::endl;
    std::cout << std::endl;


    std::cout << "Iterating through stack:" << std::endl;
    for (auto &elem : mstack)
    {
        std::cout << elem << std::endl;
    }
	std::cout << std::endl << std::endl;

	MutantStack<std::string> mstack2;
	mstack2.push("Hello");	
	mstack2.push("World");
	mstack2.push("!");
	for (MutantStack<std::string>::iterator it = mstack2.begin(); it != mstack2.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
	std::cout << "Size: " << mstack2.size() << std::endl;
	mstack2.pop();
	mstack2.pop();
	mstack2.pop();
	std::cout << "Size: " << mstack2.size() << std::endl;

}

