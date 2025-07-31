/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:41:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 23:21:21 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data	origin;
	origin.number = 42;
	origin.name = "Tom - The Cat";
	std::cout << "Origin data has its number: " << origin.number
				<< " and its name: " << origin.name << std::endl;
				
	std::cout << "Origin address: " << &origin << std::endl;
	
	std::cout << ">--- Data recovering by Serializer ---<" << std::endl;
	
	uintptr_t	u = Serializer::serialize(&origin);
	Data 		*recover = Serializer::deserialize(u);
	std::cout << "Recover data has the number: " << recover->number
				<< " and the name: " << recover->name << std::endl;
	std::cout << "Recover address: " << recover << std::endl;
	return (0);
}
