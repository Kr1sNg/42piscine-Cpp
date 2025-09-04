/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:21:24 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/04 22:30:25 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need insert(), operator[] => vector, deque
// list for list::sort()

/* Test:
For linux:
`shuf -i 1-1000 -n 3000 | tr "\n" " " `
For OSX:
`jot -r 3000 1 1000 | tr '\n' ' '`
*/

#include "PmergeMe.hpp"

bool	isDigit(char *av)
{
	for (size_t i = 0; av[i] != '\0'; ++i)
	{
		if (!std::isdigit(av[i]))
			return (false);
	}
	return (true);
}

int	main(int ac, char *av[])
{
	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe <list of positive intergers>" << std::endl;
		return (-42);
	}

	std::vector<int>	vec;
	std::deque<int>		deq;
	
	for (int i = 1; i < ac; ++i)
	{
		int	n;
		std::istringstream	iss(av[i]);
		if (!(iss >> n) || n < 0 || n > INT_MAX || !isDigit(av[i]))
		{
			std::cerr << "Error" << std::endl;
			return (-42);
		}
		vec.push_back(n);
		deq.push_back(n);
	}
	
	try
	{
		PmergeMe	sorter;
		
		std::cout << "Before: ";
		for (int i = 1; i < ac; ++i)
			std::cout << " " << av[i];
		std::cout << std::endl;
		
		clock_t	vec_start = std::clock();
		sorter.sortVector(vec);
		clock_t	vec_end = std::clock();
		
		clock_t	deq_start = std::clock();
		sorter.sortDeque(deq);
		clock_t	deq_end = std::clock();

		std::cout << "After:  ";
		sorter.printContainer(deq);
		
		std::cout << "Time to process a range of " << std::setw(4);
		std::cout << vec.size() << " elements with std::vector : ";
		std::cout << static_cast<double>(vec_end - vec_start) * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
		
		std::cout << "Time to process a range of " << std::setw(4);
		std::cout << deq.size() << " elements with std::deque  : ";
		std::cout << static_cast<double>(deq_end - deq_start) * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
	
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected Error" << std::endl;
	}
		
	return (0); 
}
