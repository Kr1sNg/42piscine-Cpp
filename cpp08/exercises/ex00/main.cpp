/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:09:30 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/08 10:27:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int	main(void)
{
	int	arr[10];
	
	for (int i = 0; i < 10; ++i)
		arr[i] = i;
	
	int	needle = -22;
	if (easyfind(arr, needle))
		std::cout << "arr contains " << needle << std::endl;
	else
		std::cout << "arr does not contains " << needle << std::endl;
	
	return (0);
}