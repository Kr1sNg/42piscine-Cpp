/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:39:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 10:12:01 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dia("Dia");
	// DiamondTrap	jia("Jia");
	
	// std::cout << std::endl;
	
	// dia.attack("Jia");
	// jia.takeDamage(30);
	// jia.beRepaired(15);
	// jia.guardGate();
	
	// std::cout << std::endl;
	
	// jia.attack("Dia");
	// dia.takeDamage(25);
	// dia.beRepaired(25);
	// dia.highFivesGuys();

	// std::cout << std::endl;

	// dia.whoAmI();
	// jia.whoAmI();

	// std::cout << std::endl;

	DiamondTrap	copy;
	copy = dia;
	copy.whoAmI();
	dia.whoAmI();
	
	return (0);
}