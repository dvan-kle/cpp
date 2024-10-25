#include "../incl/easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    std::vector<int>::iterator it = easyfind(v, 3);
    if (it != v.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found" << std::endl;

    it = easyfind(v, 24);
    if (it != v.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found" << std::endl;

    return 0;
}