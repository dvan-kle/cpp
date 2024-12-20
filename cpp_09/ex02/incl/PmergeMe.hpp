#pragma once


class PmergeMe
{
	private:
		std::vector<int> _v;
		std::dqueue<int> _d;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &other);
		
}