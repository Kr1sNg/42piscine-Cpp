/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:57:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 10:45:39 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main(void)
{
	Zombie	*zhorde = zombieHorde( 8, "Heapie" );

	if (!zhorde)
	{
		std::cout << "Can't allocate memory" << std::endl;
		return (EXIT_FAILURE);
	}
	for (int i = 0; i < 8; i++)
	{
		zhorde[i].announce();
	}
	delete [] zhorde;
	return (0);
}