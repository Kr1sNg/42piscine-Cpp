/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:05:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/04 22:36:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMGME_
# define _PMGME_

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>	//std::lower_bound, std::swap, 
#include <vector>
#include <ctime>
#include <deque>
#include <iomanip>
#include <climits>

class PmergeMe
{
	public:
		PmergeMe(void);
		~PmergeMe();

		void	sortVector(std::vector<int> &vec);
		void	sortDeque(std::deque<int> &deq);
		
		template <typename Container>
		void	printContainer(Container const &c)
		{
			typename Container::const_iterator it = c.begin();
	
			for (; it != c.end(); ++it)
				std::cout << " " << *it;
			std::cout << std::endl;
		};
		
	private:
		PmergeMe(PmergeMe const &src);
		PmergeMe	&operator=(PmergeMe const &rhs);
	
		template <typename Container>
		void	MergeInsertionSort(Container &c);		
	
		template <typename Container>
		void	binaryInsert(Container &sorted, typename Container::value_type n);
	
};

template <typename T>
bool	compareSecond(std::pair<T, T> const &a, std::pair<T, T> const &b)
{
	return (a.second < b.second);
}

#endif
