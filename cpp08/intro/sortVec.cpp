/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortVec.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:16:16 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/12 11:11:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <functional>	// std::less
#include <algorithm>	// sort, lower_bound
#include <iostream>
#include <iterator>

// Compare template parameter lets you choose the ordering
// (std::less<T> for ascending, std::greater<T> for descending).

template <typename T, typename Compare = std::less<T> >
class SortVec: public std::vector<T>
{
	public:
		SortVec(void)	{};
		SortVec(int n, const T &x = T()): std::vector<T>(n, x)
		{
			std::sort(this->begin(), this->end(), Compare());
		}

		void insert(const T & obj)
		{
			typename std::vector<T>::iterator	pos;
			// std::lower_bound : Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val.
			pos = std::lower_bound(this->begin(), this->end(), obj, Compare());
			std::vector<T>::insert(pos, obj);
		}
		
		// find the position of element obj
		int	search(const T & obj) const
		{
			typename std::vector<T>::const_iterator	it;
			
			it = std::lower_bound(this->begin(), this->end(), obj, Compare());
			if (it != this->end() && !Compare()(obj, *it) && !Compare()(*it, obj))
				return (static_cast<int>(it - this->begin()));
			else
				throw (std::runtime_error("Element not found!"));
		}
		
		void	merge(const SortVec<T, Compare> &v)
		{
			typename std::vector<T>::const_iterator	it;

			for (it = v.begin(); it != v.end(); ++it)
				insert(*it);
		}
};

int	main(void)
{
	SortVec<int>	v1;
	v1.insert(5);
	v1.insert(11);
	v1.insert(3);
	
	std::vector<int>::iterator	iter = v1.begin();
	for (; iter != v1.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;
	
	SortVec<int>	v2;
	v2.insert(4);
	v2.insert(2);
	v1.merge(v2);
	
	for (iter = v1.begin(); iter != v1.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

	try
	{
		std::cout << "Index of '3': " << v1.search(3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
