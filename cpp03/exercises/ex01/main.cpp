/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:39:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 11:35:04 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Henry");
	ScavTrap	b("Peter");
	ScavTrap	c(a);
	ScavTrap	d;
	
	d = a;
	
	std::cout << std::endl;

	a.attack("Peter");
	b.takeDamage(99);
	b.beRepaired(15);

	std::cout << std::endl;
	
	c.attack("Henry");
	a.takeDamage(20);
	a.beRepaired(20);
	a.guardGate();
	
	std::cout << std::endl;
	
	return (0);
}