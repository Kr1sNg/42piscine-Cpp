/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:05:43 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/04 22:38:08 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
}

PmergeMe::~PmergeMe()
{
};

void	PmergeMe::sortVector(std::vector<int> &vec)
{
	MergeInsertionSort(vec);
}

void	PmergeMe::sortDeque(std::deque<int> &deq)
{
	MergeInsertionSort(deq);
}	
	
template <typename Container>
void	PmergeMe::binaryInsert(Container &sorted, typename Container::value_type n)
{
	typename Container::iterator	pos;
	
	pos = std::lower_bound(sorted.begin(), sorted.end(), n);	//first element >= n
	if (*pos == n)
		throw std::invalid_argument("Error: Duplicate numbers");
	sorted.insert(pos, n);
}

template <typename Container>
void	PmergeMe::MergeInsertionSort(Container &c)
{
	typedef typename Container::value_type T;
	
	size_t	n = c.size();
	if (n <= 1)
		return ;
	
	// Step 1 — Split into pairs and sort internally the pair
	std::list<std::pair<T, T> > pairs;
	
	for (size_t i = 0; i < n - 1; i += 2)
	{
		T	first = c[i];
		T	second = c[i + 1];
		if (first > second)
			std::swap(first, second);
		else if (first == second)
			throw std::invalid_argument("Error: Duplicate numbers");
			
		std::pair<T, T>	p(first, second);
		pairs.push_back(p);
	}
	bool	hasLast = (n % 2 != 0);
	T		last = hasLast ? c[n - 1] : 0;
	
	// Step 2 — Sort pairs based on their larger number
	pairs.sort(compareSecond<T>);

	// Step 3 - Build sorted list from largest sorted numbers
	Container	sorted;
	typename std::list<std::pair<T, T> >::const_iterator it = pairs.begin();

	for (; it != pairs.end(); ++it)
		sorted.push_back(it->second);
	
	// Step 4 - Insert pairs' smaller elements into the chain by binary insertion
	for (it = pairs.begin(); it != pairs.end(); ++it)
		binaryInsert(sorted, it->first);
	
	// Step 5 - Insert the last (if has)
	if (hasLast)
		binaryInsert(sorted, last);
	
	c = sorted;
}	

