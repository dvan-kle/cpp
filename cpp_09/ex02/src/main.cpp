#include "../incl/PmergeMe.hpp"

int check_digit(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage: ./ex02 [integers...]" << std::endl;
        return 1;
    }
    std::vector<int> vc;
    std::list<int> lst;
    for(int i = 1; i < ac; i++)
    {
        if (!check_digit(av[i]))
        {
            std::cerr << "Error: " << av[i] << " is not valid input" << std::endl;
            return 1;
        }
        vc.push_back(std::stoi(av[i]));
        lst.push_back(std::stoi(av[i]));
    }
    PmergeMe pmm;
    pmm.mergeInsertSort(vc);
    pmm.mergeInsertSort(lst);

    pmm.printVector();
    pmm.printList();
    pmm.printVectorTime();
    pmm.printListTime();
}