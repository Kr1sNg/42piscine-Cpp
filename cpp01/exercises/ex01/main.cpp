/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:57:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 13:05:21 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main(void)
{
	Zombie	*zhorde = zombieHorde( 8, "ZombieHeapie" );

	if (!zhorde)
	{
		std::cout << "Can't allocate memory" << std::endl;
		return (1);
	}
	for (int i = 0; i < 8; i++)
	{
		zhorde[i].announce();
	}
	delete [] zhorde;
	return (0);
}