/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:21:24 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/31 10:02:51 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// vector
// list for list::sort()

#include <iostream>

int	main(int ac, char *av[])
{
	if (ac < 2)
	{
		std::cout << "Usage: ./PmergeMe <list of positive intergers>" << std::endl;
		return (-42);
	}

	for (int i = 1; i < ac; ++i)
		std::cout << av[i] << " ";
	std::cout << std::endl;
	return (0); 
}



