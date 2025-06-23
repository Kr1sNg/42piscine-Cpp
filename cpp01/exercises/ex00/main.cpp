/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:27:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 21:54:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "--- Random Chump (stack allocation) ---" << std::endl;
	randomChump("Stacky");
	
	std::cout << "--- New Zombie (heap allocation) ---" << std::endl;
	Zombie *nZ = newZombie("Heapy");
	nZ->announce();

	delete (nZ);
	return (0);
}

