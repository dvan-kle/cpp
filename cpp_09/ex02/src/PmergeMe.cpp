#include "../incl/PmergeMe.hpp"

template <typename C>
void PmergeMe::merge(typename C::iterator begin, typename C::iterator middle, typename C::iterator end)
{
    C left(begin, middle);
    C right(middle, end);
    auto leftIt = left.begin();
    auto rightIt = right.begin();
    auto sequenceIt = begin;
    while (leftIt != left.end() && rightIt != right.end())
    {
        if (*leftIt < *rightIt)
        {
            *sequenceIt = *leftIt;
            leftIt++;
        }
        else
        {
            *sequenceIt = *rightIt;
            rightIt++;
        }
        sequenceIt++;
    }
    while (leftIt != left.end())
    {
        *sequenceIt = *leftIt;
        leftIt++;
        sequenceIt++;
    }
    while (rightIt != right.end())
    {
        *sequenceIt = *rightIt;
        rightIt++;
        sequenceIt++;
    }

}

template <typename C>
void PmergeMe::fordJohnson(C &sequence, typename C::iterator begin, typename C::iterator end)
{
    if (std::distance(begin, end) > 1)
    {
        auto middle = std::next(begin, std::distance(begin, end) / 2);
        fordJohnson(sequence, begin, middle);
        fordJohnson(sequence, middle, end);
        merge<C>(begin, middle, end);
    }

}

template <typename C>
void PmergeMe::printContainer(const C &unsorted, const C &sorted)
{
    if (unsorted.size() < 6)
    {
        std::cout << "Before: ";
        for (auto it = unsorted.begin(); it != unsorted.end(); it++)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std::cout << "After: ";
        for (auto it = sorted.begin(); it != sorted.end(); it++)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
    if (unsorted.size() > 5)
    {
        std::cout << "Before: ";
        for (auto it = unsorted.begin(); it != std::next(unsorted.begin(), 4); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << "... ";
        std::cout << std::endl;

        std::cout << "After: ";
        for (auto it = sorted.begin(); it != std::next(sorted.begin(), 4); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << "... ";
        std::cout << std::endl;
    }
}

template <typename C>
void PmergeMe::printTime(C &sequence, std::chrono::duration<double, std::micro> time, std::string type)
{
    std::cout << "Time to process a range of " << sequence.size() << " elements with std::" << type << ": " << time.count() << " microseconds" << std::endl;

}

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    _vcUnsorted = other._vcUnsorted;
    _vcSequence = other._vcSequence;
    _lstUnsorted = other._lstUnsorted;
    _lstSequence = other._lstSequence;
    _vcTime = other._vcTime;
    _lstTime = other._lstTime;
}

PmergeMe::~PmergeMe()
{

}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        _vcUnsorted = other._vcUnsorted;
        _vcSequence = other._vcSequence;
        _lstUnsorted = other._lstUnsorted;
        _lstSequence = other._lstSequence;
        _vcTime = other._vcTime;
        _lstTime = other._lstTime;
    }
    return *this;
}

void PmergeMe::mergeInsertSort(std::vector<int> &vc)
{
    _vcUnsorted = vc;
    _vcSequence = vc;
    auto start = std::chrono::high_resolution_clock::now();
    fordJohnson(_vcSequence, _vcSequence.begin(), _vcSequence.end());
    auto end = std::chrono::high_resolution_clock::now();
    _vcTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
}

void PmergeMe::mergeInsertSort(std::list<int> &lst)
{
    _lstUnsorted = lst;
    _lstSequence = lst;
    auto start = std::chrono::high_resolution_clock::now();
    fordJohnson(_lstSequence, _lstSequence.begin(), _lstSequence.end());
    auto end = std::chrono::high_resolution_clock::now();
    _lstTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
}

void PmergeMe::printVector()
{
    printContainer(_vcUnsorted, _vcSequence);
}

void PmergeMe::printList()
{
    printContainer(_lstUnsorted, _lstSequence);
}

void PmergeMe::printVectorTime()
{
    printTime(_vcSequence, _vcTime, "vector");
}

void PmergeMe::printListTime()
{
    printTime(_lstSequence, _lstTime, "list");
}