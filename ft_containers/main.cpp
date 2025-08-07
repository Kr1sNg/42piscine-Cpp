/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:59:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/07 11:29:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "containers/Vector.hpp"
#include <iostream>

int main(void)
{
    Vector<int>	vec;
	
	for (int i = 0; i < 5; ++i)
		vec.push_back(i * 42);

	Vector<int>::iterator	it = vec.begin();
	Vector<int>::iterator	ite = vec.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << vec.at(10) << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "Caught exception: " << e.what() << '\n';
	}

	return (0);
}