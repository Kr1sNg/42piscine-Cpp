/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:09:30 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/08 19:20:55 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the difference between iterator and const_iterator are:
// - iterator: we can read and modify the value it points to, example:
//	std::list<int>::iterator it = lst.begin();
//	*it = 99;	//=> allowed
// - but with std::list<int>::const_iterator ic = lst.begin();
//	*ic = 99; // => not allowed as the value of elem is const.
//	however, ++ic; //=> allowed as we're moving the iterator, not modifying the value of elem

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main(void)
{
	// vector of int
	std::vector<int>	vect;
	vect.push_back(2);
	vect.push_back(4);
	vect.push_back(42);
	vect.push_back(1337);
	try
	{
		std::vector<int>::iterator	it1 = easyfind(vect, 1337);
		std::cout << "Vect: Found " << *it1 << std::endl;
		
		std::vector<int>::iterator	it2 = easyfind(vect, 43);
		std::cout << "Vect: Found " << *it2 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Vect: " << e.what() << std::endl;
	}

	// list of int
	int const	arr[] = {2, 4, 42, 1337};
	std::list<int> const	lst(arr, arr + 4);
	try
	{
		std::list<int>::const_iterator il1 = easyfind(lst, 1337);
		std::cout << "Const lst: Found " << *il1 << std::endl;

		std::list<int>::const_iterator il2 = easyfind(lst, 43);
		std::cout << "Const lst: Found " << *il2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Const lst: " << e.what() << std::endl;
	}
	
	return (0);
}