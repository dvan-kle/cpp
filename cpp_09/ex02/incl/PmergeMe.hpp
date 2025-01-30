#pragma once
#include <vector>
#include <list>
#include <chrono>
#include <iostream>


class PmergeMe
{
	private:
		std::vector<int> _vcUnsorted;
		std::vector<int> _vcSequence;

		std::list<int> _lstUnsorted;
		std::list<int> _lstSequence;

		std::chrono::duration<double, std::micro> _vcTime;
		std::chrono::duration<double, std::micro> _lstTime;
		
		template <typename C>
		void merge(typename C::iterator begin, typename C::iterator middle, typename C::iterator end);

		template <typename C>
		void fordJohnson(C &sequence, typename C::iterator begin, typename C::iterator end);

		template <typename C>
		void printContainer(const C &unsorted, const C &sorted);

		template <typename C>
		void printTime(C &sequence, std::chrono::duration<double, std::micro> time, std::string type);
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &other);

		void mergeInsertSort(std::vector<int> &vc);
		void mergeInsertSort(std::list<int> &lst);

		void printVector();
		void printList();
		void printVectorTime();
		void printListTime();
};