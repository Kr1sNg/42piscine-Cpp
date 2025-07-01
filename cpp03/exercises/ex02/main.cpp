/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:39:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/01 23:47:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	scav("Henry");
	ScavTrap	scavb(scav);
	FragTrap	frag("Peter");
	FragTrap	fragg;
	fragg = frag;

	std::cout << std::endl;
	
	scav.attack("Peter");
	frag.takeDamage(20);
	frag.beRepaired(15);

	std::cout << std::endl;
	
	frag.attack("Henry");
	scav.takeDamage(30);
	scav.beRepaired(30);
	
	std::cout << std::endl;
	
	scav.guardGate();
	frag.highFivesGuys();
	
	return (0);
}